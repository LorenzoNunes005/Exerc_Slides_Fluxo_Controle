#include <stdio.h>

int main(){
    double n1, n2, resultado;
    char operador;

    printf("Digite o primeiro número: ");
    scanf("%lf", &n1);
    printf("Digite o segundo número: ");
    scanf("%lf", &n2);
    printf("Selecione o operador: (+, -, *, /):");
    scanf(" %c", &operador);
    switch (operador){
        case '+':
            resultado = n1 + n2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '-':
            resultado = n1 - n2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case '*':
            resultado = n1 * n2;
            printf("Resultado: %.2lf\n", resultado); 
            break; 
        case '/':
            resultado = n1 / n2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        default :
            printf("Opção inválida\n");
            break;  
    }

}