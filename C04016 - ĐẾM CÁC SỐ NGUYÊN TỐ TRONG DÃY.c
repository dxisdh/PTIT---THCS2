#include<stdio.h>
#include<math.h>

int checkNT(int n)
{
	if(n < 2)
	return 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		return 0;
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d", &t);
	for(int k = 1; k <= t; k++)
	{
		int n;
		scanf("%d", &n);
		int a[10000];
		int dem = 0;
		for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
		int b[10000] = {0};
		printf("Test %d:\n", k);
		for(int i = 0; i < n; i++)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(a[i] > a[j])
				{
					int tg = a[i];
					a[i] = a[j];
					a[j] = tg;
				}
			}
		}
		for(int i = 0; i < n; i++)
		b[a[i]]++;
		for(int i = 0; i < n; i++)
		{
			if(checkNT(a[i]) == 1 && b[a[i]] >= 1)
			{
				printf("%d xuat hien %d lan\n", a[i], b[a[i]]);
				b[a[i]] = 0;
			}
		}
	}
}			
