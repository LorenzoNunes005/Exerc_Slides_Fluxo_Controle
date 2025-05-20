#include <stdio.h>

int main()
{
    int dia;
    printf("Insira um número para saber o dia da semana dele (1, 2,3...)");
    scanf("%d", &dia);
    
    switch(dia){
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda-Feira");
            break;
        case 3:
            printf("Terca-Feira");
            break;
        case 4:
            printf("Quarta-Feira");
            break;
        case 5:
            printf("Quinta-Feira");
            break;
        case 6:
            printf("Sexta-Feira");
            break;
        default:
            printf("Opção Inválida");
            break;
            
    }

    return 0;
}