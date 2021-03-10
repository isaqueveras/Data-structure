# include <stdio.h>
# include <stdlib.h>
# include <string.h>

typedef struct No {
	int valor;
	struct No *proximo;
} No;

typedef struct {
	No *inicio, *fim;
	int tamanho;
} Lista;

// Inserir na lista
void inserirNoFim(Lista *lista, int valor) {
	No *novo = (No*)malloc(sizeof(No)); // Cria um novo Nó
	novo->valor = valor; // O novo nó recebe um valor
	novo->proximo = NULL;

	if (lista->inicio == NULL) { // Aqui, a lista está vazia!
		lista->inicio = novo;
		lista->fim = novo;

	} else { // Aqui, a lista não está vazia!
		lista->fim->proximo = novo;
		lista->fim = novo;
	}

	lista->tamanho++;
}

// Imprimir o tamanho da lista
void imprimirSomaDasListas(Lista *lista1, Lista *lista2) {
	No *inicio1 = lista1->inicio;
	No *inicio2 = lista2->inicio;

	// imprimindo os valores da 1° lista
	while(inicio1 != NULL) {
		printf("%d ", inicio1->valor);
		inicio1 = inicio1->proximo;
	}

	// imprimindo os valores da 2° lista
	while(inicio2 != NULL) {
		printf("%d ", inicio2->valor);
		inicio2 = inicio2->proximo;
	}

	printf("\n\n");
}

int main() {
	Lista lista1, lista2; // Criando as listas
	int valor1, valor2;

	// Inicializando a primeira lista
	lista1.inicio = NULL;
	lista1.fim = NULL;
	lista1.tamanho = 0;

	// Inicializando a segunda lista
	lista2.inicio = NULL;
	lista2.fim = NULL;
	lista2.tamanho = 0;

	while(valor1 != -1) {
		scanf("%d", &valor1); // Receber o valor da primeira lista
		if (valor1 != -1) inserirNoFim(&lista1, valor1); // Inserir numeros diferente de -1
	}

	while(valor2 != -1) {
		scanf("%d", &valor2); // Receber o valor da segunda lista
		if (valor2 != -1) inserirNoFim(&lista2, valor2); // Inserir numeros diferente de -1
	}

	// Imprimindo a soma das duas listas
	if (valor1 == -1 && valor2 == -1) imprimirSomaDasListas(&lista1, &lista2);

	return 0;
}
