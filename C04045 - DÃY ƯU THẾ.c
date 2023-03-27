#include<stdio.h>
#include<string.h>

int main()
{
	int t;
	scanf("%d", &t);
	getchar();
	while(t--)
	{
		char s[10000];
		gets(s);
		int len = strlen(s);
		int dem = 0;
		int count1 = 0, count2 = 0;
		for(int i = 0; i < len + 1; i++)
		{
			if(s[i] == ' ' || s[i] == '\0')
			{
				dem++;
				if((s[i - 1] - 48) % 2 == 0)
				count1++;
				else
				count2++;
			}
		}
		if(dem % 2 == 0)
		{
			if(count1 > count2)
			printf("YES\n");
			else
			printf("NO\n");
		}
		if(dem % 2 != 0)
		{
			if(count1 < count2)
			printf("YES\n");
			else
			printf("NO\n");
		}
	}
}
