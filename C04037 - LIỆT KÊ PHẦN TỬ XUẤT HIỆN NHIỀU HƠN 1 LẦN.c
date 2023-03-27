#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[100];
	int dem = 0;
	for(int i = 0; i < n; i++)
	scanf("%d", &a[i]);
	int b[100] = {0}, c[100] = {0};
	for(int i = 0; i < n; i++)
	{
		b[a[i]]++;
		c[a[i]]++;
	}
	for(int i = 0; i < n; i++)
	{
		if(b[a[i]] > 1)
		{
			dem++;
			b[a[i]] = 0;
		}
	}
	printf("%d\n", dem);
	for(int i = 0; i < n; i++)
	{
		if(c[a[i]] > 1)
		{
			printf("%d ", a[i]);
			c[a[i]] = 0;
		}
	}
}
