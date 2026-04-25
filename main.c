#include <stdio.h>

void shellSort(int arr[], int n) {
    // Começa com um gap grande e vai reduzindo
    for (int gap = n / 2; gap > 0; gap /= 2) {
        
        // Faz o "insertion sort" com o gap atual
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;

            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }

            arr[j] = temp;
        }
    }
}

void imprimirArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int inventario[] = {45, 23, 78, 12, 56, 89, 67, 34};
    int n = sizeof(inventario) / sizeof(inventario[0]);

    printf("Inventário original:\n");
    imprimirArray(inventario, n);

    shellSort(inventario, n);

    printf("\nInventário ordenado (Shellsort):\n");
    imprimirArray(inventario, n);

    return 0;
}


/*
int main()
{
    printf("ola mundo");
    return 0;
}*/
