#include<stdio.h>
#include<math.h>
#include<string.h>

void swap(int a[][100], int m, int n)
{
	for(int i = 0; i <= m; i++)
	{
		for(int j = 0; j <= n; j++)
		{
			a[i][j] = abs(a[i][j] - 1);
		}
	}
}

int solve(int a[][100], int m, int n)
{
	int count = 0;
	for(int i = m - 1; i >= 0; i--)
	{
		for(int j = n - 1; j >= 0; j--)
		{
			if(a[i][j] == 1)
			{
				swap(a, i, j);
				count++;
			}
		}
	}
	printf("%d", count);
}

int main()
{
	int n;
	scanf("%d", &n);
	char s[15], a[15][15];
	int b[15][100];
	for(int i = 0; i < n; i++)
	{
		scanf("%s", s);
		strcpy(a[i], s);
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			b[i][j] = a[i][j] - '0';
		}
	}
	solve(b, n, n);
}
