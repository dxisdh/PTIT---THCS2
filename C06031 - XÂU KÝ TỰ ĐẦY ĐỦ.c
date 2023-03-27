#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int max(int a, int b)
{
	return a < b ? b : a;
}

int main()
{
	char s[100];
	gets(s);
	int len = strlen(s);
	int d[100] = {0}, res = 0;
	for(int i = 0; i < len; i++)
	{
		d[i] = 1;
		for(int j = 0; j < i; j++)
		{
			if(s[i] > s[j])
			d[i] = max(d[i], d[j] + 1);
		}
		res = max(res, d[i]);
	}
	res = 26 - res;
	printf("%d", res);
}
