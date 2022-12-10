#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main(){
    setlocale(LC_ALL,"Portuguese");

    int num=0, soma=0,media=0;
    float resultado;
    do{
        printf("Digite um numero ");
        scanf("%d", &num);
        if (num%2==0){
            soma = num + soma;
            if (num!=0){
                    media++;
            }
        }

    }while(num!=0);

    resultado = (float)soma / (float)media;
    // printf("%f \n %d \n %d \n" ,resultado,soma,media);
    printf("O resultado da media dos numeros pares é: %.2f", resultado);



}

