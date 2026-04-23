#include <stdio.h>
#include <conio.h>
#include <windows.h>

int index = 0;
HANDLE screen[2];

int size = sizeof(screen) / sizeof(screen[0]);

void initialize()
{
	CONSOLE_CURSOR_INFO cursor;

	cursor.bVisible = FALSE;

	for (int i = 0; i < 2; i++)
	{
		screen[i] = CreateConsoleScreenBuffer
		(
			GENERIC_READ | GENERIC_WRITE,
			0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL
		);

		SetConsoleCursorInfo(screen[i], &cursor);
	}

	// 화면 버퍼를 2개 생성합니다.
}

void flip()
{
	SetConsoleActiveScreenBuffer(screen[index]);
	if (index == 0)
	{
		index = 1;
	}
	else
	{
		index = 0;
	}
}

void clear()
{
	COORD position = { 0, 0 };

	DWORD dwrod;

	CONSOLE_SCREEN_BUFFER_INFO buffer;

	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

	GetConsoleScreenBufferInfo(console, &buffer);

	int width = buffer.srWindow.Right - buffer.srWindow.Left + 1;
	int height = buffer.srWindow.Bottom - buffer.srWindow.Top + 1;

	FillConsoleOutputCharacter(screen[index], ' ', width * height, position, &dwrod);
}

void release()
{
	for (int i = 0; i < size; i++)
	{
		CloseHandle(screen[i]);
	}
}

void render(int x, int y, const char * character)
{
	DWORD dword;
	COORD position = { x,y };

	SetConsoleCursorPosition(screen[index], position);
	WriteFile(screen[index], character, strlen(character), &dword, NULL);
	          
}
int main()
{
	initialize();
	
	int x = 0;

	while (1)
	{
		flip();

		clear();
		x++;
		if (x > 30) x = 0;

		render(x, 5, "A");

		Sleep(100);
	}

	release();
	return 0; 
}