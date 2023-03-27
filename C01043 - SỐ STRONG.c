#include<stdio.h>
#include<math.h>

int main()
{
	int n, s = 0;
	scanf("%d", &n);
	int n1 = n;
	while(n > 0)
	{
		int tmp = n % 10;
		int m = 1;
		n /= 10;
		for(int i = 1; i <= tmp; i++)
		{
			m *= i;
		}
			s += m;
	}
	if(s == n1)
	printf("1");
	else
	printf("0");
}
