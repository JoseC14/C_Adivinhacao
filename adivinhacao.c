/*PROGRAMA DE ADIVINHAÇÃO8*/

#include <stdio.h>

int main(){
	int numero = 40;
	int tentativas,chute,opcao;
	
	printf("***************************\n");
	printf("*   JOGO DA ADIVINHACAO   *\n");
	printf("***************************\n");
	start:
	while(1){
		printf("Digite o numero de tentativas que voce queira: ");
		scanf("%d", &tentativas);
	
		printf("Voce quer %d tentativas... esta correto? 1 - Sim; 2 - Nao : ",tentativas);
		scanf("%d",&opcao);
		
		if(opcao == 1){
			printf("Ok, vamos começar o jogo\n");
			while(tentativas !=0){
				printf("Seu chute: ");
				scanf("%d",&chute);
			
				if(chute == numero){
					printf("PARABENS! VOCE GANHOU\n");
					
					printf("***************************\n");
					printf("*       FIM DE JOGO       *\n");
					printf("***************************\n");
					return 0;
				}else{
					if(chute > numero){
						if(chute-numero > 20){
							printf("Muito alto\n");
						}else{
							printf("Alto\n");
						}
						
					}else{
						if(numero-chute > 20){
							printf("Muito baixo\n");
						}else{
							printf("Baixo\n");
						}
					}
					
					tentativas -= 1;
					
					
				}
				
			}
			fimjogo:
			printf("QUE PENA... VOCE PERDEU...\n Deseja continuar? 1 - Sim, 2 - Nao: ");
			scanf("%d",&opcao);
			if(opcao == 1){
				goto start;
			}else if(opcao == 2){
				printf("***************************\n");
				printf("*       FIM DE JOGO       *\n");
				printf("***************************\n");
				return 0;
			}else{
				printf("OPCAO INVALIDA! Escolha um valor válido!");
				goto fimjogo;
			}
			
		}else{
			continue;
		}
	
		
	}
	
	return 0;
	
	
}
