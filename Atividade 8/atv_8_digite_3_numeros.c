#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
    float num1, num2, num3;

    system("cls");

    printf("Digite um numero? ");
    scanf("%f", &num1);
    printf("Digite outro numero? ");
    scanf("%f", &num2);
    printf("Digite outro numero? ");
    scanf("%f", &num3);


    if(num1==num2 && num3==num1 && num2==num1) {
    printf("Os 3 valores sao iguais \n \n \n");
    }
    else if (num1 != num2 && num3 != num1 && num2 != num3){
    printf("\n \n Nao ha valores iguais \n \n \n");
    }
    else{
    printf("\n \n \n Tem 2 valores iguais e um diferente \n \n \n");
    }
    system("pause");


}
