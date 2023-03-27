#include<stdio.h>

int check(int n, int k)
{
	int dem = 0;
	dem = n / 64 + n / 32 + n / 16 + n / 8 + n / 4 + n / 2;
	if(dem < k)
	return 0;
	else
	return 1;
}

int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	if(check(n, k) == 1)
	printf("Yes");
	else
	printf("No");
}
