#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

    int num,cont,soma=0;

    for(cont=1;cont<=10;cont++){

        printf("Digite 1 numero e aperte (enter)");
        scanf("%d", &num);

        soma = soma+num;


    }
    printf("O resultado da soma desses numeros e: %d \n", soma );



}
