#include<stdio.h>
#include<math.h>

int main()
{
	int n, m = 1;
	scanf("%d", &n);
	int t = n / 10;
	int f = t;
	while(f >= 10)
	{
		f /= 10;
		m *= 10;
	}
	t = t % m * 10 + f;
	printf("%d", t + n % 10 * m * 10);
}
