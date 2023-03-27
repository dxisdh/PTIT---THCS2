#include<stdio.h> 

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int m = 1;
		for(int i = 2; i <= n; i++)
		{
			while(n % i == 0)
			{
				if((n / i) % i != 0)
				m *= i;
				n /= i;
			}
		}
		printf("%d\n", m);
	}
}
