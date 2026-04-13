#include <stdio.h>

int main()

{
#pragma region 3.18 복습 내용 서식 지정자

	// // 서식 지정자 예제
	// char name = 'S';
	// // // 캐릭터 닉네임
	// int level = 20;
	// // // 레벨 
	// float atk = 3.5f;
	// // 공격력 

	// printf("name = %c\n", name);
	// printf("level = %d\n", level);
	// printf("atk = %f\n", atk);

#pragma endregion

#pragma region 상수

// 상수 예제

// const int  BIRTHDAY = 20040127;
// 
// printf("나의 생일 : %d\n", BIRTHDAY);

#pragma endregion

#pragma region 비트 연산자
// 비트 연산자는 4가지로 이루어져 있습니다.
// AND, OR, XOR, NOT
// AND(&) : 서로 값이 1이여야 1로 반환해 줍니다.
// OR(|) : 둘 중 하나만 1이여도 됩니다.
// XOR(^) : 서로 달라야 1로 반환해 줍니다.
// NOT(~) : 0은 1로 1은 0으로 뒤집습니다.
// 보통의 비트 연산자는 2진수로 만들어줘야 합니다. 그러기 위해서는
// 변수를 2로 나누어 질때 까지 나눈 후 값을 구합니다.

#pragma region AND 연산자

// int Dash = 1;  // 0000 0001
// int Rage = 3; // 0000 0011
//               // ---------
//               // 0000 1000
// 
// printf("Dash & Rage : 현재 내가 착용한 아이템은 %d", Dash & Rage);

// 1번 문제 
	int a = 15; // 0000 1111; 
	int b = 7;  // 0000 0111;
	// 0000 0111;

	printf("%d\n", a & b);

	// 1번 문제의 출력되는 값은 7 이다.

// 2번 문제
	int x = 8; // 0000 1000;
	int y = 4; // 0000 0100;
	// 0000 1100;

	printf("%d\n", x | y);

	// 2번 문제의 출력되는 값은 12다.

// 3번 문제
	int num = 5; // 0000 0101;
	// 0010 1000;

	printf("%d\n", num << 3);

	// 3번 문제의 출력되는 값은 40이다.


	int max = 3; // 0000 0011;

	printf("%d\n", max << 2);






#pragma endregion

#pragma region OR 연산자 

#pragma endregion


#pragma endregion

	return 0;

}