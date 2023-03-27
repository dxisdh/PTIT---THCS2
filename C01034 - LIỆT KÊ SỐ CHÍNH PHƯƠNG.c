#include<stdio.h>
#include<math.h>

int main()
{
		int a, b;
		scanf("%d%d", &a, &b);
		int x = sqrt(a);
		int y = sqrt(b);
		if(x * x < a)
		{
			printf("%d\n", y - x);
			for(int i = x + 1; i <= y; i++)
			{
				printf("%d\n", i * i);
			}
		} else {
			printf("%d\n", y - x + 1);
			for(int i = x; i <= y; i++)
			{
				printf("%d\n", i * i);
			}
		}
}
