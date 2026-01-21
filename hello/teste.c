#include <stdio.h>
#include <stdlib.h>


int main() {    
    char nome[50];
    printf("Digite seu nome: ");
    scanf("%49s", nome);
    
    printf("Ola, %s!\n", nome);

    system("pause");

    return 0;
}
