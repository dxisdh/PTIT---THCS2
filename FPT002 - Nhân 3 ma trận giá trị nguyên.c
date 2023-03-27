#include<stdio.h> 

int main()
{ 
	int a[100][100], b[100][100], c[100][100]; 
	int m,n,p,q; 
	scanf("%d%d%d%d",&m,&n,&p,&q); 
	for(int i=0;i<m;i++)
	{ 
		for(int j=0;j<n;j++)
		{ 
			scanf("%d",&a[i][j]); 
		} 
	}
	printf("\n"); 
	for(int i=0;i<n;i++)
	{ 
		for(int j=0;j<p;j++)
		{ 
			scanf("%d",&b[i][j]); 
		} 
	}
	printf("\n"); 
	for(int i=0;i<p;i++)
	{ 
		for(int j=0;j<q;j++)
		{ 
			scanf("%d",&c[i][j]); 
		} 
	} 
	int d[100][100]; 
	for(int i=0;i<m;i++)
	{ 
		for(int j=0;j<p;j++)
		{ 
			d[i][j]=0; 
			for(int k=0;k<n;k++)
			{ 
				d[i][j] += a[i][k]*b[k][j]; 
			} 
		} 
	} 
	int e[100][100]; 
	for(int i=0;i<m;i++)
	{ 
		for(int j=0;j<q;j++)
		{ 
			e[i][j]=0; 
			for(int k=0;k<p;k++)
			{ 
				e[i][j]+=d[i][k]*c[k][j]; 
			} 
		} 
	} 
	for(int i=0;i<m;i++)
	{ 
		for(int j=0;j<q;j++)
		{ 
			printf("%d ",e[i][j]); 
		}
		printf("\n"); 
	} 
}
