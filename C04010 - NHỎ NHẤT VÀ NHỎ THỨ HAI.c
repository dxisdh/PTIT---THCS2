#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[100];
	for(int i = 0; i < n; i++)
	scanf("%d", &a[i]);
	int min = a[0];
	for(int i = 0; i < n; i++)
	{
		if(min > a[i])
		min = a[i];
	}
	int min2 = 99;
	for(int i = 0; i < n; i++)
	{
		if(a[i] <= min2 && min < a[i])
		min2 = a[i];
	}
	printf("%d %d", min, min2);
}
