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
		long long f[100];
		for(int i = 0; i < n; i++)
		{
			if(i == 0 || i == 1)
			f[i] = 1;
			else
			f[i] = f[i - 1] + f[i - 2];
		}
		printf("%lld\n", f[n - 1]);
	}
}
