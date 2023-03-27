#include<stdio.h>
#include<math.h>

int solve(int n)
{
	int sum = 0;
	while(n > 0)
	{
		sum = sum + n % 10;
		n /= 10;
	}
	return sum;
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if(solve(a) <= solve(b))
	printf("%d %d", a, b);
	else
	printf("%d %d", b, a);
}
