#include<stdio.h>
#include<math.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int n;
	scanf("%d", &n);
	int a[n], b[n];
	int x = 0, y = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%d%d", &a[i], &b[i]);
		x += a[i];
		y += b[i];
	}
	int min1 = 10000, min2 = 10000;
	for(int i = 0; i < n; i++)
	{
		if(a[i] < min1)
		min1 = a[i];
	}
	for(int i = 0; i < n; i++)
	{
		if(b[i] < min2)
		min2 = b[i];
	}
	int sum = (x > y) ? x + min2 : y + min1;
	printf("%d", sum);
}
