#include<stdio.h> 
#include<string.h> 

int main() 
{ 
	int t;
	scanf("%d", &t);
	getchar();
	while(t--)
	{
		char s[18];
		gets(s);
		int check;
		int len = strlen(s);
		for(int i = 0; i < len; i++)
		{
			if(s[i] >= '0' && s[i] <= '2')
			check = 1;
			else
			check = 0;
		}
		if(check == 1)
		printf("YES\n");
		if(check == 0)
		printf("NO\n");
	}
}
