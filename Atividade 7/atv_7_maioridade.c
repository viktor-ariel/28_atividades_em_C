#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
    float numero;

    system("cls");

    printf("voce tem quantos anos ? ");
    scanf("%f", &numero);


    if(numero > 18) {
    printf("Voce tem mais de 18 anos voce e maior de idade \n \n \n");
    }
    else {
    printf("\n \n voce nao tem mais de 18 anos, voce ainda e menor de idade \n \n \n");
    }

    system("pause");


}
