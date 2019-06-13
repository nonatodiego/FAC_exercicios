#include <stdio.h>

void questao05 (intv[],int quant,int p[],int quantp,int i[],int quanti)
{
	// Variaveis
	int i,contp, conti;
	contp=0;
	conts=0;
	
	//funcao
	
	for(i=0; i< quant; i++)
	{
		if(v[i]% 2 == 0) //é par
		{
			p[contp]= v[i];
			contp++;
		}
		else
		{
			[conti] = v[i];
			conti++;
		}
	}
	quantp = contp;
	*quant i = conti;
}


//main

#define TAM 300


int main()
{
	int vetor TAM, pares TAM, impares TAM;
	
	int nump,numpi;
	
	preencher (vetor,TAM);
	questao05(vetor,TAM,pares,&nump,impares,&numi);
	exibir(vetor,TAM);
	exibir(pares,nump);
	exibir(impares, numi);
}
