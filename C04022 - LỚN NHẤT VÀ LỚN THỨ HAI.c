#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[1000];
	for(int i = 0; i < n; i++)
	scanf("%d", &a[i]);
	int max = 0, max2 = 0;
	for(int i = 0; i < n; i++)
	{
		if(max < a[i])
		max = a[i];
	}
	for(int i = 0; i < n; i++)
	{
		if(max == a[i])
		continue;
		else if(max2 < a[i])
		max2 = a[i];
	}
	printf("%d %d", max, max2);
}
