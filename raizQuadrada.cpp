#include <stdio.h>
# include <locale.h>


int main() {
	setlocale(LC_ALL,"");
    float numero, raiz;

    printf("Digite um número: ");
    scanf("%f", &numero);

    if (numero >= 0) {
        raiz = numero /2;

        while (raiz * raiz - numero > 0.00001) {
            raiz = (raiz + numero / raiz) / 2.0;
        }

        printf("A raiz quadrada de %.2f é %.2f\n", numero, raiz);
    } else {
        printf("Erro: Não é possível calcular a raiz quadrada de um número negativo.\n");
    }

    return 0;
}
