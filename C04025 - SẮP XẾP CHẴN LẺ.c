#include<stdio.h> 
#include<math.h> 

int main()
{
	int n;
	scanf("%d", &n);
	int a[100];
	for(int i = 0; i < n; i++)
	scanf("%d", &a[i]);
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] >= a[j])
			{
				int tg = a[i];
				a[i] = a[j];
				a[j] = tg;
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		printf("%d ", a[i]);
	}
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 != 0)
		printf("%d ", a[i]);
	}
}
