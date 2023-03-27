#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[1000];
	for(int i = 0; i < n; i++)
	scanf("%d", &a[i]);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i] == a[j] && i != j)
			a[j] = 0;
		}
	}
	for(int i = 0; i < n; i++)
	{
		if(a[i] != 0)
		printf("%d ", a[i]);
	}
}
