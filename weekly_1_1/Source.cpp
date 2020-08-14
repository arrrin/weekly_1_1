#include<stdio.h>
int main()
{
	int x, y;
	printf("Enter number = ");
	scanf("%d", &x);
	printf("Enter number = ");
	scanf("%d", &y);
	if (x < y)
	{
		for (int i = x; i <= y; i++)
		{
			if (i % 2 != 0)
			{
				printf("%d ", i);
			}
		}
	}
	else if (x > y)
	{
		for (int i = x; i >= y; i--)
		{
			if (i % 2 != 0)
			{
				printf("%d ", i);
			}
		}
	}
	else if (x = y)
	{
		if (x % 2 != 0)
			printf("%d", x);
	}
}