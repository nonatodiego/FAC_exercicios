#include <stdio.h>

// Função

int questao07(int n, int a, int b)
{
	
// Variaveis

int i,aux, cont=0
	
	
  for (i=a; i<=b; i++)
  {
    aux = 0;
    for(j=2; j<=n && aux==0; j++)
    {
      if((i % j == 0) && (n % j ==0))
      {
        aux = 1;
      }
    }
    if(aux==1)
    {
      cont++;
    }
  }
  return cont;
} 

//MAIN


int main()
{
	printf("%d",questao07(30,10,15));
	
}


