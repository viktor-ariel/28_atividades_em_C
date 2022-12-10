#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
    float raio, area;

    system("cls");

    printf("Qual o raio do circulo ? ");
    scanf("%f", &raio);
    system("cls");

    area = 3.14 * pow(raio,2);
    printf ("Area do circulo e: %.2f \n \n", area);

    system("pause");
}
