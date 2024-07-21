#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int dado(){
    return (rand() % 6) + 1;
}


int main(){
    setlocale(LC_ALL, "pt_br.utf-8");
srand(time(0));
int quantidade, lados, escolha;

while (1){
    printf("Escolha o tipo de dado: ");
    printf("\n1- d4\n2- d6\n3- d8\n4- d10\n5- d12\n6- d20\n7- encerrando...");
    scanf("%d", &escolha);
    switch (escolha){
        case 1:
        lados = 4;
        break;
        case 2:
        lados = 6;
        break;
        case 3:
        lados = 8;
        break;
        case 4:
        lados = 10;
        break;
        case 5:
        lados = 12;
        break;
        case 6:
        lados = 20;
        break;
        case 7:
        printf("Saindo do progama...");
        return 0;
        break;
        default:
        printf("Opição inválida!");
        continue;
    }

    printf("Quantas vezes você deseja arremeçar: ");
    scanf("%d", &quantidade);

    for (int i = 0; i < quantidade; i++){
        printf("Lançamento %d: %d\n", i + 1, dado(lados));
    }
}
return 0;
}