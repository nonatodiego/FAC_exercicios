#include <stdio.h>

void questao08(int n)
{
	int i,j,cont;
	
	for(i=2; i<n; i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				cont++;
			}
		}
		if(cont ==0) 
		{
			printf("%d",i);
		}
	}
}

int main()
{
	questao08(30);
}
