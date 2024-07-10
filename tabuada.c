#include <stdio.h>

int main () {
    int numero1;
    printf("Digite um número inteiro ");
    scanf("%d", &numero1);
    for(int numero2 = 1; numero2 <=10; numero2++) {
        printf("%dx%d=%d\n", numero1, numero2, numero1 * numero2);
    }
}