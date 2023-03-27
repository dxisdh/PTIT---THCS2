#include<stdio.h> 
#include<math.h> 

long long BCNN(long long m, long long n)
{
	long long tmp;
	long long p = m, q = n;
	while(n != 0)
	{
		tmp = m % n;
		m = n;
		n = tmp;
	}
	long long b = p * q / m;
	return b;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		long long lcm = 1;
		long long i = 1;
		while(i <= n)
		{
			lcm = BCNN(i, lcm);
			i++;
		}
		printf("%lld\n", lcm);
	}
}
