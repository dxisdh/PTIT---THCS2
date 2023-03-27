#include<stdio.h>
#include<string.h>

void reverse(int a[], int n)
{
	int l = 0, r = n - 1;
	while(l < r) // dao nguoc hai so
	{
		int tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		l++;
		r--;
	}
}

void sum(char a[], char b[])
{
	int len1 = strlen(a), len2 = strlen(b), n = 0;
	int x[len1], y[len1], z[len1 + 1];
	for(int i = 0; i < len1; i++) // chuyen chu thanh so
	x[i] = a[i] - '0';
	for(int i = 0; i < len2; i++)
	y[i] = b[i] - '0';
	reverse(x, len1);
	reverse(y, len2);
	for(int i = len2; i < len1; i++)
	y[i] = 0; // them 0 vao dang sau
	int counter = 0;
	for(int i = 0; i < len1; i++)
	{
		int tmp = x[i] + y[i] + counter; // cong hai so
		z[n++] = tmp % 10; // chua bien nho neu tmp >= 10
		counter = tmp / 10; // lay nho
	}
	if(counter)
	z[n++] = counter; // neu nho van con
	for(int i = n - 1; i >= 0; i--)
	printf("%d", z[i]);
}

int main()
{
	int t;
	scanf("%d", &t);
	getchar();
	while(t--)
	{
		char a[1001], b[1001];
		scanf("%s%s", a, b);
		if(strlen(a) >= strlen(b))
		sum(a, b);
		else
		sum(b, a);
		printf("\n");
	}
}
