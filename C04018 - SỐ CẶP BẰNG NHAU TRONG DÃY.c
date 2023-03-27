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
		int a[10000];
		int dem = 0;
		for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
		for(int i = 0; i < n; i++)
		{
			if(a[i] == a[i + 1])
			dem++;
		}
		printf("%d\n", dem);
	}
}			
