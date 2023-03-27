#include<stdio.h>
#include<string.h>

int main()
{
	char s[100];
	char c[10][10];
	int i = 0, j = 0, k = 0, l = 0;
	gets(s);
	while(s[i] != 0)
	{
		if(s[i] == ' ')
		{
			c[k][j] = '\0';
			k++;
			j = 0;
		}
		else
		{
			c[k][j] = s[i];
			j++;
		}
		i++;
	}
	c[k][j] = '\0';
	j = 0;
	for(int i = 0; i < k; i++)
	{
		for(int l = 1; l < k + 1; l++)
		{
			if(c[l][j] == '\0' || l == i)
			continue;
			if(strcmp(c[i], c[l]) == 0)
			c[l][j] = '\0';
		}
	}
	for(int i = 0; i < k + 1; i++) 
	{
        if(c[i][j] == 0)
        continue;
        else
        printf("%s ", c[i]);
    }
    printf("\n");
    return 0;
}
