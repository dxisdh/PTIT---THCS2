#include<stdio.h>
#include<string.h>

void del(char s[], char s1[])
{
	int len = strlen(s);
	int len2 = strlen(s1);
	for(int i = 0; i < len; i++)
	{
		if((s[i] == s1[0]) && (s[i + len2 - 1] == s1[len2 - 1]))
		{
			for(int j = i; j < len; j++)
			{
				s[j] = s[j + len2];
			}
		}
	}
	printf("%s", s);
}

int main()
{
	char s[100], s2[100];
	gets(s);
	gets(s2);
	del(s, s2);
}
