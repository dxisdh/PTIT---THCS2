#include<stdio.h>
#include<math.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int k = 1;
	for(int i = 1; i <= b; i++)
	{
		if(i == 1)
		printf("@");
		else
		{
			printf("%c", 64 + k);
			k++;
		}
	}
	printf("\n");
	for(int i = 1; i <= a - 1; i++)
	{
		int k = i;
		for(int j = 1; j <= b; j++)
		{
			if(k >= b - 1)
			printf("%c", 64 + (b - 1));
			else
			printf("%c", 64 + k);
			k++;
		}
		printf("\n");
	}
}
