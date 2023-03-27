#include<stdio.h> 
#include<math.h>
int main()
{ 
	int a, b, max1; 
	scanf("%d%d",&a, &b); 
	if(a > b)
	{ 
		max1 = a; 
	}
	else 
	{ 
		max1 = b; 
	} 
	for(int i = 1; i <= a; i++)
	{ 
		char max2 = max1 + 96;
		for(int j = 1; j <= b; j++)
		{ 
			if(i > j)
			printf("%c", max2--);
			else
			printf("%c", max2);
		} 
		printf("\n"); 
	} 
}
