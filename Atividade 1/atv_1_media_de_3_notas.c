#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
    float nota1, nota2, nota3;

    system("cls");

    printf("Qual sua nota 1? ");
    scanf("%f", &nota1);

    printf("Qual sua nota 2? ");
    scanf("%f", &nota2);


    printf("Qual sua nota 3? ");
    scanf("%f", &nota3);


    float media = (nota1 + nota2 + nota3) / 3;
    printf ("Sua media e: %.2f \n \n", media);

    system("pause");
}
