#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
    float nota1, nota2, nota3, nota4, media, total, rec, media_rec;

    system("cls");

    printf("Qual sua nota 1? ");
    scanf("%f", &nota1);
    system("cls");

    printf("Qual sua nota 2? ");
    scanf("%f", &nota2);
    system("cls");

    printf("Qual sua nota 3? ");
    scanf("%f", &nota3);
    system("cls");

    printf("Qual sua nota 4? ");
    scanf("%f", &nota4);
    system("cls");

    total = (nota1 + nota2 + nota3 + nota4);
    media = total / 4;


    if(media >= 7) {
        printf("Parabens Voce Passou!!!! \n \n \n");
    }
    else {
        printf("\n Qual a nota sua da recuperacao?? \n");
        scanf("%f", &rec);
        media_rec = (rec+total) / 5;
        system("cls");
        printf("\n Sua nova media e: %.2f \n", media_rec);
    }

    system("pause");
}
