#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// void printMax(int x, int y)
// {
// 	printf("x의 값 : %d\n", x);
// 	printf("y의 값 : %d\n", y);
// }
// 
// void swap(int* max_x, int* max_y)
// {
// 	int temporary = *max_x;  // 여기다가 10을 넣고 
// 
// 	*max_x = *max_y;  // x 자리에 y값을 덮어요 
// 	// 그러면 x 값은 20이 되고 y값도 20이죠?
// 	*max_y = temporary;
// }  // 여기다가 임시 변수에 넣어놨던 10이란 값을 다시 복구시켜요 
// // 그럼 결론적으로 x는 20 y는 10이 됩니다 
// // 제가 이해한게 맞나요?? 
// // void checkNumbers(int defense[], int atrtack[])
// // {
// // 
// // }
// void printStart(int round)
// {
// 	printf("=== %d 라운드 시작! ===\n", round);
// }
// int checkNumbers(int def[], int atk[])
// {
// 	int count = 0;
// 	for (int i = 0; i < 3; i++)
// 	{
// 		if (def[i] == atk[i]) {
// 			count++;
// 		}
// 	}
// 	return count;
// }
// int isEvem(int num)
{

}

void main()
{

	srand(time(NULL));
#pragma region 포인터 1 
	// 플레이어가 상점에서 아이템을 구매하려고 합니다.
	// 현재 골드가 얼마인지 입력받고, 포인터를 통해 차감해보세요!
	// 1. int myGold;
	// 2. scanf_s를 사용하여 현재 골드를 입력 받으세요!
	// 3.포인터 변수 int *ptrGold = &myGold; 를 선언하여 내 골드의 주소를 담으세요
	// 4. 아이템 가격이 500골드라고 가정하고, 포인터 ptrGold를 사용해서 myGold의 
	// 값을 500 차감하세요. (예: *ptrGold -= 500;)
	// 5. 최종적으로 myGold 변수를 출력해서 값이 잘 깎였는지 확인하세요.

	// int myGold = 0;
	// 
	// printf("현재 보유중인 골드를 입력하세요: ");
	// scanf_s("%d", &myGold);
	// 
	// int * ptrGold = &myGold;
	// 
	// printf("현재 보유중인 골드 : %d\n", myGold);
	// 
	// *ptrGold -= 500;
	// 
	// printf("아이템 구매 후 남은 골드 : %d\n", myGold);
#pragma region 포인터 2
	// 게임 속 대장장이가 되어 무기를 강화하는 로직을 짜야 합니다.
	// 강화에 성공하면 무기의 공격력이 포인터를 통해 직접 수정되어야 합니다.

	// int weaponPower = 100; 
	// int upgradeValue = 0;
	// 
	// int* ptrPower = &weaponPower;  // 무기 공격력의 주소를 저장함.
	// 
	// printf("강화할 수치를 입력하세요: "); 
	// scanf_s("%d", &upgradeValue); // 강화할 수치 값을 입력받을 함수 호출!
	// 
	// *ptrPower += upgradeValue; // 여기서 포인터 함수에 입력받은 값을 더함.
	// 
	// printf("강화 성공! 현재 공격력 : %d\n", weaponPower);
	// // 더한 값을 출력!




#pragma endregion

#pragma endregion

#pragma region 2026. 03. 25 공부 내용 복습본
	// 1단계 주소 연산자

	// int level = 1;
	// 
	// printf("내 레벨의 주소는 %p입니다\n\n", &level);
	// 
	// // 2단계 표준 입력 함수
	// 
	// int userID = 0;
	// 
	// printf("택배 왔습니다! 주소를 입력해주세요!: ");
	// scanf_s("%d", &userID);
	// 
	// printf("userID의 주소는 %d입니다\n", userID);
	// 
	// // 3단계 포인터
	// int * ptrLevel = &level;
	// 
	// printf("level 변수의 주소 : %p\n", &level);
	// printf("ptrLevel 변수의 값 : %p\n", ptrLevel);
	// printf("ptrLevel 변수의 주소 : %p\n\n", &ptrLevel);
	// 
	// *ptrLevel = 10;
	// 
	// printf("level 변수의 값 : %d\n", level);
	// printf("ptrlevel 변수가 가리키는 값 : %d\n", *ptrLevel);


#pragma endregion

#pragma region 포인터 복습
	// int posX = 10;   // posX 변수를 만들고 값을 10으로 설정.
	// 
	// int * run = &posX;  // 포인터 변수를 만듬. 
	// 
	// printf("posX의 주소 값 : %p\n", &posX);
	// printf("run의 변수 값 : %p\n", run);
	// printf("run의 주소 값 : %p\n", &run);
	// 
	// *run = 50;  // 포인터 변수의 값을 50으로 바꾸고 
	// 
	// printf("posX의 변경된 값 : %d\n", posX);
	// printf("run 변수가 가리키는 값 : %d\n", *run); // 호출.




#pragma endregion

#pragma region 포인터 복습 2
	// int myGold = 1000;  // 초기 골드 변수를 선언.
	// int myHP = 50;      // 초기 체력 변수를 선언.
	// int potionCount = 0; // 구매할 포션 개수의 변수를 선언.
	// 
	// int * pGold = &myGold; // 포인터 구매 후 차감할 포인터 변수를 선언.
	// int* pHP = &myHP;      // 체력을 회복 후 증가시킬 포인터 변수를 선언.
	// 
	// printf("구매할 포션 개수를 입력하세요(개당 200골드): ");
	// scanf_s("%d", &potionCount);
	// 
	// *pGold -= potionCount * 200;
	// printf("포션을 구매하였습니다! 남은 골드는 %d입니다!\n", *pGold);
	// 
	// *pHP += potionCount * 30;
	// printf("체력이 회복되엇습니다! 현재 체력은 %d입니다\n", *pHP);
#pragma endregion

#pragma region 포인터 복습 3

// 1단계 범용 포인터
// void * ptr = NULL;
// 
// char grade = 'S';
// int level = 99;
// 
// ptr = &grade;
// 
// printf("grade의 주소 값 : %p\n", &grade);
// printf("ptr 변수의 값 : %p\n", ptr); // 위와 아래의 주소 값이 맞는지 확인!
// 
// *(char*)ptr = 'A';  // 오늘 배운 형 변환을 해준다.
// 
// // void 변수는 어떤 값을 출력해야 하는지 모르기 때문에 
// // ()괄호를 이용하여 서식 지정자를 넣어준다.
// 
// printf("grade 변수의 값 : %c\n", grade);
// printf("ptr 변수의 값 : %c\n\n", *(char *)ptr); // 위와 아래의 변수 값이 맞는지 확인!
// 
// ptr = &level;  // 포인터 변수를 level 주소로 바꿔주고!
// 
// printf("level의 주소 값 : %p\n", &level);
// printf("ptr 변수의 값 : %p\n", ptr);  // 위와 아래의 주소 값이 맞는지 확인!
// 
// *(int*)ptr = 150; // 형 변환을 해주고!
// 
// printf("level 변수의 값 : %d\n", level);
// printf("ptr 변수의 값 : %d\n\n", *(int*)ptr); // 위와 아래의 변수 값이 맞는지 확인!
// 
// // 2단계 상수 지시 포인터 
// 
// int ver1 = 10;
// int ver2 = 20;
// 
// const int * pVer = NULL;
// 
// pVer = &ver1;
// 
// printf("ver1의 주소 값 : %p\n", &ver1);
// printf("pVer 변수의 값 : %p\n\n", pVer);
// 
// // *pVer = 30;  이렇게 값 변경이 불가능하다!  (에러 발생 확인 후 주석 처리 완료!)
// // 
// // 불가능한 이유는 상수 const이 int 앞에 선언이 되어있기 때문이다
// 
// pVer = &ver2;
// 
// printf("ver2의 주소 값 : %p\n", &ver2);
// printf("pVer 변수의 값 : %p\n\n", pVer);
// 
// // 다만 포인터가 주소값을 지정하여 변경은 가능하다!
// 
// // 3단계 포인터 상수 
// 
// int myID = 1234;
// int otherID = 5678;
// 
// int * const pID = &myID; // myID를 포인터 변수에 선언을 함.
// 
// printf("myID의 주소 값 : %p\n", &myID);
// printf("pID 변수의 값 : %p\n\n", pID); // 주소 값이 같은지 확인하기 위해 출력!
// 
// // pID = &otherID; // 에러 뜨는지 확인 후 주석 처리 완료!
// 
// *pID = 9999; 
// // 포인터 상수는 상수 지시 포인터와 다르게
// // 주소 값은 변경이 불가능하나 다음과 같이 포인터 값 변경은 가능하다!
// 
// printf("myID 변수의 값 : %d\n", myID);
// printf("pID 변수의 값 : %d\n", *pID); // 변수의 값이 변경되고 값이 같은지 확인!

#pragma endregion

#pragma region 배열 복습 
// int monsterATK[ ] = { 100, 200, 300, 400 };
// 
// int* p = monsterATK;
// 
// int size = sizeof(monsterATK) / sizeof(monsterATK[0]);
// 
// for (int i = 0; i < size; i++)
// {
// 	printf("monster[%d]의 공격력 : %d\n", i, monsterATK[i]);
// }
// 
// printf("p 변수의 값 : %p\n", p);
// printf("monsterATK의 주소 값 : %p\n", monsterATK);
// 
// p = p + 2;
// 
// *p = 550;
// 
// printf("monsterATK[2]의 값 : %d\n", monsterATK[2]);
// printf("p 변수의 값 : %p\n", p);


#pragma endregion

#pragma region 함수 복습
// printMax(10, 20);

// int x = 10;
// int y = 20;
// 
// swap(&x, &y);
// 
// printf("x의 값 : %d\ny의 값: %d\n", x, y);
#pragma endregion

#pragma region 미니 게임
// 지금까지 배웠던 내용들을 바탕으로 간단한 미니 게임 하나 만들겠습니다

// printStart(1);
// 
// int defense[3];
// int attack[3];
// int totalScore = 0;
// 
// for (int round = 1; round <= 3; round++)
// {
// 	printStart(round);
// 	for (int i = 0; i < 3; i++) {
// 		defense[i] = rand() % 10 + 1;
// 	}
// 	printf("상대방이 숫자 3개를 숨겼습니다\n");
// 
// 	printf("1~10 사이의 숫자3개를 예측해서 입력하세요: ");
// 	for (int i = 0; i < 3; i++)
// 	{
// 		scanf_s("%d", &attack[i]);
// 	}
// 
// 	int result = checkNumbers(defense, attack);
// 
// 	printf("\n>>> 결과: [%d]개 맞혔습니다!\n", result);
// 	printf("정답이었던 숫자: %d, %d, %d\n", defense[0], defense[1], defense[2]);
// 
// 	totalScore += (result * 10);
// }
// 
// printf("\n=================================\n");
// printf("최종 게임 종료! 당신의 총 점수: %d점\n", totalScore);
// printf("\n=================================\n");










#pragma endregion

}