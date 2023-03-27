#include<stdio.h>
#include<math.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i = a; i >= 1; i--)
	{
		if(i >= b)
		{
			for(int j = 1; j <= b; j++)
			printf("%c", 64 + b);
		}
		else
		{
			int k = i;
			for(int j = 1; j <= b; j++)
			{
				if(k >= b)
				printf("%c", 64 + b);
				else
				printf("%c", 64 + k);
				k++;
			}
		}
		printf("\n");
	}
}
