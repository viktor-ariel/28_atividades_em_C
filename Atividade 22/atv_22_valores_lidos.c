#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main(){
    setlocale(LC_ALL,"Portuguese");

    int num1,num2,media;
    do{
        printf("\n\nDigite um numero: ");
        scanf("%d", &num1);
        printf("Digite um numero: ");
        scanf("%d", &num2);
        media = (num1 + num2) / 2;
        printf("A media dos numero e: %d",media);

    }
    while ( num1>1 && num1<100 ||  num2>1 && num2<100 );

}
