#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int A[1005], B[1005];
int cmp(const void *a, const void *b)
{
	int *x = (int*)a;
	int *y = (int*)b;
	if(*x < *y)
	{
		return -1;
	}
	return 1;
}

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n], b[m];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		A[a[i]] = 1;
	}
	for(int i = 0; i < m; i++)
	{
		scanf("%d", &b[i]);
		B[b[i]] = 1;
	}
	qsort(a, n, sizeof(a[0]), cmp);
	qsort(b, m, sizeof(b[0]), cmp);
	for(int i = 0; i < fmin(n , m); i++)
	{
		if(A[a[i]] && B[a[i]])
		{
			printf("%d ", a[i]);
			A[a[i]] = 0;
			B[a[i]] = 0;
		}
	}
	printf("\n");
	for(int i = 0; i < n; i++)
	{
		if(A[a[i]])
		{
			printf("%d ", a[i]);
			A[a[i]] = 0;
		}
	}
	printf("\n");
	for(int i = 0; i < m; i++)
	{
		if(B[b[i]])
		{
			printf("%d ", b[i]);
			B[b[i]] = 0;
		}
	}
}
