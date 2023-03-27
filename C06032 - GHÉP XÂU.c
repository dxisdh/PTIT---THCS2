#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cmp(const void *a, const void *b)
{
	char x[100], y[100], z[100], t[100];
	strcpy(x, (char*)a);
	strcpy(z, x);
	strcpy(y, (char*)b);
	strcpy(t, y);
	strcat(x, y);
	strcat(t, z);
	return strcmp(x, t);
}

int main()
{
	int t;
	scanf("%d", &t);
	getchar();
	while(t--)
	{
		int n;
		scanf("%d", &n);
		char s[100], c[100][100];
		int k = 0;
		for(int i = 1; i <= n; i++)
		{
			scanf("%s", s);
			strcpy(c[k], s);
			k++;
		}
		qsort(c, k, sizeof(c[0]), cmp);
		for(int i = 0; i < k; i++)
		{
			printf("%s", c[i]);
		}
		printf("\n");
	}
}
