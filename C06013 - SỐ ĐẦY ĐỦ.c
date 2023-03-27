#include<stdio.h> 
#include<string.h>

int check(char c[])
{ 
	for(int i = 0; i < strlen(c); i++)
	{ 
		if(c[i] < '0' || c[i] > '9') 
		return 0; 
	} 
	return 1; 
} 

int check2(char c[])
{ 
	for(int i = 0; i < strlen(c); i++)
	{ 
		if(c[0] == '0') 
		return 0; 
	} 
	return 1; 
} 

int main()
{ 
	int t; 
	scanf("%d", &t); 
	getchar(); 
	while(t--)
	{ 
		char c[1002]; 
		scanf("%s", &c); 
		int cnt[10000]={0}; 
		int dem = 0; 
		if(check(c) == 0 || check2(c) == 0) 
		{ 
			printf("INVALID\n"); 
			continue;
		} 
		for(int i = 0; i < strlen(c); i++)
		{ 
			cnt[c[i]]++; 
		} 
		for(int i = 0; i < strlen(c); i++)
		{ 
			if(cnt[c[i]] != 0) 
			{ 
				dem++; 
			} 
			cnt[c[i]] = 0; 
		} 
		if(dem == 10) 
		printf("YES\n"); 
		else 
		printf("NO\n"); 
	} 
}
