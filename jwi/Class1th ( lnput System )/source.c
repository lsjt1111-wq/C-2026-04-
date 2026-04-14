#include <stdio.h>
#include <windows.h>

#define SIZE 10

int main()
{

#pragma region 포인터 배열

	const char* dialogue[SIZE] = { NULL, };

	dialogue[0] = "안녕하세요 사건을 조사중인 강 팀장님 맞으신가요";
	dialogue[1] = "네 맞습니다.";
	dialogue[2] = "시간 내주셔서 감사합니다";
	dialogue[3] = "바로 본론으로 들어가시죠";
	dialogue[4] = "범인이 피해자를 협박하고 사건을 일으켰다죠?";
	dialogue[5] = "네 이게 범인이 놓고간 물건입니다";
	dialogue[6] = "단서를 좀 더 찾아보면 알 수 있을 거 같습니다.";
	dialogue[7] = "그런데 저 앞에 있는 물건은 뭘까요";
	dialogue[8] = "그러게요 저것부터 먼저 조사해보죠";
	dialogue[9] = "좋습니다";


	// 0x0000 : 이전에 누른 적이 없고 호출 시점에도 눌려있지 않은 상태

	// 0x0001 : 이전에 누른 적이 있고 호출 시점에는 눌려있지 않은 상태

	// 0x8000 : 이전에 누른 적이 없고 호출 시점에는 눌려있는 상태

	// 0x8001 : 이전에 누른 적이 있고 호출 시점에도 눌려있는 상태

	int index = 0;


	while (1 < SIZE)
	{
		if (GetAsyncKeyState(VK_SPACE) & 0x0001)
		{
			if (index < SIZE)
			{
				if (index % 2 == 0)
				{
					printf("[탐정]: %s\n", dialogue[index]);
				}
				else
				{
					printf("[강 팀장]: %s\n", dialogue[index]);
				}

				index++;
			}
		}
	}

	printf("대화가 종료되었습니다.");

#pragma endregion


	return 0;
}