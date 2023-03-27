#include<stdio.h>

int check(int n)
{
	int m = n / 10;
	while(m != 0)
	{
		if(m % 10 <= n % 10)
		return 0;
		m /= 10;
		n /= 10;
	}
	return 1;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		int dem = 0;
		for(int i = a; i <= b; i++)
		{
			if(check(i) == 1)
			dem++;
		}
		printf("%d\n", dem);
	}
}
