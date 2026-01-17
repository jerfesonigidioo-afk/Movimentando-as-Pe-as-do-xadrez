#include <stdio.h>

    // void para a peça da TORRE//

   void tore(int torre){
        if (torre > 0)
        {
            tore(torre - 1);
             printf("direita \n");
        }
    }
     
    // void para a peça do BISPO//

    void bispoo(int bispo){
        int cima = 1;
        int direita = 1;
        for ( cima ; cima <= 5; cima++)
        {
          while(direita <= 5){
            direita++;
          }printf("cima/direita\n");
        }
    }

    // void para a peça da RAINHA//

     void rainhaa(int rainha){
        if ( rainha > 0)
        {
            rainhaa( rainha - 1);
             printf("esquerda \n");
        } 
    }

int main(){

    int opcao;

        //escolher a peça a se mover//

    printf("escolha a peça de voce deseja mover:\n");
    printf("1: TORRE\n");
    printf("2: BISPO\n");
    printf("3: RAINHA\n");
    printf("4: CAVALO\n");
    printf("escolha de peça: ");
    scanf("%d",&opcao);


        //switch para ser executado o programa da peça escolhida//
        switch (opcao)
        {
            // 'for' usado para mover a torre//

        case 1:
        int torre = 5;
        printf("*** a peça escolhida foi a 'TORRE' ***\n");
        tore( torre);
    
             break;

            //'while' usado para mover o bispo//

        case 2:
        printf("*** a peça escolhida foi o 'BISPO' ***\n");
        int bispo;
        bispoo(bispo);
            
             break;

            // 'do-while' usado para mover a rainha//

        case 3:
        printf("*** a peça escolhida foi a 'RAINHA' ***\n");
        int rainha = 8;
        rainhaa(rainha);
     
             break;

            //for e while para fazer um loop para representar o movimento do cavalo//

        case 4:
        printf("*** a peça escolhida foi o 'CAVALO' ***\n");
        int direita = 1;
        int cima = 1;

        for (direita; direita <= 1 && cima != 2; direita++){   
           for (cima ; cima <= 2 ;cima ++)
           {
            printf("cima \n");
           }printf("direita \n");
        }
        
             break;
        
            //caso a opçao selecionada seja outra alem das oferecidas//

        default:
            printf("opçao nao encontrada,tente novamente!\n");
             break;
        }
     
 
    return 0;

}