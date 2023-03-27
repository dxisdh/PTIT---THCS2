#include<stdio.h>
#include<math.h>

int check1(int n)
{
	int rev = 0;
	while(n != 0)
	{
		rev = n % 10;
		if(rev == 4)
		{
			return 0;
			break;
		}
		n /= 10;
	}
	return 1;
}

int check2(int n)
{
	int m = n, dao = 0;
	while(m > 0)
	{
		dao = m % 10 + dao * 10;
		m /= 10;
	}
	if(dao == n)
	return 1;
	else
	return 0;
}

int check3(int n)
{
	int sum = 0;
	while(n != 0)
	{
		sum = sum + n % 10;
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
		int a = pow(10, n - 1);
		int b = pow(10, n);
		for(int i = a; i < b; i++)
		{
			if(check1(i) == 1 && check2(i) == 1 && check3(i) == 1)
			printf("%d ", i);
		}
		printf("\n");
	}
}
