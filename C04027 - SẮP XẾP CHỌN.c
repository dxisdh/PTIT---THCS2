#include<stdio.h> 

int main()
{ 
	int n; 
	scanf("%d", &n); 
	int a[n]; 
	for(int i = 0; i < n; i++)
	scanf("%d", &a[i]); 
	for(int i = 0; i < n - 1; i++) 
    {  
        int min = i;
        for(int j = i + 1; j < n; j++) 
		{
			if(a[j] < a[min]) 
			min = j;
		}
        if(min != i)
        {
            int temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
        printf("Buoc %d: ", i+1); 
        for(int i = 0; i < n; i++) 
		printf("%d ", a[i]); 
        printf("\n");
    } 
    return 0;
}
