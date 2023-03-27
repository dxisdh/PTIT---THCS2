#include<stdio.h>
#include<math.h>

int main() 
{
    int test;
    scanf("%d",&test);
    int t=1;
    while(test--)
    {
       int n;
       scanf("%d", &n);
       int A[50][50];
       for(int i=0;i<n;i++)
       {
            for(int j=0;j<n;j++)
            {
                if(j <= i)
            	  A[i][j] = j + 1;
                else
                A[i][j] = 0;
            }
       }
        printf("Test %d:\n",t);
        int B[50][50];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            B[j][i] = A[i][j];
        }
        int C[50][50];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                C[i][j] = 0;
                for(int k=0;k<n;k++)
                C[i][j] += A[i][k]*B[k][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d ",C[i][j]);
            }
            printf("\n");
        }
        t++;
    }
}
