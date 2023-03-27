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

int fibo(int n)
{
	int t, x1 = 0, x2 = 1, check;
	for(int i = 0; i <= 93; i++)
	{
		t = x1 + x2;
		x1 = x2;
		x2 = t;
		
		if(n == t)
		{
			check = 1;
			break;
		} else {
			check = 0;
		}
	}
	
	if(check == 1)
	{
		return 1;
	} else if(check == 0){
		return 0;
	}
}

int check(int n)
{
	int s = 0;
	int m = n;
	while(m > 0)
	{
		s = s + m % 10;
		m /= 10;
	}
	if(fibo(s) == 1)
	return 1;
	else
	return 0;
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if(a < b)
	{
		for(int i = a; i <= b; i++)
		{
			if(checkNT(i) == 1 && check(i) == 1)
			printf("%d ", i);
		}
	}
	if(b < a)
	{
		for(int i = b; i <= a; i++)
		{
			if(checkNT(i) == 1 && check(i) == 1)
			printf("%d ", i);
		}
	}
}
