	/* questão 01 - lista 3*/
	
	#include <stdio.h>
	
	int main () {
		
		//Declaração de variaveis
		
		int n,y,i,m;
		
		//Leitura de dados
		
		printf("Digite n e y: ");
		scanf("%d %d",&n,&y);
		
		//Executar comandos
		
		for(i=0;i<n;i=i+y){
			printf("\n%d",i);
		}
	}
