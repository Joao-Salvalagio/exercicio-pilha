#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

#define TAMANHO 100

int stack[TAMANHO]; 
int top = -1;

bool push(int valor) {
    if (top >= TAMANHO - 1) {
        printf("Erro: pilha cheia.\n");
        return false;
    }

    top++;            
    stack[top] = valor; 
    return true;
}

void exibir_pilha() {
    printf("Pilha: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {

    setlocale(LC_ALL, "portuguese");

    push(10);
    push(20);
    push(30);
    exibir_pilha();

    return 0;
}
