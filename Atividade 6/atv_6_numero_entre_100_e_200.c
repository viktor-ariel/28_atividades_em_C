#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
    float numero;

    system("cls");

    printf("Escolha um numero ? ");
    scanf("%f", &numero);


    if(numero > 100 && numero < 200) {
    printf("Seu numero esta entre 100 e 200 \n \n \n");
    }
    else {
    printf("\n \n seu numero NAO esta entre 100 E 200 \n \n \n");
    }

    system("pause");


}
