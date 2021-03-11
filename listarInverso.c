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
void inserirNaLista(Lista *lista, int valor) {
	No *novo = (No*)malloc(sizeof(No)); // Cria um novo Nó
	novo->valor = valor; // O novo nó recebe um valor

	if (lista->inicio == NULL) { // Aqui, a lista está vazia!
		novo->proximo = NULL;
		lista->inicio = novo;
		lista->fim = novo;

	} else { // Aqui, a lista não está vazia!
		novo->proximo = lista->inicio;
		lista->inicio = novo;
	}

	lista->tamanho++;
}

// Imprimir o tamanho da lista
void imprimirListaInverso(Lista *lista) {
	No *inicio = lista->inicio;

	// imprimindo os valores da 1° lista
	while(inicio != NULL) {
		printf("%d ", inicio->valor);
		inicio = inicio->proximo;
	}
}

int main() {
	Lista lista; // Criando uma lista
	int valor;

	// Inicializando as listas
	lista.inicio = NULL;
	lista.fim = NULL;
	lista.tamanho = 0;

	while(valor != -1) {
		scanf("%d", &valor); // Receber os valores
		if (valor != -1) inserirNaLista(&lista, valor); // Inserir na lista
	}

	if (valor == -1) imprimirListaInverso(&lista); // Imprimir resultados

	return 0;
}
