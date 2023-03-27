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
		int a[100];
		int check;
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
			if(a[i] == a[n - 1 - i])
			check = 1;
			else
			check = 0;
		}
		if(check == 1)
		printf("YES\n");
		if(check == 0)
		printf("NO\n");
	}
}
