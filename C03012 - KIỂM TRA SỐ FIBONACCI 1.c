#include<stdio.h> 

int fibonacci(int n) 
{
    int t, x1 = 0, x2 = 1, check;
	for(int i = 0; i <= 18; i++)
	{
		t = x1 + x2;
		x1 = x2;
		x2 = t;
		
		if(n == t)
		{
			check = 1;
			break;
		} else {
			check = 0;
		}
	}
	
	if(check == 1)
	{
		return 1;
	} else if(check == 0){
		return 0;
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	if(fibonacci(n) == 1)
	printf("1");
	else
	printf("0");
}
