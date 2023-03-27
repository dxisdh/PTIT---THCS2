#include<stdio.h> 

int main() 
{ 
	long long n; 
	scanf("%lld", &n); 
	int dem2 = 0, dem3 = 0, dem7 = 0, dem5 = 0; 
	while(n != 0) 
	{ 
		int a = n % 10; 
		n = n / 10; 
		if(a == 2)
		{
			dem2++; 
		}
		if(a == 3)
		{
			dem3++; 
		}
		if(a == 5)
		{
			dem5++; 
		}
		if(a == 7)
		{
			dem7++; 
		}
	}
	if(dem2 != 0) 
	{ 
		printf("2 %d\n", dem2); 
	} 
	if(dem3 != 0) 
	{ 
		printf("3 %d\n", dem3); 
	} 
	if(dem5 != 0) 
	{ 
		printf("5 %d\n", dem5); 
	} 
	if(dem7 != 0) 
	{ 
		printf("7 %d\n", dem7); 
	} 
}
