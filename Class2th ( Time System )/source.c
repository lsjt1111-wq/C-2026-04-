#include <stdio.h>
#include <windows.h>

void shuffle(int array[], int size)
{

	for (int i = 0; i < size; i++)
	{
		int seed = rand() % size;

		int temporary = array[seed];

		array[seed] = array[i];

		array[i] = temporary;
	}


}




int main()
{

#pragma region 의사 난수
	// 0 ~ 32767 사이의 난수 값을 반환하는 함수입니다.

	// UTC 기준으로 1970년 1월 1일 0시 0분 0초부터 경과된 
	// 시간을 초(sec)로 반환하는 함수입니다. 

	// srand : rand()가 사용할 초기값(seed)을 설정하는 함수

	// srand(time(NULL));
	// 
	// int random = (rand() % 10) + 1;
	// 
	// printf("%d", random);


#pragma endregion

#pragma region 셔플 함수
	// srand(time(NULL));

	// int score[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	// int size = sizeof(score) / sizeof(score[0]);
	// 
	// shuffle(score, size);
	// 
	// for (int i = 0; i < size; i++)
	// {
	// 	printf("score[%d]의 값: %d\n", i, score[i]);
	// }



#pragma endregion

#pragma region MyRegion

	srand(time(NULL));


	int computer = rand() % 50 + 1;

	int score = 0;

	int life = 5;


	while (life > 0)
	{
		printf("Life : %d\n", life);
		printf("컴퓨터가 숨겨놓은 1 ~ 50 숫자 중 하나를 입력하세요: ");

		scanf_s("%d", &score);

		printf("\n");

		if (score == computer)
		{
			break;
		}
		else if (score > computer)
		{
			life--;

			printf("컴퓨터가 가지고 있는 값보다 큽니다\n");
		}
		else if (score < computer)
		{
			life--;

			printf("컴퓨터가 가지고 있는 값보다 작습니다\n");
		}
	}

	printf("\n");

	if (life <= 0)
	{
		printf("D E F E A T");
	}
	else
	{
		printf("V I C T O R Y");
	}





#pragma endregion

#pragma region 





	return 0;
}