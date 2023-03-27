#include<stdio.h>
#include<string.h>

int main() 
{
	int t;
	scanf("%d", &t);
	getchar();
	while(t--)
	{
		char s[200];
		gets(s);
		int len = strlen(s);
		int dem = 0;
		for(int i = 0; i < len - 1; i++)
		{
			if(s[i] == ' ' && s[i + 1] != ' ')
			dem++;
		}
		if(s[0] != ' ')
		dem++;
		printf("%d\n", dem);
	}
}
