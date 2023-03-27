#include <stdio.h>
#include <stdlib.h>

int main() {
    int test;
    scanf("%d",&test);
    int t=0;
    while(test--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int A[100][100];
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<m;j++)
          {
              scanf("%d",&A[i][j]);
          }
        }
        int d = 0, hang = n - 1, cot = m - 1;
        int t = 0;
        while(d <= n / 2)
        {
          for(int i = d; i <= cot; i++)
          {
              if(t == m * n)
              break;
              printf("%d ", A[d][i]);
              t++;
          }
          for(int i = d + 1; i <= hang; i++)
          {
              if(t == m * n)
              break;
              printf("%d ", A[i][cot]);
              t++;
          }
          for(int i = cot - 1; i >= d; i--)
          {
              if(t == m * n)
              break;
              printf("%d ", A[hang][i]);
              t++;
          }
          for(int i = hang - 1; i > d; i--)
          {
              if(t == m * n)
              break;
              printf("%d ", A[i][d]);
              t++;
          }
          d++;
          hang--;
          cot--;
        }
        printf("\n");
    }
}
