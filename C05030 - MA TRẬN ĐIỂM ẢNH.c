#include<stdio.h>
#include<math.h>

char a[1000][1000];
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n, m;
		scanf("%d%d", &n, &m);
		long long s = 0;
		for(int i = 0; i < n; i++)
		{
			scanf("%s", a[i]);
		}
		int h1[1000] = {0}, h2[1000] = {0}, c1[1000] = {0}, c2[1000] = {0};
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				if(a[i][j] == '1')
				{
					h1[i]++;
					c1[j]++;
				}
				else if(a[i][j] == '2')
				{
					h2[i]++;
					c2[j]++;
				}
			}
		}
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				if(a[i][j] == '1')
				s += h2[i] * c2[j];
				else if(a[i][j] == '2')
				s += h1[i] * c1[j];
			}
		}
		printf("%lld\n", s);
	}
}
