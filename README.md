 1. Plugin 생성. -> 함수 생성 ( Calculate Strike)
	1. 입력된 수의 범위와 중복 여부 검사
	2. 서버의 난수 생성
	3. 스트라이크, 볼, 아웃 검사.
2. Widget 생성 (name WBP_InputBall)
	1. Editable Text 1개 (투구 배합 입력), Text 4개 (Ining Count, Player Win Count, Server Win Count, Who's Turn)
3. Level 생성
	2. Level BeginPlay -> Create Widget -> Add Viewport
	3. Editable Text Box -> On Text Comitted -> Switch on ETextCommit -> Custom Event Dispatch (SetMessageToUserController) 
4. GameMode 생성
	1. Custom Event (name CalculateBall) -> Calculate Strike -> Plugin 의 계산에 따른 멤버 변수 데이터 업데이트 
	2. Custom Event (name Update Widget Data) -> 4 개의 Text 를 Update
5. PlayerController 생성
	1. Custom Event (name OnSendBallToServer) -> Get Game Mode -> Calculate Ball -> Update Widget Data
	2. Begin Play -> Get All Widgets of Class -> Cast to WBP_InputBall -> Bind Event to Set Message to User Controller (bind (Create Event (OnSendBallToServer(inputBall)))) -> Update Widget Data