#include<stdio.h> 
#include<math.h> 

int main() 
{ 
	long long n; 
	int pre, t; 
	scanf("%d", &t); 
	while(t--) 
	{ 
		pre = 10; 
		scanf("%lld", &n); 
		while(n > 0) 
		{ 
			if(pre < (n % 10)) 
			{ 
				printf("NO\n"); 
				break; 
			} 
			pre = n % 10; 
			n /= 10; 
		} 
		if(n == 0)
		printf("YES\n"); 
	} 
	return 0; 
}
