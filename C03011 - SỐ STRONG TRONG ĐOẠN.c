#include<stdio.h> 

int factorial(int n) 
{ 
	int m = 1; 
	for(int i = 1; i <= n; i++) 
	{ 
		m = m * i; 
	} 
	return m; 
} 

int solve(int n)
{
	int x = n;
	int sum = 0;
	while(n > 0)
	{
		sum += factorial(n % 10);
		n /= 10;
	}
	if(sum == x)
	return 1;
	else
	return 0;
}

int main() 
{ 
	int sum = 0; 
	int fact = 1; 
	int a, b; 
	scanf("%d%d", &a, &b); 
	if(a < b)
	{
		for(int i = a; i <= b; i++)
		{
			if(solve(i) == 1)
			printf("%d ", i);
		}
	}
	if(a > b)
	{
		for(int i = b; i <= a; i++)
		{
			if(solve(i) == 1)
			printf("%d ", i);
		}
	}
}
