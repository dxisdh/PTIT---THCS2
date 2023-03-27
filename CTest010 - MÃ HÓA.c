#include<stdio.h> 
#include<string.h> 

void MaHoa(char s[])
{
	int i = 0;
	while(i < strlen(s))
	{
		int j = i;
		int dem = 1;
		while(s[i] == s[j + 1])
		{
			j++;
			dem++;
		}
		printf("%c%d", s[i], dem);
		i = j;
		i++;
	}
}
int main() 
{ 
	int t;
	scanf("%d", &t);
	getchar();
	while(t--)
	{
		char s[100];
		gets(s);
		MaHoa(s);
		printf("\n");
	}
}
