#include<stdio.h>
#include<math.h>

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if(abs(a) > 0 && abs(b) > 0)
	printf("%d", a + b);
}
