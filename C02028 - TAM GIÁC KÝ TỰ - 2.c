#include<stdio.h> 
#include<math.h>
int main()
{ 
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		char c = 65 + i * 2;
		for(int j = 0; j < n - i; j++)
		{
			printf("%c", c);
			c += 2;
		}
		printf("\n");
	}
}
