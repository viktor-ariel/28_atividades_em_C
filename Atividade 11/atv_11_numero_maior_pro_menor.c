#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
    float num1,num2,num3;

    system("cls");

    printf("Escolha um numero? ");
    fflush(stdin);
    scanf("%f", &num1);
    printf("Escolha outro numero? ");
    scanf("%f", &num2);
    fflush(stdin);
    printf("escolha outro numero? ");
    fflush(stdin);
    scanf("%f", &num3);



    if(num1<num2 && num2<num3) {
       printf("Do menor pro maior os numeros são %f %f %f",num1,num2,num3);
    }
    else if(num1<num3 && num3<num2){
        printf("Do menor pro maior os numeros são %f %f %f",num1,num3,num2);
    }
    else if(num2<num1 && num1<num3){
        printf("Do menor pro maior os numeros são %f %f %f",num2,num1,num3);
    }
     else if(num2<num3&& num2<num1){
        printf("Do menor pro maior os numeros são %f %f %f",num2,num3,num1);
    }
     else if(num3<num1 && num1<num2){
        printf("Do menor pro maior os numeros são %f %f %f",num3,num1,num2);
    }
    else{
        printf("Do menor pro maior os numeros são %f %f %f",num3,num2,num1);
    }
   
    system("pause");

}
