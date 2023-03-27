#include<stdio.h>
#include<string.h>

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
		sum = sum + s[i] - '0';
		for(int i = 0; i < len - 1; i++)
		{
			if(s[i] != s[i + 1] && s[0] != '8')
			dem++;
			if(s[i] != s[len - 1 - i])
			dem1++;
		}
		if(dem == 0 && dem1 == 0 && sum % 10 == 0)
		printf("YES\n");
		else
		printf("NO\n");
	}
}
