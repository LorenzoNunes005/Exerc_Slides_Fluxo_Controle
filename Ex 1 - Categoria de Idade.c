#include <stdio.h>

int main()
{
    int idade;
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    if (idade>=0 && idade<=12){
        printf("Você é uma criança.");
    }else{
        if (idade>=13 && idade<=17){
            printf("Você é um adolescente.");
        }else{
            if(idade >=18 && idade<=59){
                printf("Você é um adulto.");
            }else{
                if(idade>=60){
                    printf("Você é um idoso.");
                }
            }
        }
    }

    return 0;
}