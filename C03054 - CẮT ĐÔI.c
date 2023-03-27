#include<stdio.h> 
#include<math.h> 

long long check(long long n) 
{ 
	long long f = 0, i = 0; 
	long long a = 0, b = 0; 
	while(n > 0) 
	{ 
		a = n % 10; 
		if(a == 9 || a == 8 || a == 0) 
		{ 
			b += 0 * pow(10, i); 
			i++; 
		} 
		if(a == 1) 
		{ 
			b += 1 * pow(10, i); 
			i++; 
		} 
		if(a == 2 || a == 3 || a == 4 || a == 5 || a == 6 || a == 7) 
		{ 
			f++; 
			break; 
		} 
		n /= 10; 
	} 
	if(f == 0 && b != 0) 
	return b; 
	else 
	return 0; 
} 

int main() 
{ 
	int n; 
	scanf("%d", &n); 
	while (n--) 
	{ 
		long long a; 
		scanf("%lld", &a); 
		if(check(a) != 0) 
		printf("%lld\n", check(a)); 
		else 
		printf("INVALID\n"); 
	} 
}
