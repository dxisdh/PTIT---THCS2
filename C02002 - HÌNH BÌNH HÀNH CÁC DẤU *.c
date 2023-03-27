#include<stdio.h> 
#include<math.h> 

int main() 
{ 
	int n;
	scanf("%d", &n);
	int j = n - 1;
	for(int i = 1; i <= n; i++)
	{
		for(int i = 1; i <= j; i++)
		printf("~");
		for(int i = 1; i <= n; i++)
		printf("*");
		printf("\n");
		j--;
	}
}
