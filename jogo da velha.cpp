#include<stdio.h>
#include<stdlib.h>

	char jogada, estado, vitoria, vetor[3][3], jogador1[30], jogador2[30];
	int l, c, i, linha, coluna, jogo;
	
	//instancia o vetor
	char startVelha(){
	    for(l = 1; l <= 3; l++){
		    for(c = 1; c <= 3; c++){
			    vetor[l][c] = '.';
		    }
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
	printf("Informe o nome dos jogadores\n");
	printf("Nome jogador 1: ");
	scanf("%s", &jogador1);
	fflush(stdin);
	printf("Nome jogador 2: " );
	scanf("%s", &jogador2);
	fflush(stdin);
	
	
	//inicio do jogo
	printf("\niniciar com X ou O ? \n");
	printf("X - 1 \n");
	printf("O - 2 \n");
	printf("selecione um valor: [1 / 2] ");
	scanf("%c", &estado);
	fflush(stdin);

    	if(estado == '1'){
		    estado = 'X';
		}else if(estado == '2'){
		    estado = 'O';
	    }else{
		    while(estado!='1' || estado!='2'){
			    printf("valor invalido, digite novamente:");
			    scanf("%c", &estado);
		    	if(estado == '1'){
		            estado = 'X';
		            break;
	            }else if(estado == '2'){
		            estado = 'O';
		            break;
	            }
		    }
	    }	    
	    
	//instancia vetor
	startVelha();
	    
	//imprime vetor
	for(l = 1; l <= 3; l++){
		for(c = 1; c <= 3; c++){
			printf(" %c ", vetor[l][c]);
		}
		printf("\n\n");
	}
	
	
	jogo = 1;
	
	//inicio do jogo
	while(jogo == 1){
	
	    printf("\na vez do %c jogar \n\n", estado);
	    // recebendo valores	
	    printf("digite a linha: ");
	    scanf("%d", &linha);
	
	    printf("digite a coluna:");
	    scanf("%d", &coluna);
	    printf("\n");
	
	    if(vetor[linha][coluna] == '.'){
	    	vetor[linha][coluna] = estado;
	    	//printf("%c \n", vetor[linha][coluna]);
	    }else if(vetor[linha][coluna] != '.'){ //espa�o ocupado
	    	
			// erro do jogador
			while(vetor[linha][coluna] != '.' ){
	    
	        printf("ESTE ESPACO JA ESTA OCUPADO!\n");
	    
		    printf("\na vez do %c jogar \n\n", estado);
	        // recebendo valores	
	        printf("digite a linha: ");
	        scanf("%d", &linha);
	
	        printf("digite a coluna:");
	        scanf("%d", &coluna);
	        printf("\n");
		
		    //insere valor
		    if(vetor[linha][coluna] == '.')	
			vetor[linha][coluna] = estado;	
			break;
			}
		}
	
	    //imprime vetor
	    for(l = 1; l <= 3; l++){
	    	for(c = 1; c <= 3; c++){
			    printf(" %c ", vetor[l][c]);
		    }
		    printf("\n\n");
	    }
	    	    
	    //condi��es de vitoria
	    if( vetor[1][1] != '.' && vetor[2][1] != '.' && vetor[3][1] != '.' && vetor[1][1] == vetor[2][1] && vetor[2][1] == vetor[3][1]){ //condi��o 1
	    	//printf("vitoria %c", vetor[1][1]);
	    	vitoria = vetor[1][1];
	    	jogo = 0;
	    	break;
		}else if(vetor[1][2] != '.' && vetor[2][2] != '.' && vetor[3][2] != '.' && vetor[1][2] == vetor[2][2] && vetor[2][2] == vetor[3][2]){ //condi��o 2
			//printf("vitoria %c", vetor[1][2]);
			vitoria = vetor[1][2];
			jogo = 0;
			break;
		}else if(vetor[1][3] != '.' && vetor[2][3] != '.' && vetor[3][3] != '.' && vetor[1][3] == vetor[2][3] && vetor[2][3] == vetor[3][3]){ //condi��o 3
			//printf("vitoria %c", vetor[1][3]);
			vitoria = vetor[1][3];
			jogo = 0;
			break;
		}else if(vetor[1][1] != '.' && vetor[1][2] != '.' && vetor[1][3] != '.' && vetor[1][1] == vetor[1][2] && vetor[1][2] == vetor[1][3]){ //condi��o 4
			//printf("vitoria %c", vetor[1][1]);
			vitoria = vetor[1][1];
			jogo = 0;
			break;
		}else if(vetor[2][1] != '.' && vetor[2][2] != '.' && vetor[2][3] != '.' && vetor[2][1] == vetor[2][2] && vetor[2][2] == vetor[2][3]){ //condi��o 5
			//printf("vitoria %c", vetor[2][1]);
			vitoria = vetor[2][1];
			jogo = 0;
			break;
		}else if(vetor[3][1] != '.' && vetor[3][2] != '.' && vetor[3][3] != '.' && vetor[3][1] == vetor[3][2] && vetor[3][2] == vetor[3][3]){ //condi��o 6
			//printf("vitoria %c", vetor[3][1]);
			vitoria = vetor[3][1];
			jogo = 0;
			break;
		}else if(vetor[1][1] != '.' && vetor[2][2] != '.' && vetor[3][3] != '.' && vetor[1][1] == vetor[2][2] && vetor[2][2] == vetor[3][3]){ //condi��o 7
			//printf("vitoria %c", vetor[1][1]);
			vitoria = vetor[1][1];
			jogo = 0;
			break;
		}else if(vetor[1][3] != '.' && vetor[2][2] != '.' && vetor[3][1] != '.' && vetor[1][3] == vetor[2][2] && vetor[2][2] == vetor[3][1]){ //condi��o 8
			//printf("vitoria %c", vetor[1][3]);
			vitoria = vetor[1][3];
			jogo = 0;
			break;
		}
		
	    
	    //alterna as jogadas
	    if(estado == 'X'){
	    	estado = 'O';
		}else if(estado == 'O'){
			estado = 'X';
		}
	    
	    //verifica jogo empatado
        if(vetor[1][1]!='.'&&vetor[1][2]!='.'&&vetor[1][3]!='.'&&vetor[2][1]!='.'&&vetor[2][2]!='.'&&vetor[2][3]!='.'&&vetor[3][1]!='.'&&vetor[3][2]!='.'&&vetor[3][3]!='.'){
        	printf("JOGO EMPATADO \n\nCOMECE NOVAMENTE\n");
        	for(l = 1; l <= 3; l++){
		        for(c = 1; c <= 3; c++){
			        vetor[l][c] = '.';
		            printf(" %c ", vetor[l][c]);
		        }
		        printf("\n");
	        }
		}
	    
    }//fim while
	
	if(vitoria == 'X'){
		printf("#   # # ##### ##### ##### # #####        # #####    #   #\n");
		printf("#   # #   #   #   # #   # # #   #        # #   #     # #\n");
		printf("#   # #   #   #   # ##### # #####    ##### #   #      #\n");
		printf(" # #  #   #   #   # # #   # #   #    #   # #   #     # #\n");
		printf("  #   #   #   ##### #  #  # #   #    ##### #####    #   # \n");
	}else if(vitoria == 'O'){
	    printf("#   # # ##### ##### ##### # #####        # #####    #####\n");
		printf("#   # #   #   #   # #   # # #   #        # #   #    #   #\n");
		printf("#   # #   #   #   # ##### # #####    ##### #   #    #   #\n");
		printf(" # #  #   #   #   # # #   # #   #    #   # #   #    #   #\n");
		printf("  #   #   #   ##### #  #  # #   #    ##### #####    ##### \n");
	}
	
	system("PAUSE");
	return 0;
}
