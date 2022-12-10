#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main(){
    setlocale(LC_ALL,"Portuguese");

    int numero,cont,primo=0;

    printf("Digite um numero para ver se ele é primo ou não: ");
    //fflush(stdin);
    scanf("%d", &numero);


    for(cont=1;cont<=numero;cont++){
        if(numero%cont==0){
            primo++;
            printf("O numero e divisivel por %d \n", cont);
        }

    }
    if (primo==2){
         printf("O numero é primo, ele é divisivel por %d numeros \n", primo);
    }else{
         printf("O numero  não é primo, ele é divisivel por %d numeros \n", primo);
    }


}
