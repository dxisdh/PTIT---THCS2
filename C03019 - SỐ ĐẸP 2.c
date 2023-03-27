#include<stdio.h> 
#include<math.h>

int check1(int n)
{
	int a = 0, b, c = n;
	while(c > 0)
	{
		b = c % 10;
		a = a * 10 + b;
		c /= 10;
	}
	if(n == a)
	return 1;
	else
	return 0;
}

int check2(int n)
{
	int sum = 0;
	int a = n;
	while(n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	if(sum % 10 == 0)
	return 1;
	else
	return 0;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int count = 0;
		long long a = pow(10, n - 1);
		long long b = pow(10, n);
		for(long long i = a; i < b; i++)
		{
			if(check1(i) == 1 && check2(i) == 1)
			count++;
		}
		printf("%d\n", count);
	}
}
