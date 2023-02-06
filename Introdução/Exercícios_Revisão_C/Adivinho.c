// Um adivinho
/*Escreva um programa capaz de descobrir o valor de um número que você tenha imaginado.
O programa deve interagir sucessivamente com você, até descobrir o número.
Ao final, ele deve informar quantas tentativas precisou para descobrir o número.
OBS: o número deve ser um inteiro entre 0 e 100. */

#include <stdio.h>

int main()
{
    int resposta_usuario, // para interação do computador e do usuário
    tentativas = 0, // conta em qts vezes o computador acertar numero
    inicio = 0, fim = 100, meio,  // busca binária
    i; // contador


    for (int i = 0; i <= 7; i++) // 7x é o máx de tentativas
    {
        meio = (inicio + fim) / 2;
        printf(" O numero eh %d? Digite '1' para SIM e '0' para NAO\n", meio);
        scanf("%d", &resposta_usuario);

        tentativas++;

        // valor correto
        if (resposta_usuario == 1) {
            printf("O numero imaginado foi %d, em %d tentativas\n", meio, tentativas);
            i+= 7;
        }

        // caso não for correto
        else {
            printf("O valor eh maior ou menor que %d? Digite '1' para MAIOR e '0' para MENOR\n", meio);
            scanf("%d", &resposta_usuario);
                
            if (resposta_usuario == 1) 
                inicio = meio;
            else
                fim = meio;
        }
    }

    return 0;
}
