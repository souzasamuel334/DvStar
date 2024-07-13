#include <stdio.h>
#include <locale.h>

int soma(int *arr, int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += *(arr + i);
    }
    return sum;
}


int main(){
    setlocale(LC_ALL, "pt_br.utf-8");
int arr[] = {1, 2, 3, 4, 5, };
int n = sizeof(arr) / sizeof(arr[0]);
int resultado = soma(arr, n);

printf("A soma dos elementos do array é: %d\n", resultado);

return 0;
}