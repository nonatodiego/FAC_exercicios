#include <stdio.h>

int main (){
	
	//Declara��o de vari�veis
	int n,i,d,u;
	
	//leitura das variaveis
	
	printf("Entre com um n�mero: ");
	scanf("%d", &n);
	if(n>18){
		printf("Erro: o n�mero deve ser menor do que 18");
	}else{
		for(i=1;i<=99;i++){
			d=i/10;
			u=i%10;
			if(d+u==n){
				printf("%d ",i);
			}
		}
	}
}
