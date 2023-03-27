#include<stdio.h>
#include<math.h>

int largestPower(int n, int p)
{
	int x = 0;
	while(n)
	{
		n /= p;
		x += n;
	}
	return x;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		printf("%d\n", largestPower(a, b));
	}
}	
