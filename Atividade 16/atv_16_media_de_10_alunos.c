#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

    int cont;
    float media,nota1,nota2;

    for (cont=1;cont<=10;cont++){

    printf("\n Qual nota 1 do %d aluno \n",cont);
    scanf("%f",&nota1);

    printf("\n Qual nota 2 do %d aluno \n ",cont);
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2 ;

    printf("\n A media do aluno %d e: %.2f \n", cont, media);

    system("pause");
    system("cls");
    }




}
