#include <stdio.h>
  
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int i, j, arr[50][50];
    for (i = 0; i < m; ++i) 
	{
        for (j = 0; j < n; ++j) 
        scanf("%d", &arr[i][j]);
    }
    int a, b, temp;
    scanf("%d %d", &a, &b);
    for (i = 0; i < m; ++i) 
	{
        for(int j = 0; j < n; j++)
        {
	        if(j == b - 1)
	        {
	        	temp = arr[i][a - 1];
	        	arr[i][a - 1] = arr[i][b - 1];
	        	arr[i][b - 1] = temp;
	        }
	    }
    }
    for (i = 0; i < m; ++i) 
	{
        for (j = 0; j < n; ++j) 
		{
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
  
    return 0;
}
