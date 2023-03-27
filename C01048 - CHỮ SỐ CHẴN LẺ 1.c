#include<stdio.h> 
int main()
{ 
	int n;
	scanf("%d", &n); 
	int tmp = 0;
	int count1 = 0, count2 = 0;
	while(n != 0)
	{ 
		tmp = n % 10;
		if(tmp % 2 == 0)
		{
			count1++;
		}
		else
		{
			count2++;
		} 
		n /= 10;
	} 
	printf("%d %d", count2, count1); 
}
