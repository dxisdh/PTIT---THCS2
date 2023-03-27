#include<stdio.h>
#include<math.h>

int main()
{
	int t;
	scanf("%d", &t);
	for(int k = 1; k <=t; k++)
	{
		int n, m, p;
		scanf("%d%d%d", &n, &m, &p);
		int a[100], b[100];
		for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
		for(int j = 0; j < m; j++)
		scanf("%d", &b[j]);
		printf("Test %d:\n", k);
		for(int i = 0; i < p; i++)
		printf("%d ", a[i]);
		for(int j = 0; j < m; j++)
		printf("%d ", b[j]);
		for(int i = p; i < n; i++)
		printf("%d ", a[i]);
		printf("\n");
	}
}
