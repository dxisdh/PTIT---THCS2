#include<stdio.h>
#include<string.h>

int main()
{
		int n;
		scanf("%d", &n);
		int a[100];
		for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
		for(int i = 0; i < n - 1; i++)
		{
			int min = i;
			for(int j = i + 1; j < n; j++)
				if(a[j] < a[min])
				min = j;
			if(min != i)
			{
				int tg = a[min];
				a[min] = a[i];
				a[i] = tg;
			}
			for(int i = 0; i < n; i++)
			printf("%d ", a[i]);
			printf("\n");
		}
}
