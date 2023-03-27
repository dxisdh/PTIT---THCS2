#include<stdio.h>
#include<string.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[100000];
		for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
		long long sum1 = 0, sum2 = 0;
		for(int i = 0; i < n; i++)
		{
			sum1 = (a[i] < sum1 + a[i]) ? (sum1 + a[i]) : a[i];
			sum2 = (sum1 < sum2) ? sum2 : sum1;
		}
		printf("%lld\n", sum2);
	}
}
