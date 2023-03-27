#include<stdio.h>
#include<math.h>

int fibo(int a[])
{
	a[0] = 0;
	a[1] = 1;
	a[2] = 1;
	int tmp;
	for(int i = 3; i < 94; i++)
	{
		if(i % 2 == 0)
		{
			tmp = i / 2;
			a[i] = a[tmp] * (2 * a[tmp + 1] - a[tmp]);
		}
		else
		{
			tmp = (i - 1) / 2;
			a[i] = a[tmp] * a[tmp] + a[tmp + 1] * a[tmp + 1];
		}
	}
}

int main() 
{

	    int n;
	    scanf("%d", &n);
	    int a[100][100];
	    int d = 0, j = 0;
	    int hang = n - 1, cot = n - 1;
	    int b[94];
	    fibo(b);
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
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
}
