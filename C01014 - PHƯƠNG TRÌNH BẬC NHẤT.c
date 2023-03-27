#include<stdio.h>
#include<math.h>

int main()
{
	float a, b;
	scanf("%f%f", &a, &b);
	if(a == 0 && b == 0)
	printf("Vo so nghiem");
	if(a == 0 && b != 0)
	printf("Vo nghiem");
	if(a != 0 && b != 0)
	printf("%.2f", -b / a);
}

