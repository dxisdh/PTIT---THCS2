#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>

int cmp(const void *a, const void *b)
{
	int *x = (int*)a;
	int *y = (int*)b;
	return *x - *y;
}

int binarySearch(long a[], int l, int r, int x)
{
	if(r >= l)
	{
		int mid = l + (r - l) / 2;
		if(a[mid] == x)
		return mid;
		if(a[mid] > x)
		{
			return binarySearch(a, l, mid - 1, x);
		}
		return binarySearch(a, mid + 1, r, x);
	}
	return -1;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		long a[5001];
		for(int i = 0; i < n; i++)
		scanf("%ld", &a[i]);
		qsort(a, n, sizeof(long), cmp);
		double T;
		long s;
		int find = -1;
		for(int i = 0; i < n - 1; i++)
		{
			for(int j = i + 1; j < n; j++)
			{
				T = sqrt(a[i] * a[i] + a[j] * a[j]);
				s = (long)T;
				if(s == T)
				find = binarySearch(a, j + 1, n - 1, s);
				if(find != -1)
				break;
			}
			if(find != -1)
			break;
		}
		if(find != -1)
		printf("YES\n");
		else
		printf("NO\n");
	}
}
