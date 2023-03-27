#include<stdio.h> 
#include<math.h> 
#include<string.h> 
#include<ctype.h> 
#include<stdlib.h> 

int main()
{ 
	char s[20]; 
	scanf("%s",s); 
	int cnt[10]={0}; 
	for(int i=0;i<strlen(s);i++)
	{ 
		if(s[i]=='2'||s[i]=='3'||s[i]=='5'||s[i]=='7')
		{ 
			cnt[s[i]-'0']++; 
		} 
	} 
	for(int i=0;i<strlen(s);i++)
	{ 
		if(cnt[s[i]-'0']!=0)
		{ 
			printf("%c %d\n",s[i],cnt[s[i]-'0']); 
			cnt[s[i]-'0']=0; 
		} 
	} 
}
