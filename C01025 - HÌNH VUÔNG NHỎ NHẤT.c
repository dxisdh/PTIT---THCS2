#include<stdio.h> 

int max(int a, int b)
{
	if(a >= b)
	{
		return a;
	}
	return b;
}

int min(int c, int d)
{
	if(c >= d)
	{
		return d;
	}
	return c;
}

int main()
{
	int x1, y1, x2, y2, x3, y3, x4, y4;
	scanf("%d%d%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
	int maxx = max(x2, x4);
	int minx = min(x1, x3);
	int maxy = max(y2, y4);
	int miny = min(y1, y3);
	int ngang = maxx - minx;
	int doc = maxy - miny;
	if(ngang >= doc)
	printf("%d", ngang * ngang);
	else
	printf("%d", doc * doc);
}	
