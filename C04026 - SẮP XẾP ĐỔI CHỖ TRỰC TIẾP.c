#include<stdio.h> 

int main()
{ 
	int n; 
	scanf("%d", &n); 
	int a[n]; 
	int i, j, tg; 
	for(int i = 0; i < n; i++)
	scanf("%d",&a[i]); 
	for(int i = 0; i < n - 1; i++)
	{ 
		for(int j = i + 1; j < n; j++)
		{ 
			if(a[i] > a[j])
			{ 
				tg = a[i]; 
				a[i] = a[j]; 
				a[j] = tg; 
			} 
		} 
		printf("Buoc %d: ", i + 1); 
		for(int k = 0; k < n; k++)
		{
			printf("%d ",a[k]); 
		} 
		printf("\n"); 
	} 
	return 0; 
}
