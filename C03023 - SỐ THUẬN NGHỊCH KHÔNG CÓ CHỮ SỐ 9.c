#include <stdio.h>
#include <math.h>

int check(int n)
{
	int dao = 0, k, t = 0, a = n;
	while(n > 0)
	{
		k = n % 10;
		dao = dao * 10 + k;
		n /= 10;
		if(k == 9)
		{
			t++;
		}
	}
	if(t > 0)
	{
		return 0;
	}
	if(dao != a)
	{
		return 0;
	}
	return 1;
}

int main()
{
	int n;
	scanf("%d", &n);
	int dem = 0;
	for(int i = 2; i <= n; i++)
	{
		if(check(i) == 1)
		{
			printf("%d ", i);
			dem++;
		}
	}
	printf("\n%d", dem);
}
