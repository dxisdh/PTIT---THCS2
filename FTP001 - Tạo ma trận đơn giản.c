#include<stdio.h> 

int main()
{
	int n;
	scanf("%d", &n);
	int a[n][n];
	for(int i = 0; i < n; i++)
	{
		int j = 0;
		while(j <= i)
		{
			a[i][j] = 0;
			j++;
		}
		int tmp = 1;
		while(j < n)
		{
			a[i][j] = tmp;
			j++;
			tmp++;
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		printf("%d ", a[i][j]);
		printf("\n");
	}
}
