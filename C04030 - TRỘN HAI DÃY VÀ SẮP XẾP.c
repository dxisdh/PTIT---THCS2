#include <stdio.h> 

void sort(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = i; j < n; j++)
		{
			if(a[i] >= a[j])
			{
				int tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
}

void swap(int a[], int n)
{
	for(int i = 0; i < n / 2; i++)
	{
		int tg = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tg;
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	int k = 1;
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[100], b[100];
		for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
		for(int i = 0; i < n; i++)
		scanf("%d", &b[i]);
		printf("Test %d:\n", k);
		sort(a, n);
		sort(b, n);
		swap(b, n);
		for(int i = 0; i < n; i++)
		{
			printf("%d ", a[i]);
			printf("%d ", b[i]);
		}
		printf("\n");
		k++;
	}
}
