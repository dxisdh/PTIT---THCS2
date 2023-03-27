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
		int dem = 1;
		int a[50];
		for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
		int max = a[0];
		for(int i = 0; i < n; i++)
		{
			if(a[i] > max)
			{
				dem++;
				max = a[i];
			}
		}
		printf("%d\n", dem);
	}
}
