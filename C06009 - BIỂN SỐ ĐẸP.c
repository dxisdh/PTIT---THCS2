#include<stdio.h> 
#include<string.h>

int check1(char s[])
{
	for(int i = 0; i < 4; i++)
	{
		if(s[i] >= s[i + 1])
		return 0;
	}
	return 1;
}

int check2(char s[])
{
	for(int i = 0; i < 4; i++)
	{
		if(s[i] != s[i + 1])
		return 0;
	}
	return 1;
}

int check3(char s[])
{
	for(int i = 0; i < 2; i++)
	{
		if(s[i] != s[i + 1])
		return 0;
	}
	for(int i = 3; i < 4; i++)
	{
		if(s[i] != s[i + 1])
		return 0;
	}
	return 1;
}

int check4(char s[])
{
	for(int i = 0; i < 5; i++)
	{
		if(s[i] != '6' && s[i] != '8')
		return 0;
	}
	return 1;
}

int check(char s[])
{
	if(check1(s) == 1)
	{
		return 1;
	}
	if(check2(s) == 1)
	{
		return 1;
	}
	if(check3(s) == 1)
	{
		return 1;
	}
	if(check4(s) == 1)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int n;
	scanf("%d\n", &n);
	for(int i = 0; i < n; i++)
	{
		char s[100], c[100];
		gets(c);
		s[0] = c[6];
		s[1] = c[7];
		s[2] = c[8];
		s[3] = c[10];
		s[4] = c[11];
		if(check(s) == 1)
		printf("YES\n");
		else
		printf("NO\n");
	}
}
