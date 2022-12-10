#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

main(){
    setlocale(LC_ALL,"Portuguese");
    
    int maior,menor,numero;
 

    do{
        
    printf("Digite um numero ");
    scanf("%d", &numero);

    if(numero>0){
       
        if(numero>maior){
            maior=numero;
        }
        if(numero<menor){
            menor=numero;
        }
    }
 
        
    }while(numero!=0);
    printf("O maior numero é %d o menor numero é %d", maior,menor);
    

}


