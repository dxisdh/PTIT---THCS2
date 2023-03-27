#include<stdio.h> 

int check(long long n)
{ 
	long long k = n % 10; 
	long long u; 
	while(n)
	{ 
		u = n % 10; 
		n /= 10; 
	} 
	if(k / u != 2 && u / k != 2) 
	return 0; 
	else 
	return 1; 
} 

int checkTN(long long n)
{ 
	long long k = 0; 
	long long v = n; 
	while(n)
	{ 
		k = k * 10 + n % 10; 
		n /= 10; 
	} 
	if(k == v) 
	return 1; 
	else 
	return 0; 
} 

int check2(long long n)
{ 
	long long t = n / 10; 
	long long k = 0; 
	while(t >= 10)
	{ 
		k = k * 10 + t % 10; 
		t /= 10; 
	} 
	if(checkTN(k)) 
	return 1; 
	else 
	return 0; 
} 

int main()
{ 
	int t; 
	scanf("%d",&t); 
	while(t--)
	{ 
		long long n; 
		scanf("%lld",&n); 
		if(check(n) && check2(n)) 
		printf("YES\n"); 
		else 
		printf("NO\n"); 
	} 
}
