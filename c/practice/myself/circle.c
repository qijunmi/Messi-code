#include <stdio.h>

void drawpoint(int axis_x, int axis_y)
{
	static int cur_line = 0;
	axis_y -= cur_line;
	while(axis_y)
	{
		printf("\n");
		axis_y--;
		cur_line++;
	}

	while(axis_x)
	{
		printf(" ");
		axis_x--;
	}

	printf("*");

}

int main()
{
	int i = 0, j = i+1;
	while(j < 10)
	{
		drawpoint(i++,j++);
	}

	return 0;
}
