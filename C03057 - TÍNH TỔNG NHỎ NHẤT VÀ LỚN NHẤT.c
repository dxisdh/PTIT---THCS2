#include<stdio.h> 
#include<math.h> 
#include<string.h>

long long swap1(char s[])
{
	long long res = 0;
	long long len = strlen(s);
	for(int i = 0; i < len; i++)
	{
		if(s[i] == '6')
		res = res * 10 + 5;
		else
		res = res * 10 + s[i] - 48;
	}
	return res;
}

long long swap2(char s[])
{
	long long res = 0;
	long long len = strlen(s);
	for(int i = 0; i < len; i++)
	{
		if(s[i] == '5')
		res = res * 10 + 6;
		else
		res = res * 10 + s[i] - 48;
	}
	return res;
}

int main()
{
	int t;
	scanf("%d", &t);
	char s1[20], s2[20];
	while(t--)
	{
		scanf("%s%s", s1, s2);
		printf("%lld %lld\n", swap1(s1) + swap1(s2), swap2(s1) + swap2(s2));
	}
}
