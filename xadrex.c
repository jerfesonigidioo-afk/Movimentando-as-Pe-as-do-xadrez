#include <stdio.h>

int main(){

    int opcao;
        //escolher a peça a se mover//

    printf("escolha a peça de voce deseja mover:\n");
    printf("1: TORRE\n");
    printf("2: BISPO\n");
    printf("3: RAINHA\n");
    printf("escolha de peça: ");
    scanf("%d",&opcao);


        //switch para ser executado o programa da peça escolhida//
        switch (opcao)
        {
            // 'for' usado para mover a torre//

        case 1:
        printf("*** a peça escolhida foi a 'TORRE'! ***\n");
            for (int torre = 0; torre <= 5; torre++)
        {
        printf("a torre moveu %d casas para a direita!\n",torre);
        }
            break;

            //'while' usado para mover o bispo//

        case 2:
        printf("*** a peça escolhida foi o 'BISPO'! ***\n ");
        int bispo = 0 ;
            while (bispo <= 5)
        {
        printf("o bispo moveu %d casas para cima/direita!\n", bispo);
                bispo++;
        } 
        break;

            // 'do-while' usado para mover a rainha//

        case 3:
        printf("*** a peça escolhida foi a 'RAINHA' ***!\n ");
        int rainha = 0;
        do
        {
        printf("a rainha moveu %d casa para a esquerda!\n", rainha);
           rainha++;
        } while (rainha <= 8);
            break;

            //caso a opçao selecionada seja outra alem das oferecidas//

        default:
        printf("opçao nao encontrada,tente novamente!\n");
            break;
        }
     
 
    return 0;

}