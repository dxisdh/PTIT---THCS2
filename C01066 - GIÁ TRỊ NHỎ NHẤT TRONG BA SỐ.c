#include<stdio.h> 
#include<math.h> 

int main() 
{ 
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int x = a < b ? a : b;
	int min = x < c ? x : c;
	printf("%d", min);
}
