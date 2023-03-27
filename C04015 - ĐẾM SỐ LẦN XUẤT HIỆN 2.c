#include<stdio.h>
#include<math.h>

int main()
{
	int t;
	scanf("%d", &t);
	for(int k = 1; k <= t; k++)
	{
		int n;
		scanf("%d", &n);
		int a[10000];
		int dem = 0;
		for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
		int b[10000] = {0};
		printf("Test %d:\n", k);
		for(int i = 0; i < n; i++)
		{
			b[a[i]]++;
		}
		for(int i = 0; i < n; i++)
		{
			if(b[a[i]] >= 1)
			{
				printf("%d xuat hien %d lan\n", a[i], b[a[i]]);
				b[a[i]] = 0;
			}
		}
	}
}			
