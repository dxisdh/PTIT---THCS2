#include<stdio.h> 
#include<math.h> 

void check(int n) 
{ 
	int sum = 1; 
	for(int i = 2; i <= sqrt(n); i++) 
	{ 
		if(n % i == 0) 
		{ 
			sum = sum + i + n / i; 
		} 
	} 
	if(sum == n) 
	printf("%d ", n); 
} 

int main() 
{ 
	int n; 
	scanf("%d", &n); 
	for (int i = 2; i <= n; i++) 
	{ 
		check(i); 
	} 
	return 0;
}
