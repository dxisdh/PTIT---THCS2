#include<stdio.h>
#include<math.h>

int checkNT(int n)
{
	if(n < 2)
	return 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			return 0;
			break;
		}
	}
	return 1;
}

int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 2; i <= n; i++)
	{
		if(checkNT(i) == 1)
		printf("%d\n", i);
	}
}
