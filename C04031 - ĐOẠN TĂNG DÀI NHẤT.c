#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);
	for(int k = 1; k <= t; k++)
	{
		int n;
		scanf("%d", &n);
		int a[100], b[100];
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
			b[i] = 1;
		}
		for(int i = 0; i < n - 1; i++)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(a[j] > a[j - 1])
				b[i]++;
				else
				{
					i = j - 1;
					break;
				}
			}
		}
		int m = -1;
		for(int i = 0; i < n; i++)
		{
			if(b[i] > m)
			m = b[i];
		}
		printf("Test %d:\n", k);
		printf("%d\n", m);
		for(int i = 0; i < n; i++)
		{
			if(b[i] == m)
			{
				for(int j = i; j < i + m; j++)
				{
					printf("%d ", a[j]);
				}
				printf("\n");
			}
		}
		printf("\n");
	}
}
