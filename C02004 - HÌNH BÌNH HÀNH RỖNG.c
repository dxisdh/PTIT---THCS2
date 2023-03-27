#include<stdio.h> 
int main()
{ 
	int a;
	scanf("%d", &a);
	for(int i = a; i > 0; i--)
	{
		for(int j = i - 1; j > 0; j--)
		{
			printf("~");
		}
		for(int k = 1; k <= a; k++)
		{
			if(i == 1 || k == 1 || i == a || k == a)
			printf("*");
			else
			printf(".");
		}
		printf("\n\n");
	}
}
