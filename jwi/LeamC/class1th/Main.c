#include <stdio.h>
#include <windows.h>

int main()

{
	// 출력문 3가지
	// putchar, puts, printf
	// putchar 하나의 문자를 화면에 출력한다.
	// putchar('1');
	// puts("안녕하세요");
	// printf("형식(포멧)", 적용값1, 적용값2...... 적용값n);
	// printf("안녕하세요~ 저는 %s입니다. 나이는 %d 세 입니다.", "홍길동", 18);
	// 입력서식 %d, %s, %f, %c, %u
	// 정수를 입력받을 때
	// 문자열을 입력받을 때
	// 실수를 입력받을 때
	// 문자를 입력받을 때
	// 부호가 없는 정수를 입력받을 때
	// printf("-19 = %d, -19 = %u", -19, -19);
	// printf("원주율은 %f 입니다." 3.1415f);

	// 입력문 3가지.
	// getchar, gets_s, scanf_s
	// char buffer[255] = { 0, };  // 입력받을 문자의 저장소 같은 개념
	// int num = 0;
	// printf("입력하세요: ");
	// // putchar(getchar());
	// //gets_s(buffer, sizeof(buffer));
	// //puts(buffer);
	// // gets_s 문자 전체를 입력받는다. 
	// scanf_s("%s %d", buffer, sizeof(buffer), &num);
	// // scanf_s 사용자가 만든 형식에 맞춰서 입력문자를 입력하는 것이다.
	// printf("%s %d", buffer, num);
	// 
	// 
	// 
	// 
	// system("pause");
	// return 0;
}
