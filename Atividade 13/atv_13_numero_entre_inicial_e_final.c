#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
    int n1, n2;
    int cont;

    system("cls");
    printf("escreva um numero inicial: ");
    scanf("%d", &n1);

    printf("escreva um numero final (maior que o primeiro): ");
    scanf("%d", &n2);

    for (cont=0;n1<=n2;n1++){
      printf("%d ",n1);
    }

 system("pause");
}
