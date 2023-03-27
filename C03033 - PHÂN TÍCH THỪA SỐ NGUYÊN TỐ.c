#include<stdio.h>
#include<math.h>

void PhanTich(int n)
{
	int dem;
	for(int i = 2; i <= n; i++)
	{
		dem = 0;
		while(n % i == 0)
		{
			dem++;
			n /= i;
		}
		if(dem)
		{
			if(dem > 1)
			printf("%d^%d", i, dem);
			else
			printf("%d^1", i);
			if(n > i)
			printf(" * ");
		}
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		printf("%d = ", n);
		PhanTich(n);
		printf("\n");
	}
}
