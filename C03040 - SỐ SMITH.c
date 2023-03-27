#include<stdio.h> 

int count(int n)
{ 
	int count = 0; 
	while(n > 0)
	{ 
		count++; 
		n /= 10; 
	} 
	return count; 
}

int solve(int n)
{ 
	int sum = 0; 
	while(n > 0)
	{ 
		sum += n % 10; 
		n /= 10; 
	} 
	return sum; 
}

int solve2(int n)
{ 
	int sum = 0; 
	int i = 2; 
	while(n > 1)
	{ 
		if(n % i == 0)
		{ 
			if(count(i) == 1)
			{ 
				sum += i; 
				n /= i; 
			} 
			else
			{ 
				sum += solve(i); 
				n /= i; 
			} 
		} 
		else 
		i++; 
	} 
	return sum; 
} 

int main()
{ 
	int n; 
	scanf("%d", &n); 
	if(solve(n) == solve2(n)) 
	printf("YES\n"); 
	else printf("NO\n"); 
	return 0; 
}
