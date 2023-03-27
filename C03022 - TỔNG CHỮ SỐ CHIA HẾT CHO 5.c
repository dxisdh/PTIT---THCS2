#include <stdio.h>
#include <math.h>

int checkNT(int n)
{
	if(n < 2)
	return 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		return 0;
	}
	return 1;
}

int check(int n)
{
	int n1 = n;
	int sum = 0;
	while(n1 > 0)
	{
		sum += n1 % 10;
		n1 /= 10;
	}
	if(sum % 5 == 0)
	return 1;
	else
	return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	int dem = 0;
	for(int i = 1; i <= n; i++)
	{
		if(checkNT(i) == 1 && check(i) == 1)
		{
			printf("%d ", i);
			dem++;
		}
	}
	printf("\n%d", dem);
}
