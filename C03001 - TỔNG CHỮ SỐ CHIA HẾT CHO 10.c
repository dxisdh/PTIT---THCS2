#include<stdio.h>
#include<math.h>

int check(int n)
{
	int rev, sum = 0;
	while(n > 0)
	{
		rev = n % 10;
		sum = sum + rev;
		n /= 10;
	}
	if(sum % 10 == 0)
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
		int n;
		scanf("%d", &n);
		if(check(n) == 1)
		printf("YES\n");
		if(check(n) == 0)
		printf("NO\n");
	}
}
