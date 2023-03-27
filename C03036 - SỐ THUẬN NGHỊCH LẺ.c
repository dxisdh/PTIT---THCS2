#include<stdio.h> 
#include<math.h> 

int check1(long long n)
{ 
	long long a = 0; 
	long long n1 = n;  
	while(n != 0)
	{ 
		a = a * 10 + n % 10; 
		n /= 10; 
	} 
	if(n1 == a)
	return 1;
	else
	return 0;
} 

int check2(long long n)
{ 
	int r; 
	while(n != 0)
	{ 
		r = n % 10; 
		if(r % 2 == 0)
		{ 
			return 0; 
			break;
		} 
		n /= 10; 
	} 
	return 1; 
} 

int check3(long long n)
{ 
	int sum = 0; 
	int a; 
	while(n != 0)
	{ 
		a = n % 10; 
		sum += a; 
		n /= 10; 
	} 
	if(sum %2 == 0)
	{ 
		return 0; 
	} 
	return 1; 
} 

int main()
{ 
	int t; 
	scanf("%d", &t); 
	while(t--)
	{ 
		long long n; 
		scanf("%lld",&n); 
		if(check1(n) == 1 && check2(n) == 1 && check3(n) == 1)
		printf("YES\n");
		else
		printf("NO\n");
	}
}
