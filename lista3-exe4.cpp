	/* quest�o 02 - lista 3*/
	
	#include <stdio.h>
	
	int main () {
		
		//Declara��o de variaveis
		
		int i, contn=0,contpos=0;
		float numero, somapos=0, mediapos;
		
		//Leitura de dados
		
		
		//Executar comandos
		
		for(i=1; i<=300; i++){
			printf("Entre com o n�mero: ");
			scanf("%f",&numero);
			
			if(numero < 0){
				contn++;
			}
			else {
					if(numero > 0){               //verificando se n�o � 0
					contpos++;
					somapos += numero;            //Soma Positiva = Soma Positiva + numero
			}			
		}
		// calculando a m�dia dos positivos
		mediapos = somapos/contpos;
		
		//Exibindo os resultados
		printf("Quantidade de negativos = %d\n", contn);
		printf("M�dia dos positivos = %.1f", mediapos);		
	}
	
	
