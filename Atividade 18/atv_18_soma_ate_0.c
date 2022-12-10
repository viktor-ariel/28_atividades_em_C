#include <stdio.h>
#include <conio.h>
#include <math.h>

main(){

    int num,cont,soma=0;

    for(;;){
        printf("Digite 1 numero e aperte (enter)\n (Se quiser parar digite 0) \n");
        scanf("%d", &num);
        if (num==0){
            printf("O numero digitado foi 0!! Fim!!\n ");
            break;
        }
        else{
            soma = soma + num;
            printf("O resultado da soma desses numeros e: %d \n\n\n", soma );
        }
    }

}

