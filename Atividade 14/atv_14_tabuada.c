#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
    int n1;
    int cont;
    int result;

    system("cls");
    printf("escolha o nume para ser mostrado a tabuada: ");
    scanf("%d", &n1);


    for (cont=0;cont<=10;cont++){
        result = n1*cont;
        printf("%d x %d = %d \n",n1, cont, result );
    }

 system("pause");
}

