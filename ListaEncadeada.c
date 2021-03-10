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
void inserirNoInicio(Lista *lista, int valor) {
	No *novo = (No*)malloc(sizeof(No)); // Cria um novo Nó
	novo->valor = valor; // O novo nó recebe um valor

	if (lista->inicio == NULL) { // Aqui, a lista está vazia!
		novo->proximo = NULL;
		lista->inicio = novo;
		lista->fim = novo;

	} else { // Aqui, a lista não está vazia!
		novo->proximo= lista->inicio;
		lista->inicio = novo;
	}
    
	lista->tamanho++;
}

// Imprimir o tamanho da lista
void imprimirTamanhoDaLista(Lista *lista) {
	printf("%d\n", lista->tamanho - 1);
}

int main() {
	Lista lista; // Criando uma lista
	int valor;

	// Inicializando as listas
	lista.inicio = NULL;
	lista.fim = NULL;
	lista.tamanho = 0;

	while(valor != -1) {
		scanf("%d", &valor);
		inserirNoInicio(&lista, valor);
	}

	// Se o valor for '-1', mostre o  tamanho da lista
	if (valor == -1)
	  imprimirTamanhoDaLista(&lista);

	return 0;
}
