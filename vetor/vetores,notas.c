#include<stdio.h>


main(){

    float soma=0,media;
    int cont,quant_notas;

    printf("Quantas notas voce deseja digitar? ");
    fflush(stdin);
    scanf("%d", &quant_notas);

    float notas[quant_notas];

    for(cont=0;cont<quant_notas;cont++){
        printf("\n Digite a nota do aluno: ");
        fflush(stdin);
        scanf("%f",&notas[cont]);
        soma = soma + notas[cont];
    }

     printf("\n\n========NOTAS========\n\n");
        for(cont=0;cont<quant_notas;cont++){
        printf("Nota %d: %.1f \n",cont+1,notas[cont]);

    }
    media = (float)soma / cont;
    //printf("%f , %f, %d , %d" , soma,media,cont,quant_notas);
    printf("\n\nA media %.2f \n\n", media);
    //soma = soma + notas[cont];
}



 //printf("========NOTAS========\n\n");
   // for(cont=0;cont<=4;cont++){
     //   printf("Nota %d: %.1f \n",cont,notas[cont]);
       // soma = soma + notas[cont];
    //}


    //media = soma /5;
    //printf("A media %d ", media);
