#include<stdio.h>
#include<stdlib.h>

char vetor[3][3], nomeJogador[20];
char estado, vez, vencedor;
int l, c, linha, coluna, vit, emp, der, jogo;
int jogada;




//instancia o vetor
	char startVelha(){
	    for(l = 1; l <= 3; l++){
		    for(c = 1; c <= 3; c++){
			    vetor[l][c] = '.';
		    }
	    }
	}
	
	//imprime vetor
	char imprimeVetor(){
	    for(l = 1; l <= 3; l++){
		    for(c = 1; c <= 3; c++){
			    printf(" %c ", vetor[l][c]);
		    }
		    printf("\n");
	    }
	}
	
	
	

int main(){
	
	printf("   ##### ##### ##### ##### \n");
	printf("     #   #   # #   # #   # \n");
	printf("     #   #   # #     #   # \n");
	printf("     #   #   # #  ## #   # \n");
	printf("   ###   ##### ##### ##### \n");
	printf("\n");
	printf("            # ##### \n");
	printf("            # #   # \n");
	printf("        ##### ##### \n");
	printf("        #   # #   # \n");
	printf("        ##### #   # \n");
	printf("\n");
	printf("#   # ##### #     #   # ##### \n");
	printf("#   # #     #     #   # #   # \n");
	printf("#   # ##### #     ##### ##### \n");
	printf(" # #  #     #     #   # #   # \n");
	printf("  #   ##### ##### #   # #   # \n");
	printf("\n");
	
	
	//nome dos jogadores
	printf("Informe seu nome\n");
	printf("Nome jogador: ");
	scanf("%s", &nomeJogador);
	
	startVelha();
	
	imprimeVetor();
	
	
	//vez = '1';
	jogo = 1;
	estado = 'X';
	vencedor = 'n';
	
	
	//inicio do jogo
	while(jogo = 1){
		
		if(estado == 'X'){
			
		    printf("digite a linha: ");
	        scanf("%d", &linha);
	
	        printf("digite a coluna:");
	        scanf("%d", &coluna);
	        printf("\n");
	        
	        if(vetor[linha][coluna] == '.'){
	        	vetor[linha][coluna] = estado;
			}
			
		}else{
			
			printf("vez do computador \n");
			
			//analise de jogada
			jogada = 0;
			
			if(vetor[2][2] == '.' && jogada == 0){
				vetor[2][2] = 'O';
				jogada = 1;
			}
			
			//user vence jogando nas pontas
			if(vetor[1][1] == 'X' && vetor[1][3] == '.' && vetor[3][1] == '.' && vetor[3][3] == '.' && jogada == 0){
				vetor[1][3] = 'O';
				jogada = 1;
			}else if(vetor[1][1] == '.' && vetor[1][3] == 'X' && vetor[3][1] == '.' && vetor[3][3] == '.' && jogada == 0){
				vetor[3][3] = 'O';
				jogada = 1;
			}else if(vetor[1][1] == '.' && vetor[1][3] == '.' && vetor[3][1] == 'X' && vetor[3][3] == '.' && jogada == 0){
				vetor[1][1] = 'O';
				jogada = 1;
			}else if(vetor[1][1] == '.' && vetor[1][3] == '.' && vetor[3][1] == '.' && vetor[3][3] == 'X' && jogada == 0){
				vetor[3][1] = 'O';
				jogada = 1;
			}
            //fim user vence			
			
			
			//vitoria
			else if(vetor[1][1] == 'O' && vetor[2][2] == 'O' && vetor[3][3] == '.' && jogada == 0){
				vetor[3][3] == 'O';
				jogada = 1;
			}else if(vetor[1][1] == 'O' && vetor[2][2] == '.' && vetor[3][3] == 'O' && jogada == 0){
				vetor[2][2] = 'O';
				jogada = 1;
			}else if(vetor[1][1] == '.' && vetor[2][2] == 'O' && vetor[3][3] == 'O' && jogada == 0){//*
				vetor[1][1] = 'O';
				jogada = 1;
			}else if(vetor[1][3] == 'O' && vetor[2][2] == 'O' && vetor[3][1] == '.' && jogada == 0){
				vetor[3][1] = 'O';
				jogada = 1;
			}else if(vetor[1][3] == 'O' && vetor[2][2] == '.' && vetor[3][1] == 'O' && jogada == 0){
				vetor[2][2] = 'O';
				jogada = 1;
			}else if(vetor[1][3] == '.' && vetor[2][2] == 'O' && vetor[3][1] == 'O' && jogada == 0){//*
				vetor[1][3] = 'O';
				jogada = 1;
			}else if(vetor[1][1] == 'O' && vetor[1][2] == 'O' && vetor[1][3] == '.' && jogada == 0){
				vetor[1][3] = 'O';
			    jogada = 1;
			}else if(vetor[1][1] == 'O' && vetor[1][2] == '.' && vetor[1][3] == 'O' && jogada == 0){
				vetor[1][2] = 'O';
				jogada = 1;
			}else if(vetor[1][1] == '.' && vetor[1][2] == 'O' && vetor[1][3] == 'O' && jogada == 0){//*
				vetor[1][1] = 'O';
				jogada = 1;
			}else if(vetor[2][1] == 'O' && vetor[2][2] == 'O' && vetor[2][3] == '.' && jogada == 0){
				vetor[2][3] = 'O';
				jogada = 1;
			}else if(vetor[2][1] == 'O' && vetor[2][2] == '.' && vetor[2][3] == 'O' && jogada == 0){
				vetor[2][2] = 'O';
				jogada = 1;
			}else if(vetor[2][1] == '.' && vetor[2][2] == 'O' && vetor[2][3] == 'O' && jogada == 0){//*
				vetor[2][1] = 'O';
				jogada = 1;
			}else if(vetor[3][1] == 'O' && vetor[3][2] == 'O' && vetor[3][3] == '.' && jogada == 0){
				vetor[3][3] = 'O';
				jogada = 1;
			}else if(vetor[3][1] == 'O' && vetor[3][2] == '.' && vetor[3][3] == 'O' && jogada == 0){
				vetor[3][2] = 'O';
				jogada = 1;
			}else if(vetor[3][1] == '.' && vetor[3][2] == 'O' && vetor[3][3] == 'O' && jogada == 0){//*
				vetor[3][1] = 'O';
				jogada = 1;
			}else if(vetor[1][1] == 'O' && vetor[2][1] == 'O' && vetor[3][1] == '.' && jogada == 0){
				vetor[3][1] = 'O';
				jogada = 1;
			}else if(vetor[1][1] == 'O' && vetor[2][1] == '.' && vetor[3][1] == 'O' && jogada == 0){
				vetor[2][1] = 'O';
				jogada = 1;
			}else if(vetor[1][1] == '.' && vetor[2][1] == 'O' && vetor[3][1] == 'O' && jogada == 0){//*
				vetor[1][1] = 'O';
				jogada = 1;
			}else if(vetor[1][2] == 'O' && vetor[2][2] == 'O' && vetor[3][2] == '.' && jogada == 0){
				vetor[3][2] = 'O';
				jogada = 1;
			}else if(vetor[1][2] == 'O' && vetor[2][2] == '.' && vetor[3][2] == 'O' && jogada == 0){
				vetor[2][2] = 'O';
				jogada = 1;
			}else if(vetor[1][2] == '.' && vetor[2][2] == 'O' && vetor[3][2] == 'O' && jogada == 0){//*
				vetor[1][2] = 'O';
				jogada = 1;
			}else if(vetor[1][3] == 'O' && vetor[2][3] == 'O' && vetor[3][3] == '.' && jogada == 0){
				vetor[3][3] = 'O';
				jogada = 1;
			}else if(vetor[1][3] == 'O' && vetor[2][3] == '.' && vetor[3][3] == 'O' && jogada == 0){
				vetor[2][3] = 'O';
				jogada = 1;
			}else if(vetor[1][3] == '.' && vetor[2][3] == 'O' && vetor[3][3] == 'O' && jogada == 0){
				vetor[1][3] = 'O';
				jogada = 1;
			}
			//fim vitoria
			
			
			
			
			else if(vetor[1][1] == 'X' && vetor[2][2] == 'X' && vetor[3][3] == '.' && jogada == 0){
				vetor[3][3] == 'O';
				jogada = 1;
			}else if(vetor[1][1] == 'X' && vetor[2][2] == '.' && vetor[3][3] == 'X' && jogada == 0){
				vetor[2][2] = 'O';
				jogada = 1;
			}else if(vetor[1][1] == '.' && vetor[2][2] == 'X' && vetor[3][3] == 'X' && jogada == 0){//*
				vetor[1][1] = 'O';
				jogada = 1;
			}else if(vetor[1][3] == 'X' && vetor[2][2] == 'X' && vetor[3][1] == '.' && jogada == 0){
				vetor[3][1] = 'O';
				jogada = 1;
			}else if(vetor[1][3] == 'X' && vetor[2][2] == '.' && vetor[3][1] == 'X' && jogada == 0){
				vetor[2][2] = 'O';
				jogada = 1;
			}else if(vetor[1][3] == '.' && vetor[2][2] == 'X' && vetor[3][1] == 'X' && jogada == 0){//*
				vetor[1][3] = 'O';
				jogada = 1;
			}else if(vetor[1][1] == 'X' && vetor[1][2] == 'X' && vetor[1][3] == '.' && jogada == 0){
				vetor[1][3] = 'O';
				jogada = 1;
			}else if(vetor[1][1] == 'X' && vetor[1][2] == '.' && vetor[1][3] == 'X' && jogada == 0){
				vetor[1][2] = 'O';
				jogada = 1;
			}else if(vetor[1][1] == '.' && vetor[1][2] == 'X' && vetor[1][3] == 'X' && jogada == 0){//*
				vetor[1][1] = 'O';
				jogada = 1;
			}else if(vetor[2][1] == 'X' && vetor[2][2] == 'X' && vetor[2][3] == '.' && jogada == 0){
				vetor[2][3] = 'O';
				jogada = 1;
			}else if(vetor[2][1] == 'X' && vetor[2][2] == '.' && vetor[2][3] == 'X' && jogada == 0){
				vetor[2][2] = 'O';
				jogada = 1;
			}else if(vetor[2][1] == '.' && vetor[2][2] == 'X' && vetor[2][3] == 'X' && jogada == 0){//*
				vetor[2][1] = 'O';
				jogada = 1;
			}else if(vetor[3][1] == 'X' && vetor[3][2] == 'X' && vetor[3][3] == '.' && jogada == 0){
				vetor[3][3] = 'O';
				jogada = 1;
			}else if(vetor[3][1] == 'X' && vetor[3][2] == '.' && vetor[3][3] == 'X' && jogada == 0){
				vetor[3][2] = 'O';
				jogada = 1;
			}else if(vetor[3][1] == '.' && vetor[3][2] == 'X' && vetor[3][3] == 'X' && jogada == 0){//*
				vetor[3][1] = 'O';
				jogada = 1;
			}else if(vetor[1][1] == 'X' && vetor[2][1] == 'X' && vetor[3][1] == '.' && jogada == 0){
				vetor[3][1] = 'O';
				jogada = 1;
			}else if(vetor[1][1] == 'X' && vetor[2][1] == '.' && vetor[3][1] == 'X' && jogada == 0){
				vetor[2][1] = 'O';
				jogada = 1;
			}else if(vetor[1][1] == '.' && vetor[2][1] == 'X' && vetor[3][1] == 'X' && jogada == 0){//*
				vetor[1][1] = 'O';
				jogada = 1;
			}else if(vetor[1][2] == 'X' && vetor[2][2] == 'X' && vetor[3][2] == '.' && jogada == 0){
				vetor[3][2] = 'O';
				jogada = 1;
			}else if(vetor[1][2] == 'X' && vetor[2][2] == '.' && vetor[3][2] == 'X' && jogada == 0){
				vetor[2][2] = 'O';
				jogada = 1;
			}else if(vetor[1][2] == '.' && vetor[2][2] == 'X' && vetor[3][2] == 'X' && jogada == 0){//*
				vetor[1][2] = 'O';
				jogada = 1;
			}else if(vetor[1][3] == 'X' && vetor[2][3] == 'X' && vetor[3][3] == '.' && jogada == 0){
				vetor[3][3] = 'O';
				jogada = 1;
			}else if(vetor[1][3] == 'X' && vetor[2][3] == '.' && vetor[3][3] == 'X' && jogada == 0){
				vetor[2][3] = 'O';
				jogada = 1;
			}else if(vetor[1][3] == '.' && vetor[2][3] == 'X' && vetor[3][3] == 'X' && jogada == 0){
				vetor[1][3] = 'O';
				jogada = 1;
			}else if(vetor[2][2] == 'X' && jogada == 0){
				vetor[1][1] = 'O';
				jogada = 1;
		    }
			//fim analise jogada
			
			
			
			
			
			
			//jogadas com decisão
			if(vetor[1][1] == '.' && vetor[2][2] == '.' && vetor[3][3] == 'O' && jogada == 0){
				
				vetor[1][1] == 'O';
				jogada = 1;
				
			}else if(vetor[1][1] == '.' && vetor[2][2] == 'O' && vetor[3][3] == '.' && jogada == 0){
					
				vetor[1][1] = 'O';
				jogada = 1;

			}else if(vetor[1][1] == 'O' && vetor[2][2] == '.' && vetor[3][3] == '.' && jogada == 0){//*
			
				vetor[3][3] = 'O';
				jogada = 1;
				
			}
			
			
			
			
			
			else if(vetor[1][3] == '.' && vetor[2][2] == '.' && vetor[3][1] == 'O' && jogada == 0){
				
				vetor[1][3] = 'O';
				jogada = 1;
				
			}else if(vetor[1][3] == '.' && vetor[2][2] == 'O' && vetor[3][1] == '.' && jogada == 0){
				
				vetor[1][3] = 'O';
				jogada = 1;
				
			}else if(vetor[1][3] == 'O' && vetor[2][2] == '.' && vetor[3][1] == '.' && jogada == 0){//*
			
				vetor[3][1] = 'O';
				jogada = 1;
				
			}
			
			
			
			
			
			else if(vetor[1][1] == '.' && vetor[1][2] == '.' && vetor[1][3] == 'O' && jogada == 0){
				
				vetor[1][1] = 'O';
				jogada = 1;
				
			}else if(vetor[1][1] == '.' && vetor[1][2] == 'O' && vetor[1][3] == '.' && jogada == 0){
				
				vetor[1][1] = 'O';
				jogada = 1;
				
			}else if(vetor[1][1] == 'O' && vetor[1][2] == '.' && vetor[1][3] == '.' && jogada == 0){//*
			
				vetor[1][3] = 'O';
				jogada = 1;
				
			}
			
			
			
			
			else if(vetor[2][1] == '.' && vetor[2][2] == '.' && vetor[2][3] == 'O' && jogada == 0){
				
				vetor[2][1] = 'O';
				jogada = 1;
				
			}else if(vetor[2][1] == '.' && vetor[2][2] == 'O' && vetor[2][3] == '.' && jogada == 0){
				
				vetor[2][3] = 'O';
				jogada = 1;
				
			}else if(vetor[2][1] == 'O' && vetor[2][2] == '.' && vetor[2][3] == '.' && jogada == 0){//*
			
				vetor[2][3] = 'O';
				jogada = 1;
				
			}
			
			
			
			
			
			else if(vetor[3][1] == '.' && vetor[3][2] == '.' && vetor[3][3] == 'O' && jogada == 0){
				
				vetor[3][1] = 'O';
				jogada = 1;
				
			}else if(vetor[3][1] == '.' && vetor[3][2] == 'O' && vetor[3][3] == '.' && jogada == 0){
				
				vetor[3][1] = 'O';
				jogada = 1;
				
			}else if(vetor[3][1] == 'O' && vetor[3][2] == '.' && vetor[3][3] == '.' && jogada == 0){//*
			
				vetor[3][3] = 'O';
				jogada = 1;
				
			}
			
			
			
			
			
			else if(vetor[1][1] == '.' && vetor[2][1] == '.' && vetor[3][1] == 'O' && jogada == 0){
				
				vetor[1][1] = 'O';
				jogada = 1;
				
			}else if(vetor[1][1] == '.' && vetor[2][1] == 'O' && vetor[3][1] == '.' && jogada == 0){
				
				vetor[3][1] = 'O';
				jogada = 1;
				
			}else if(vetor[1][1] == 'O' && vetor[2][1] == '.' && vetor[3][1] == '.' && jogada == 0){//*
			
				vetor[3][1] = 'O';
				jogada = 1;
				
			}
			
			
			
			
			
			else if(vetor[1][2] == '.' && vetor[2][2] == '.' && vetor[3][2] == 'O' && jogada == 0){
				
				vetor[1][2] = 'O';
				jogada = 1;
				
			}else if(vetor[1][2] == '.' && vetor[2][2] == 'O' && vetor[3][2] == '.' && jogada == 0){
				
				vetor[1][2] = 'O';
				jogada = 1;
				
			}else if(vetor[1][2] == 'O' && vetor[2][2] == '.' && vetor[3][2] == '.' && jogada == 0){//*
			
				vetor[3][2] = 'O';
				jogada = 1;
				
			}
			
			
			
			
			else if(vetor[1][3] == '.' && vetor[2][3] == '.' && vetor[3][3] == 'O' && jogada == 0){
				
				vetor[1][3] = 'O';
				jogada = 1;
				
			}else if(vetor[1][3] == '.' && vetor[2][3] == 'O' && vetor[3][3] == '.' && jogada == 0){
				
				vetor[3][3] = 'O';
				jogada = 1;
				
			}else if(vetor[1][3] == 'O' && vetor[2][3] == '.' && vetor[3][3] == '.' && jogada == 0){
				
				vetor[3][3] = 'O';
				jogada = 1;
				
			}
			/*else if(vetor[2][2] == '.' && jogada == 0){
				vetor[2][2] = 'O';
				jogada = 1;
			}*/
			//fim decisão
			
		}
		
		//condições de vitoria
	    if( vetor[1][1] != '.' && vetor[2][1] != '.' && vetor[3][1] != '.' && vetor[1][1] == vetor[2][1] && vetor[2][1] == vetor[3][1]){ //condição 1
	    	//vitoria = vetor[1][1];
	    	vencedor = estado;
		}else if(vetor[1][2] != '.' && vetor[2][2] != '.' && vetor[3][2] != '.' && vetor[1][2] == vetor[2][2] && vetor[2][2] == vetor[3][2]){ //condição 2
			//vitoria = vetor[1][2];
			vencedor = estado;
		}else if(vetor[1][3] != '.' && vetor[2][3] != '.' && vetor[3][3] != '.' && vetor[1][3] == vetor[2][3] && vetor[2][3] == vetor[3][3]){ //condição 3
			//vitoria = vetor[1][3];
			vencedor = estado;
		}else if(vetor[1][1] != '.' && vetor[1][2] != '.' && vetor[1][3] != '.' && vetor[1][1] == vetor[1][2] && vetor[1][2] == vetor[1][3]){ //condição 4
			//vitoria = vetor[1][1];
			vencedor = estado;
		}else if(vetor[2][1] != '.' && vetor[2][2] != '.' && vetor[2][3] != '.' && vetor[2][1] == vetor[2][2] && vetor[2][2] == vetor[2][3]){ //condição 5
			//vitoria = vetor[2][1];
			vencedor = estado;
		}else if(vetor[3][1] != '.' && vetor[3][2] != '.' && vetor[3][3] != '.' && vetor[3][1] == vetor[3][2] && vetor[3][2] == vetor[3][3]){ //condição 6
			//vitoria = vetor[3][1];
			vencedor = estado;
		}else if(vetor[1][1] != '.' && vetor[2][2] != '.' && vetor[3][3] != '.' && vetor[1][1] == vetor[2][2] && vetor[2][2] == vetor[3][3]){ //condição 7
			//vitoria = vetor[1][1];
			vencedor = estado;
		}else if(vetor[1][3] != '.' && vetor[2][2] != '.' && vetor[3][1] != '.' && vetor[1][3] == vetor[2][2] && vetor[2][2] == vetor[3][1]){ //condição 8
			//vitoria = vetor[1][3];
			vencedor = estado;
		}
		
		
		//verifica jogo empatado
        if(vetor[1][1]!='.'&&vetor[1][2]!='.'&&vetor[1][3]!='.'&&vetor[2][1]!='.'&&vetor[2][2]!='.'&&vetor[2][3]!='.'&&vetor[3][1]!='.'&&vetor[3][2]!='.'&&vetor[3][3]!='.'){
        	printf("JOGO EMPATADO \n\nCOMECE NOVAMENTE\n");
        	emp += 1;
        	startVelha();
        	imprimeVetor();
        	jogo = 0;
		}
		
		imprimeVetor();
		printf("\n");
		
		if(vencedor != 'n'){
		    
		    printf("condicao de vitoria aceita \n");
		    
		    if(vencedor == 'X'){
		    	printf("Parabens voce venceu!");
			    vit += 1;
			    startVelha();
			}else if(vencedor == 'O'){
				printf("Voce perdeu!");
			    der = der += 1;
			    startVelha();
			}
			
		
		    printf("\n PLACAR:  +++++++++++++++++++++++++++++++++++++++++\n\n");
		    printf("    %d     | VITORIAS                            \n", vit);
	        printf("    %d     | DERROTAS                            \n\n", der);
	        printf("    %d     | EMPATES                             \n\n", emp);
	        printf("+++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
	
		    vencedor = 'n';
		    
		    imprimeVetor();
		    
		}
		
		
		//alterna as jogadas
	    if(estado == 'X'){
	        estado = 'O';
		}else if(estado == 'O'){
		    estado = 'X';
	    }
		
		
	}//fim while
	
    system("PAUSE");
	return 0;
}
