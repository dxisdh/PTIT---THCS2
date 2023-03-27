#include<stdio.h>
#include<math.h>

int check(int n)
{
	int i = 1; 
	int count = 0; 
	while(i <= n / i) 
	{ 
		if(n % i == 0)
		{ 
			if(i % 2 == 0) 
			count++; 
			if(n / i % 2 == 0) 
			count++; 
			if(n / i == i && i % 2 == 0) 
			count--; 
		} 
		i++; 
	}
	return count;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		printf("%d\n", check(n));
	}
}
