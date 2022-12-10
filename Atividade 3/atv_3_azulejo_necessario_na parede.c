#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
    float alt_pa, lar_pa, area_pa, alt_azu, lar_azu, area_azu, azulejos ;

    system("cls");

    printf("Qual a altura da parede (metros) ? ");
    scanf("%f", &alt_pa);
    printf("Qual a largura da parede (metros) ? ");
    scanf("%f", &lar_pa);
    printf("Qual a altura do azulejo (metros) ? ");
    scanf("%f", &alt_azu);
    printf("Qual a largura do azulejo (metros) ? ");
    scanf("%f", &lar_azu);

    area_pa = alt_pa * lar_pa;
    area_azu = alt_azu * lar_azu;
    azulejos = area_pa / area_azu;
    printf ("O numero de azulejos usados na obra vai ser: %.2f \n \n", azulejos);

    system("pause");
}
