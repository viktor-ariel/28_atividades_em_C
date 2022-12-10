#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
    int n1=0, n2=1;
    int cont;

    system("cls");

    printf("Todos os 20 numeros da sequencia de fibo \n");

    for(cont=0;cont<=9;cont++){
        printf("%d %d ", n1, n2);
        n1=n1+n2;
        n2=n2+n1;
    }

 system("pause");
}
