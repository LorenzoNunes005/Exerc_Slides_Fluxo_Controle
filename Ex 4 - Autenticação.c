#include <stdio.h>

int main()
{
    int senha, cargo;
    printf("Digite sua senha");
    scanf("%d", &senha);
    if (senha == 1234){
        printf("Acesso ao sistema permitido\n");
        printf("Informe o seu cargo: (1- Administrador, 2- Gerente, 3- Funcionário.)");
        scanf("%d", &cargo);
    switch (cargo){
        case 1:
            printf("Acesso total ao sistema.");
            break;
        case 2:
            printf("Acesso parcial (relatórios e estoque.)");
            break;
        case 3:
            printf("Acesso básico (apenas consultas)");
            break;
        default:
            printf("Cargo inválido!");
            break;
    }
    }else{
        printf("Acesso negado.");
    
    }
    

    return 0;
}