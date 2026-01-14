#include <stdio.h>

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
        printf("*** a peça escolhida foi a 'TORRE' ***\n");
            for (int torre = 1; torre <= 5; torre++)
        {
        printf("%d casa a direita \n", torre);
        }
             break;

            //'while' usado para mover o bispo//

        case 2:
        printf("*** a peça escolhida foi o 'BISPO' ***\n");
        int bispo = 1 ;
            while (bispo <= 5)
        {
        printf("%d casa a cima/direita\n", bispo);
                bispo++;
        } 
             break;

            // 'do-while' usado para mover a rainha//

        case 3:
        printf("*** a peça escolhida foi a 'RAINHA' ***\n");
        int rainha = 1;
        do
        {
        printf("%d casa a esquerda\n", rainha);
           rainha++;
        } while (rainha <= 8);
             break;

            //for e while para fazer um loop para representar o movimento do cavalo//

        case 4:
        printf("*** a peça escolhida foi o 'CAVALO' ***\n");
        int esquerda = 1;
        int baixo = 1;
        for ( esquerda ; esquerda <= 1; esquerda++)
        {
          while(baixo <= 2){
            printf("%d casa baixo\n", baixo);
            baixo++;
          }printf("e %d casa a esquerda\n", esquerda);
        }
             break;
        
            //caso a opçao selecionada seja outra alem das oferecidas//

        default:
            printf("opçao nao encontrada,tente novamente!\n");
             break;
        }
     
 
    return 0;

}