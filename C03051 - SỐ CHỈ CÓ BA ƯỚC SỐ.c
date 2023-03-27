#include<stdio.h>
#include<math.h>
 
int check(long long n)
{
	if(n < 2)
	return 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		return 0;
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long dem = 0;
		long long a, b;
		scanf("%lld%lld", &a, &b);
		for(long long i = a; i * i <= b; i++)
		{
			if(check(i) == 1)
			dem++;
		}
		printf("%lld\n", dem);
	}
}
