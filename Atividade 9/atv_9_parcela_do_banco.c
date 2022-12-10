#include <stdio.h>
#include <conio.h>
#include <math.h>

main() {
    float emprestimo, parcelas, salario, aprovar;

    system("cls");

    printf("Qual valor do emprestimo? ");
    scanf("%f", &emprestimo);
    printf("Qual numero de parcelas que voce vai pagar? ");
    scanf("%f", &parcelas);
    printf("Qual seu salario? ");
    scanf("%f", &salario);



    aprovar = (emprestimo/parcelas) / salario;


    if(aprovar <= 0.3) {
    printf("EMPRESTIMO APROVADO \n \n \n");
    }
    else {
    printf("\n \n Emprestimo NAO aprovado \n \n \n");
    }

    system("pause");



 system("pause");


}
