#include<stdio.h> 
#include<math.h> 

int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		int count = 1;
		for(int j = 1; j <= 2 * i - 1; j++)
		{
			if(j < i)
			{
				printf("%d", count);
				count += 2;
			}
			else
			{
				printf("%d", count);
				count -= 2;
			}
		}
		printf("\n");
	}
}
