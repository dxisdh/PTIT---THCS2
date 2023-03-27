#include<stdio.h> 

int main()
{
	int n;
	scanf("%d", &n);
	long long min1 = 1000000, min2 = 1000000;
	while(n--)
	{
		long long a, b;
		scanf("%lld%lld", &a, &b);
		if(a < min1)
		min1 = a;
		if(b < min2)
		min2 = b;
	}
	printf("%lld", min1 * min2);
}
