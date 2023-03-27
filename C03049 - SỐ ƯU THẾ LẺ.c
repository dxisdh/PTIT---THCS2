#include<stdio.h>
#include<math.h>
 
int check(long long n)
{
	int rev = 0;
	int count1 = 0, count2 = 0;
	long long n1 = n;
	while(n1 != 0)
	{
		rev = n1 % 10;
		if(rev % 2 == 0)
		count1++;
		else
		count2++;
		n1 /= 10;
	}
	if(n % 2 != 0 && count1 < count2)
	return 1;
	else
	return 0;
}
 
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%lld", &n);
		if(check(n) == 1)
		printf("YES\n");
		else
		printf("NO\n");
	}
}
