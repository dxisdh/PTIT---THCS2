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
	    int a[n][n];
	    int d = 0, gt = n * n;
	    int hang = n - 1, cot = n - 1;
	    while(d <= n / 2)
	    {
	    	for(int i = d; i <= cot; i++)
	    	a[d][i] = gt--;
	    	for(int i = d + 1; i <= hang; i++)
	    	a[i][cot] = gt--;
	    	for(int i = cot - 1; i >= d; i--)
	    	a[hang][i] = gt--;
	    	for(int i = hang - 1; i > d; i--)
	    	a[i][d] = gt--;
	    	d++;
	    	hang--;
	    	cot--;
		}
		printf("Test %d:\n", k);
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
}
