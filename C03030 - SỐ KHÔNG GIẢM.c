#include<stdio.h> 
#include<math.h> 

int check(int n)
{ 
	int t; 
	while(n != 0)
	{ 
		t = n / 10; 
		if(t % 10 > n % 10)
		{ 
			return 0; 
			break; 
		} 
		n = n / 10; 
	} 
	return 1; 
} 

int main()
{ 
	int t; 
	scanf("%d",&t); 
	while(t > 0)
	{ 
		int n; 
		scanf("%d", &n); 
		int c = pow(10, n - 1), d = pow(10, n); 
		for(int i = c; i < d; i++)
		{ 
			if(check(i))
			{ 
				printf("%d ",i); 
			} 
		} 
		printf("\n"); 
		t--; 
	} 
}
