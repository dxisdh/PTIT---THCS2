#include<stdio.h>
#include<string.h>

void VietThuong(char s[])
{
	int len = strlen(s);
	for(int i = 0; i < len; i++)
	{
		if(s[i] >= 65 && s[i] <= 90)
		s[i] += 32;
	}
}

int check(char s1[], char s2[])
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if(len1 != len2)
	return 0;
	for(int i = 0; i < len1; i++)
	{
		if(s1[i] != s2[i])
		return 0;
	}
	return 1;
}

int main()
{
	char s1[100], s2[100];
	gets(s1);
	gets(s2);
	int r1, c1, r2, c2;
	char w1[100][100], w2[100][100];
	char temp[100];
	VietThuong(s1);
	VietThuong(s2);
	r1 = 0, c1 = 0;
	int i = 0;
	while(s1[i] != '\0')
	{
		if(s1[i] == ' ')
		{
			w1[r1][c1] = '\0';
			r1++;
			c1 = 0;
		}
		else
		{
			w1[r1][c1] = s1[i];
			c1++;
		}
		i++;
	}
	w1[r1][c1] = '\0';
	r2 = 0, c2 = 0;
	int j = 0;
	while(s2[j] != '\0')
	{
		if(s2[j] == ' ')
		{
			w2[r2][c2] = '\0';
			r2++;
			c2 = 0;
		}
		else
		{
			w2[r2][c2] = s2[j];
			c2++;
		}
		j++;
	}
	w2[r2][c2] = '\0';
	for(i = 0; i < r1; i++)
	{
		for(int l = 1; l < r1 + 1; l++)
		{
			if(w1[l][0] == '\0' || l == i)
			continue;
			if(strcmp(w1[i], w1[l]) == 0)
			w1[l][0] = '\0';
		}
	}
	for(int k = 0; k <= r1; k++)
	{
		for(int l = 0; l <= r1; l++)
		{
			if(w1[k][0] < w1[l][0])
			{
				strcpy(temp, w1[k]);
				strcpy(w1[k], w1[l]);
				strcpy(w1[l], temp);
			}
		}
	}
	for(int k = 0; k <= r1; k++)
	{
		if(w1[k][0] == '\0')
		continue;
		else
		{
			for(int l = 0; l <= r1; l++)
			{
				if(check(w1[k], w2[l]))
				{
					if(w1[k][0] == w2[l][0])
					w1[k][0] = '\0';
				}
			}
		}
		if(w1[k][0] != '\0')
		printf("%s ", w1[k]);
	}
}
