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
		for(int i = 0; i < n; i++)
		scanf("%d", &a[i]);
		int b[100] = {0};
		for(int i = 0; i < n; i++)
		b[a[i]]++;
		int max = a[0];
		for(int i = 1; i < n; i++)
		{
			if(max < b[a[i]])
			max = b[a[i]];
		}
		for(int i = 0; i < n; i++)
		{
			if(b[a[i]] == max)
			{
				printf("%d ", a[i]);
				b[a[i]] = 0;
			}
		}
		printf("\n");
	}
}
