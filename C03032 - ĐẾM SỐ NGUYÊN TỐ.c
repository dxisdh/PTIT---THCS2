#include<stdio.h>
#include<math.h>

int checkNT(int n)
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

int check(int n)
{
	int t = 0;
	while(n > 0)
	{
		t = n % 10;
		if(checkNT(t) == 0)
		{
			return 0;
			break;
		}
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
		int dem = 0;
		scanf("%d%d", &a, &b);
		for(int i = a; i <= b; i++)
		{
			if(checkNT(i) == 1 && check(i) == 1)
			dem++;
		}
		printf("%d\n", dem);
	}
}
