#include<stdio.h>
#include<math.h>

long long UCLN(long long a, long long b)
{
	if(a == 0 || b == 0)
	return a + b;
	while(a != b)
	{
		if(a > b)
		a -= b;
		else
		b -= a;
	}
	return a;
}

long long BCNN(long long a, long long b)
{
	long long result = UCLN(a, b);
	return a * b / result;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long a, b;
		scanf("%lld%lld", &a, &b);
		printf("%lld %lld\n", BCNN(a, b), UCLN(a, b));
	}
}
