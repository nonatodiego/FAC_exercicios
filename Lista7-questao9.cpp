#include <stdio.h>

void questao09(int n, int*soma, float*media)
{
	int i,cont=0;
	*soma = 0;
	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			*soma +=i;
			cont++;
		}
	}
	*media=(float)*soma / cont;
}

int main()
{
	int numero 5;
	float n;
	print("Entre com um número");
	scanf("%d", &numero);
	questao09(numero,&s,&m);
	printf("Soma = %d e media = %.1f", s,m);
}
