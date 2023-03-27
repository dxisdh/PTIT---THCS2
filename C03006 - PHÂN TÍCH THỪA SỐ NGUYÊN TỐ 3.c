#include<stdio.h> 
#include<math.h> 

void PhanTich(long long n)
{ 
	for(long long i = 2; i <= sqrt(n); i++)
	{ 
		if(n % i == 0) 
		{ 
			int dem = 0; 
			while(n % i == 0)
			{ 
				dem++; 
				n /= i; 
			} 
			printf("%lld(%d) ", i, dem); 
		} 
	} 
	if(n != 1)
	{ 
		printf("%lld(1)", n); 
	} 
} 

int main() 
{ 
	int t; 
	scanf("%d", &t); 
	for(int i = 1; i <= t; i++)
	{ 
		long long n; 
		scanf("%lld",&n); 
		printf("Test %d: ", i); 
		PhanTich(n); 
		printf("\n"); 
	} 
}
