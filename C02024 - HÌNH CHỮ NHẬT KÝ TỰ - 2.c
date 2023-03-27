#include<stdio.h>
#include<math.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if(a <= b)
	{
		for(int i = 1; i <= a; i++)
		{
			for(int j = i; j <= b; j++)
			{
				printf("%c", 64 + j);
			}
			for(int k = i - 1; k >= 1; k--)
			{
				printf("%c", 64 + k);
			}
			printf("\n");
		}
	} else {
		for(int i = 1; i <= b; i++)
		{
			for(int j = i; j <= b; j++)
			{
				printf("%c", 64 + j);
			}
			for(int k = i - 1; k >= 1; k--)
			{
				printf("%c", 64 + k);
			}
			printf("\n");
		}
		for(int i = b + 1; i <= a; i++)
		{
			for(int j = b; j >= 1; j--)
			{
				printf("%c", j + 64);
			}
			printf("\n");
		}
	}
}
