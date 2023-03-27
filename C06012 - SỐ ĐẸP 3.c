#include<stdio.h>
#include<string.h>
#include<math.h>

int checkNT(int n)
{
	if(n < 2)
	return 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		return 0;
	}
	return 1;
}

int main() 
{
	int t;
	scanf("%d", &t);
	getchar();
	while(t--)
	{
		char s[500];
		gets(s);
		int dem = 0, dem1 = 0;
		int len = strlen(s);
		int sum = 0;
		for(int i = 0; i < len; i++)
		{
			if(checkNT(s[i] - '0') == 0)
			dem++;
			if(s[i] != s[len - 1 - i])
			dem1++;
		}
		if(dem == 0 && dem1 == 0)
		printf("YES\n");
		else
		printf("NO\n");
	}
}
