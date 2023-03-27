#include<stdio.h>
#include<string.h>

int main() 
{
	char s[200];
	gets(s);
	int len = strlen(s);
	int dem1 = 0, dem2 = 0;
	for(int i = 0; i < len; i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
		dem1++;
		if(s[i] >= '0' && s[i] <= '9')
		dem2++;
	}
	printf("%d %d %d", dem1, dem2, len - dem1 - dem2);
}
