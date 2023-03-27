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

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long a, b, c, d;
		scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
		if(UCLN(a, b) == UCLN(c, d))
		printf("YES\n");
		else
		printf("NO\n");
	}
}
