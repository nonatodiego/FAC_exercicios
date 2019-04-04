	/* questão 02 - lista 3*/
	
	#include <stdio.h>
	
	int main () {
		
		//Declaração de variaveis
		
		int i,j,somat;
		
		//Leitura de dados
		
		
		//Executar comandos
		
		for(i=1, j=50,somat=0;(i<=50);i++,j--){
			somat=somat + i*j;
			printf(" \n%d \n%d ", &i,&j);
		}
		printf("\nsoma = %d", somat);
	}
