#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
    char sexo, saude;

    system("cls");

    printf("Qual o seu sexo? ( m - masculino / f - feminino ) ");
    scanf("%c", &sexo);

    printf("Voce tem problema de saude? ( s - sim / n - nao ) ");
    fflush(stdin);
    scanf("%c", &saude);

    if((sexo=='m' || sexo=='M') && (saude=='n'||saude=='N')) {
    printf("Voce e homem e nao tem problemas de saude, Voce pode se alistar \n");
    }
    else {
    printf("Voce nao pode se alistar\n\n");
    }

    system("pause");


}
