#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main(){
    setlocale(LC_ALL,"Portuguese");

    int num,multi=1;
    printf("Digite um numero para calcular o fatorial ");

    scanf("%d", &num);

    while(num>0)
        {
        multi = multi * num;
        num--;

        }

    printf("Fatorial desse numero é: %d",multi);



}
