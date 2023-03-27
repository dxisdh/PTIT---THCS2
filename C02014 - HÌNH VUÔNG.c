#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 1 - n; i <= n - 1; i++)
	{
		for(int j = 1 - n; j <= n - 1; j++)
		{
			if(abs(i) >= abs(j))
			printf("%d", abs(i) + 1);
			else
			printf("%d", abs(j) + 1);
		}
		printf("\n");
	}
}
