#include<stdio.h>
#include<math.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int x = n % 10;
		while(n >= 10)
		{
			n = n / 10;
		}
		if(x == n)
		printf("YES\n");
		else
		printf("NO\n");
	}
}
