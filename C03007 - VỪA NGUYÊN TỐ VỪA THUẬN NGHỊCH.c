#include<stdio.h> 
#include<math.h> 

int checkNT(int n)
{ 
	for(int i = 2; i <= sqrt(n); i++)
	{ 
		if(n % i == 0) 
		return 0; 
	} 
	return 1; 
} 

int checkTN(int n)
{ 
	int m = n; 
	int dao = 0; 
	while(m > 0)
	{ 
		dao = dao * 10 + m % 10; 
		m /= 10; 
	} 
	if(dao == n) 
	return 1; 
	else 
	return 0; 
} 

int main()
{ 
	int t, a, b; 
	scanf("%d", &t); 
	while (t--)
	{ 
		int dem = 0; 
		scanf("%d %d",&a, &b); 
		for(int i = a; i <= b; i++)
		{ 
			if(checkTN(i) && checkNT(i)) 
			{ 
				if(dem != 0 && dem % 10 == 0) 
				printf ("\n"); 
				printf ("%d ", i); 
				dem++; 
			} 
		} 
		printf("\n"); 
	} 
}
