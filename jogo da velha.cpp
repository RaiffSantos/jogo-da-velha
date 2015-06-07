#include<stdio.h>
#include<stdlib.h>

	char vetor[3][3], jogador1[20], jogador2[20];
	char jogada, estado, vitoria, vencedor, vez;
	int l, c, i, linha, coluna, jogo, vitJog1, vitJog2, empate;
	
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
		printf("\n");
	}
	
	
	jogo = 1;
	vez = '1';
	vencedor = 'n';
	
	//inicio do jogo
	while(jogo == 1){
	
	    printf("a vez do %c jogar \n\n", estado);
	    // recebendo valores	
	    printf("digite a linha: ");
	    scanf("%d", &linha);
	
	    printf("digite a coluna:");
	    scanf("%d", &coluna);
	    printf("\n");
	
	    if(vetor[linha][coluna] == '.'){
	    	vetor[linha][coluna] = estado;
	    	//printf("%c \n", vetor[linha][coluna]);
	    }else if(vetor[linha][coluna] != '.'){ //espaço ocupado
	    	
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
	    	    
	    //condições de vitoria
	    if( vetor[1][1] != '.' && vetor[2][1] != '.' && vetor[3][1] != '.' && vetor[1][1] == vetor[2][1] && vetor[2][1] == vetor[3][1]){ //condição 1
	    	//printf("vitoria %c", vetor[1][1]);
	    	vitoria = vetor[1][1];
	    	vencedor = vez;
		}else if(vetor[1][2] != '.' && vetor[2][2] != '.' && vetor[3][2] != '.' && vetor[1][2] == vetor[2][2] && vetor[2][2] == vetor[3][2]){ //condição 2
			//printf("vitoria %c", vetor[1][2]);
			vitoria = vetor[1][2];
			vencedor = vez;
		}else if(vetor[1][3] != '.' && vetor[2][3] != '.' && vetor[3][3] != '.' && vetor[1][3] == vetor[2][3] && vetor[2][3] == vetor[3][3]){ //condição 3
			//printf("vitoria %c", vetor[1][3]);
			vitoria = vetor[1][3];
			vencedor = vez;
		}else if(vetor[1][1] != '.' && vetor[1][2] != '.' && vetor[1][3] != '.' && vetor[1][1] == vetor[1][2] && vetor[1][2] == vetor[1][3]){ //condição 4
			//printf("vitoria %c", vetor[1][1]);
			vitoria = vetor[1][1];
			vencedor = vez;
		}else if(vetor[2][1] != '.' && vetor[2][2] != '.' && vetor[2][3] != '.' && vetor[2][1] == vetor[2][2] && vetor[2][2] == vetor[2][3]){ //condição 5
			//printf("vitoria %c", vetor[2][1]);
			vitoria = vetor[2][1];
			vencedor = vez;
		}else if(vetor[3][1] != '.' && vetor[3][2] != '.' && vetor[3][3] != '.' && vetor[3][1] == vetor[3][2] && vetor[3][2] == vetor[3][3]){ //condição 6
			//printf("vitoria %c", vetor[3][1]);
			vitoria = vetor[3][1];
			vencedor = vez;
		}else if(vetor[1][1] != '.' && vetor[2][2] != '.' && vetor[3][3] != '.' && vetor[1][1] == vetor[2][2] && vetor[2][2] == vetor[3][3]){ //condição 7
			//printf("vitoria %c", vetor[1][1]);
			vitoria = vetor[1][1];
			vencedor = vez;
		}else if(vetor[1][3] != '.' && vetor[2][2] != '.' && vetor[3][1] != '.' && vetor[1][3] == vetor[2][2] && vetor[2][2] == vetor[3][1]){ //condição 8
			//printf("vitoria %c", vetor[1][3]);
			vitoria = vetor[1][3];
			vencedor = vez;
		}
		
		//alterna a vez dos jogadores
	    if(vez == '1'){
	    	vez = '2';
		}else if(vez == '2'){
			vez = '1';
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
        	empate += 1;
        	for(l = 1; l <= 3; l++){
		        for(c = 1; c <= 3; c++){
			        vetor[l][c] = '.';
		            printf(" %c ", vetor[l][c]);
		        }
		        printf("\n");
	        }
		}
	    
	
	if(vencedor == '1'){
		printf("Parabens: %s \n\n", jogador1);
		vitJog1 += 1;
		
		//instancia vetor
	    startVelha();
	    
	}else if(vencedor == '2'){
		printf("Parabens: %s \n\n", jogador2);
		vitJog2 += 1;
		
		//instancia vetor
	    startVelha();
	    
	}
	
	if(vencedor != 'n'){
		printf("PLACAR:  +++++++++++++++++++++++++++++++++++++++++\n\n");
		printf(" VITORIAS\n");
		printf("    %d     | %s                              \n", vitJog1, jogador1);
	    printf("    %d     | %s                            \n\n", vitJog2, jogador2);
	    printf("    %d      EMPATES                        \n\n", empate);
	    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
	}
	
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
	
	vencedor = 'n';
	vitoria = 'n';
	}//fim while
	
	system("PAUSE");
	return 0;
}
