#include<stdio.h> 

int main() 
{ 
	int n;
	scanf("%d", &n);
	int k = 97;
	for(int i = 1; i <= n; i++)
	{
		if(i % 2 == 1)
		{
			for(int j = 1; j <= i; j++)
			printf("%c ", k++);
		}
		else
		{
			for(int j = k + i; j > k; j--)
			{
				printf("%c ", j - 1);
			}
			k = k + i;
		}
		printf("\n");
	}
}
