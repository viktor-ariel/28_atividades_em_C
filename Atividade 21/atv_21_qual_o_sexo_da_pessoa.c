#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main(){
    setlocale(LC_ALL,"Portuguese");

    char sexo;

     for(;;){
        printf("Qual seu sexo? \n Digite M (Masculino) ou F (Feminino) ");
        fflush(stdin);
        scanf("%c", &sexo);

        if(sexo=='M'){
                printf("Seu sexo é Masculino! \n");
                fflush(stdin);
                break;
        }else if(sexo=='F'){
                printf("Seu sexo é Feminino! \n");
                fflush(stdin);
                break;
        }
        system("cls");


}
}
