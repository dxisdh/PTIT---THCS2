#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

void delspace(char s[])
{
    int i, j;
    for(i = j = 0; s[i]; i++)
        if(!isspace(s[i]) || i > 0 && !isspace(s[i - 1]))
            s[j++] = s[i];
    s[j]='\0';
}
void ChuanHoa(char s[], char c[])
{
	delspace(s);
	int len = strlen(s);
	for(int i = 0; i < len; i++)
	{
		if(s[i] >= 65 && s[i] <= 90)
		s[i] += 32;
	}
	int j = 1;
	c[0] = s[0];
	int t;
	for(int i = 0; i < len; i++)
	{
		if(s[i] == ' ')
		{
			c[j] = s[i + 1];
			j++;
			t = i + 1;
		}
	}
	for(int i = t + 1; i < len; i++)
	{
		c[j] = s[i];
		j++;
	}
	for(int i = 0; i < j; i++)
	printf("%c", c[i]);
	printf("@ptit.edu.vn");
}

int main()
{
	char s[100], c[100];
	gets(s);
	ChuanHoa(s, c);
	return 0;
}
