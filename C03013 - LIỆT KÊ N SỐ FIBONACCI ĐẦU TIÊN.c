#include<stdio.h> 
#include<math.h>

int fibonacci(int n) 
{
    int f0 = 0;
    int f1 = 1;
    int fn = 1;
    int i;
    if(n == 0 || n == 1)
    return n;
    else
    {
    	for(int i = 2; i < n; i++)
    	{
    		f0 = f1;
    		f1 = fn;
    		fn = f0 + f1;
    	}
    }
    return fn;
}

int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		printf("%d ", fibonacci(i));
	}
}
