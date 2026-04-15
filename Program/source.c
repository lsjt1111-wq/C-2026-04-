#include <stdio.h>
#include <windows.h>


int main()
{
#pragma region 파일 입출력
	// 첫 번째 매개 변수 (파일의 이름)
	// 두 번째 매개 변수 (파일의 입출력 모드)

	FILE* file = fopen("data.txt", "w");

	fputs("안녕\n누구세요\n저 아세요?", file);

	fclose(file);
	
	fopen("data.txt", "r");
	
	// 상대 경로 & 절대 경로 = 숙제입니다. 

#pragma endregion

	return 0; 
}