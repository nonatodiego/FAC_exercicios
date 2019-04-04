	/* questão 02 - lista 3*/
	
	#include <stdio.h>
	
	int main () {
		
		//Declaração de variaveis
		
		int a,m,i;
		float q,r;
		
		//Leitura de dados
		printf("quantia: ");
		scanf("%f",&q);
		printf("Rendimento Mensal: ");
		scanf("%f",&r);
		printf("Tempo de aplicação ");
		scanf("%d",&a);
		
		//Executar comandos
		
		m= a*12;
		
		for(i=1;m;i++){
			q*=(r/100+1);
		}
		printf("Valor acumulado: R$ %.2f",&q);
	}
