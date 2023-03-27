#include<stdio.h>
#include<string.h>

int check(char s[])
{
	int len = strlen(s);
	for(int i = 0; i < len; i++)
	{
		if(s[i] >= 'A' && s[i] <= 'z')
		return 0;
	}
	return 1;
}

int count(char s[])
{
	int len = strlen(s);
	int count1 = 0, count2 = 0;
	for(int i = 0; i < len; i++)
	{
		if((s[i] - '0') % 2 == 0)
		count1++;
		else
		count2++;
	}
	if((count1 > count2 && count1 % 2 == 0) || (count1 < count2 && count2 % 2 != 0))
	{
		return 1;
	}
	return 0;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		char s[1005];
		scanf("%s", s);
		if(check(s) == 0)
		printf("INVALID\n");
		else
		{
			if(count(s))
			printf("YES\n");
			else
			printf("NO\n");
		}
	}
}
