#include<stdio.h>
#include<math.h>

int main()
{
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	int den = 0;
	int a[1001];
	int b[2002] = {0};
	for(int i = 0; i < m; i++)
	{
		scanf("%d", &a[i]);
		for(int j = a[i]; j <= a[i] + k; j++)
		b[j] = 1;
		for(int j = a[i]; j >= a[i] - k; j--)
		{
			if(j >= 1)
			b[j] = 1;
			else
			break;
		}
	}
	int j;
	int dem = 0;
	int l, r;
	for(int i = 1; i <= n; i++)
	{
		if(b[i] == 0)
		{
			l = i;
			j = i + 1;
			while(j <= n && b[j] == 0)
			j++;
			r = j - 1;
			int tmp = (r - l) / (2 * k + 1);
			dem = dem + tmp + 1;
			for(int index = l; index <= r; index++)
			b[index] = 1;
		}
	}
	printf("%d", dem);
}
