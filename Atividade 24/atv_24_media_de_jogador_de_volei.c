#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main(){
    setlocale(LC_ALL,"Portuguese");

    int jogadores,  jogadores1,zero=0;
    float altura, resultado, altura_total;

    printf("Tem Quantos jogadores no time? ");
    fflush(stdin);
    scanf("%d", &jogadores);

    jogadores1 = jogadores + zero;


    while(jogadores>0){
        printf("Qual a altura do jogador?");
        fflush(stdin);
        scanf("%f", &altura);
        altura_total = altura + altura_total;
        jogadores--;
    }

    resultado = altura_total / jogadores1;
    // printf("\n %f \n %f \n %d \n",resultado, altura_total, jogadores1);
    printf("A media do time é: %.2f", resultado);
}
