#include <stdio.h>
#include <math.h>
#include <string.h>

long long LCM(long long a, long long b)
{
	long long tmp;
	long long p = a, q = b;
	while(b != 0)
	{
		tmp = a % b;
		a = b;
		b = tmp;
	}
	long long k = p * q / a;
	return k;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		long long lcm = 1;
		long long i = a;
		while(i <= b)
		{
			lcm = LCM(i, lcm);
			i++;
		}
		printf("%lld\n", lcm);
	}
}
