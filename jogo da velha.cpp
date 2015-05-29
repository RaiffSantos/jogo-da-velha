#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char jogada, estado, vitoria, vetor[3][3];
	int l, c, linha, coluna, jogo;
		
	//instancia o vetor
	for(l = 1; l <= 3; l++){
		for(c = 1; c <= 3; c++){
			vetor[l][c] = '.';
		}
	}
	
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
	
	//inicio do jogo
	printf("iniciar com X ou O ? \n");
	printf("X - 1 \n");
	printf("O - 2 \n");
	printf("selecione um valor: [1 / 2] ");
	scanf("%c", &estado);
	
	//define X ou O
	if(estado == '1'){
		estado = 'X';
	}else if(estado == '2'){
		estado = 'O';
	}
	
	//imprime vetor
	for(l = 1; l <= 3; l++){
		for(c = 1; c <= 3; c++){
			printf(" %c ", vetor[l][c]);
		}
		printf("\n");
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
	    	jogo = 0;
	    	break;
		}else if(vetor[1][2] != '.' && vetor[2][2] != '.' && vetor[3][2] != '.' && vetor[1][2] == vetor[2][2] && vetor[2][2] == vetor[3][2]){ //condição 2
			//printf("vitoria %c", vetor[1][2]);
			vitoria = vetor[1][2];
			jogo = 0;
			break;
		}else if(vetor[1][3] != '.' && vetor[2][3] != '.' && vetor[3][3] != '.' && vetor[1][3] == vetor[2][3] && vetor[2][3] == vetor[3][3]){ //condição 3
			//printf("vitoria %c", vetor[1][3]);
			vitoria = vetor[1][3];
			jogo = 0;
			break;
		}else if(vetor[1][1] != '.' && vetor[1][2] != '.' && vetor[1][3] != '.' && vetor[1][1] == vetor[1][2] && vetor[1][2] == vetor[1][3]){ //condição 4
			//printf("vitoria %c", vetor[1][1]);
			vitoria = vetor[1][1];
			jogo = 0;
			break;
		}else if(vetor[2][1] != '.' && vetor[2][2] != '.' && vetor[2][3] != '.' && vetor[2][1] == vetor[2][2] && vetor[2][2] == vetor[2][3]){ //condição 5
			//printf("vitoria %c", vetor[2][1]);
			vitoria = vetor[2][1];
			jogo = 0;
			break;
		}else if(vetor[3][1] != '.' && vetor[3][2] != '.' && vetor[3][3] != '.' && vetor[3][1] == vetor[3][2] && vetor[3][2] == vetor[3][3]){ //condição 6
			//printf("vitoria %c", vetor[3][1]);
			vitoria = vetor[3][1];
			jogo = 0;
			break;
		}else if(vetor[1][1] != '.' && vetor[2][2] != '.' && vetor[3][3] != '.' && vetor[1][1] == vetor[2][2] && vetor[2][2] == vetor[3][3]){ //condição 7
			//printf("vitoria %c", vetor[1][1]);
			vitoria = vetor[1][1];
			jogo = 0;
			break;
		}else if(vetor[1][3] != '.' && vetor[2][2] != '.' && vetor[3][1] != '.' && vetor[1][3] == vetor[2][2] && vetor[2][2] == vetor[3][1]){ //condição 8
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
