#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[100];
	for(int i = 0; i < n; i++)
	scanf("%d", &a[i]);
	int k = 1;
	for(int i = 0; i < n - 1; i++)
	{
		int check = 1;
		for(int j = 0; j < n - i - 1; j++)
		{
			if(a[j] > a[j + 1])
			{
				int tg = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tg;
				check = 0;
			}
		}
		if(check == 0)
		{
			printf("Buoc %d: ", k);
			for(int k = 0; k < n; k++)
			printf("%d ", a[k]);
		}
		else
		break;
		k++;
		printf("\n");
	}
}
