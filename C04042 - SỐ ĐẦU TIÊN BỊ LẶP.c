#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
		int dem = 0;
		for(int i = 0; i < n - 1; i++)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(a[i] == a[j])
				{
					printf("%d\n", a[i]);
					dem++;
					break;
				}
			}
			if(dem == 1)
			break;
		}
		if(dem == 0)
		printf("NO\n");
	}
}
