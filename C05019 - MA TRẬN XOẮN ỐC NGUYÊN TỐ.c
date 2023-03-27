#include<stdio.h>
#include<math.h>

int checkNT(int n)
{
	if(n < 2)
	return 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		return 0;
	}
	return 1;
}

void NT(int n, int b[])
{
	int dem = 0, i = 2, j = 0;
	while(dem <= n * n)
	{
		if(checkNT(i) == 1)
		{
			b[j] = i;
			j++;
			dem++;
		}
		i++;
	}
}

int main() 
{
	int t;
	scanf("%d", &t);
	for(int k = 1; k <= t; k++)
	{
	    int n;
	    scanf("%d", &n);
	    int a[100][100];
	    int d = 0, j = 0;
	    int hang = n - 1, cot = n - 1;
	    int b[10000];
	    NT(n, b);
	    while(d <= n / 2)
	    {
	    	for(int i = d; i <= cot; i++)
	    	{
	    		a[d][i] = b[j];
	    		j++;
	    	}
	    	for(int i = d + 1; i <= hang; i++)
	    	{
	    		a[i][cot] = b[j];
	    		j++;
	    	}
	    	for(int i = cot - 1; i >= d; i--)
	    	{
	    		a[hang][i] = b[j];
	    		j++;
	    	}
	    	for(int i = hang - 1; i > d; i--)
	    	{
	    		a[i][d] = b[j];
	    		j++;
	    	}
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
