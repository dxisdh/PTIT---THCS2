#include<stdio.h>
#include<math.h>
#include<string.h>

int check(char s[])
{
	int len = strlen(s);
	int count = 0;
	for(int i = 0; i < len / 2; i++)
	{
		if(s[i] != s[len - i - 1])
		count++;
	}
	return count;
}

int main()
{
	int t;
	scanf("%d", &t);
	getchar();
	while(t--)
	{
		char s[20];
		gets(s);
		int len = strlen(s);
		if(len % 2 == 0)
		{
			if(check(s) == 1)
			printf("YES\n");
			else
			printf("NO\n");
			
		}
		else
		{
			if(check(s) == 0 || check(s) == 1)
			printf("YES\n");
			else
			printf("NO\n");
		}
	}
}
