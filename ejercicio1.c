#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    
    printf("Direcciones de memoria de los elementos del arreglo:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d, Direccion: %p\n", i, arr[i], (void*)&arr[i]);
    }
    
    return 0;
}
