#include<stdio.h> 
#include<math.h> 

void check(int n) 
{ 
	int sum = 0; 
	for(int i = 1; i < n; i++) 
	{ 
		if(n % i == 0) 
		{ 
			sum = sum + i; 
		} 
	} 
	if(sum == n) 
	printf("%d ", n); 
} 

int main() 
{ 
	int a, b; 
	scanf("%d%d", &a, &b); 
	if(a < b)
	{
		for(int i = a; i <= b; i++) 
		{ 
			check(i); 
		}
	}
	if(a > b)
	{
		for(int i = b; i <= a; i++)
		{
			check(i);
		}
	}
	return 0;
}
