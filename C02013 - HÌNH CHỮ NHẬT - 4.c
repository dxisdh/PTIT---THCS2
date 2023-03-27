#include<stdio.h> 
#include<math.h>
int main()
{ 
	int a, b, max; 
	scanf("%d%d",&a, &b); 
	if(a > b)
	{ 
		max = a; 
	}
	else 
	{ 
		max = b; 
	} 
	for(int i = 1; i <= a; i++)
	{ 
		for(int j = 1; j <= b; j++)
		{ 
			printf("%d", abs(max - (i + j - 1)) + 1); 
		} 
		printf("\n"); 
	} 
}
