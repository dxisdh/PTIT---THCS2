#include<stdio.h>

int lcm(int a, int b)
{
	int tmp;
	int x = a, y = b;
	while(b != 0)
	{
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return x * y / a;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[1001];
		for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
		int b[1001];
		b[0] = a[0];
		b[n] = a[n - 1];
		for(int i = 1; i < n; i++)
		b[i] = lcm(a[i], a[i - 1]);
		for(int i = 0; i < n + 1; i++)
		{
			printf("%d ", b[i]);
		}
		printf("\n");
	}
}
