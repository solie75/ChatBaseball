// Copyright Epic Games, Inc. All Rights Reserved.

#include "UmpireBPLibrary.h"
#include "Umpire.h"
#include <string>

UUmpireBPLibrary::UUmpireBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

TArray<int> UUmpireBPLibrary::CalculateStrike(FString _input)
{
	TArray<int> result;
	result.Init(0, 2);

	// 입력된 수가 범위에 맞지 않은 경우
	if (_input.Len() != 3)
	{
		GEngine->AddOnScreenDebugMessage(
			-1,
			5,
			FColor::Blue,
			TEXT("please input 3 digit number. Out!")
		);
		UE_LOG(LogTemp, Warning, TEXT("please input 3 digit number. Out!"));
		return result;
	}

	// 입력된 수가 중복이 있을 때
	//std::vector<bool> temp(9, false);
	TArray<int> temp;
	temp.Init(0, 9);
	for (char c : _input)
	{
		if (temp[c - '1'] == 1)
		{
			GEngine->AddOnScreenDebugMessage(
				-1,
				5,
				FColor::Blue,
				TEXT("Each digit cannot be duplicated. Out!")
			);
			UE_LOG(LogTemp, Warning, TEXT("Each digit cannot be duplicated. Out!"));
			return result;
		}
		temp[c - '1'] = 1;
	}

	// 컴퓨터의 랜덤 수
	//std::vector<bool> temp2(9, false);
	TArray<int> temp2;
	temp2.Init(0, 9);
	FString str;
	for (int i = 0; i < 3; )
	{
		int Random = FMath::RandRange(1, 9);
		if (temp2[Random - 1] == 0)
		{
			temp2[Random - 1] = 1;
			++i;
			str.AppendChar(Random + '0');
		}
	}

	 // strike, ball

	for (int i = 0; i < 3; i++)
	{
		// 스트라이크 검사
		if (_input[i] == str[i])
		{
			++result[0];
		}
		else
		{
			// 볼 검사
			for (int j = 0; j < 3; j++)
			{
				if (_input[i] == str[j])
				{
					++result[1];
				}
			}
		}
	}
	
	GEngine->AddOnScreenDebugMessage(
		-1,
		5,
		FColor::Blue,
		FString::Printf(TEXT("Player Ball : %s, Server Ball : %s, Strike Count : %d, Ball Count : %d"), *_input, *str, result[0], result[1])
	);
	UE_LOG(LogTemp, Warning, TEXT("Player Ball : %s, Server Ball : %s, Strike Count : %d, Ball Count : %d"), *_input, *str, result[0], result[1]);

	return result;
}
