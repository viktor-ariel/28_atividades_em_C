#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {

    int soma=100;
    int cont;

    printf("Numeros impares de 100 a 200 \n");

    for(cont=100;cont<=200;cont++){
      if(cont%2==1){
            soma = soma + cont;
            printf("%d \n",cont);
        }
    }

 system("pause");
}
