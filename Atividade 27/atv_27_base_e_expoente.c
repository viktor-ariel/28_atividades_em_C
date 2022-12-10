#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
main() {
    int base,expoente,cont=0,potencia=1;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente : ");
    scanf("%d", &expoente);
  
  
  
    while(cont!=expoente) {
    potencia=potencia*base;
    cont=cont+1;
    //printf("\n %d,\n %d,\n %d", potencia, expoente, base);
}
  
    printf("O valor de %d elevado a %d= %d\n", base, expoente, potencia);
}
