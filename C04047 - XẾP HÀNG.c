#include<stdio.h>

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int n;
	scanf("%d", &n);
	int t[100], d[100];
	for(int i = 0; i < n; i++)
	scanf("%d%d", &t[i], &d[i]);
	int k = 0;
	for(int i = 0; i < n - 1; i++)
	{
		int min = i;
		for(int j = i + 1; j < n; j++)
		{
			if(t[j] < t[min])
			min = j;
		}
		if(min != i)
		{
			swap(&t[i], &t[min]);
			swap(&d[i], &d[min]);
		}
	}
	for(int i = 0; i < n; i++)
	{
		if(k <= t[i])
		k = t[i] + d[i];
		else
		k = k + d[i];
	}
	printf("%d", k);
}
