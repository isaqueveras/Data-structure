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

// Inserir no fim da lista
void inserirNoFim(Lista *lista, int valor) {
	No *novo = (No*)malloc(sizeof(No)); // Criando um novo Nó
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

void removerNumerosRepetidosDaLista(Lista *lista, int valor) {
	No *inicio = lista->inicio; // Ponteiro para o inicio da lista
	No *NoASerRemovido = NULL; // Ponteiro para o nó à ser removido

	if (inicio != NULL && lista->inicio->valor == valor) { // Remover o 1° elemento
		NoASerRemovido = lista->inicio;
		lista->inicio = NoASerRemovido->proximo;

		if(lista->inicio == NULL)
			lista->fim = NULL;

	} else { // Aqui, será removido no meio ou no final da lista
		while(
			inicio != NULL &&
			inicio->proximo != NULL &&
			inicio->proximo->valor != valor
		) {
			inicio = inicio->proximo;
		}

		if(inicio != NULL && inicio->proximo != NULL) {
			NoASerRemovido = inicio->proximo;
			inicio->proximo = NoASerRemovido->proximo;

			if(inicio->proximo == NULL)
				lista->fim = inicio; // se o último elemento for removido
		}
	}

	if(NoASerRemovido) {
		free(NoASerRemovido); // Libera a memória do nó
		lista->tamanho--; // Decrementa o tamanho da lista
	}
}

// Imprimir os valores da lista
void imprimirValoresDaLista(Lista *lista) {
	No *inicio = lista->inicio;

	// Mostre 'vazia' quando o tamanho da lista for 0
	if (lista->tamanho == 0) printf("vazia");

	// Imprimindo os valores
	while(inicio != NULL) {
		printf("%d ", inicio->valor);
		inicio = inicio->proximo;
	}
}

int main() {
	Lista lista; // Criando uma lista
	int valor, numeroParaExcluir;

	// Inicializando a lista
	lista.inicio = NULL;
	lista.fim = NULL;
	lista.tamanho = 0;

	int *vetorValores;
	vetorValores = (int *) malloc(100*sizeof(int));

	for (int a = 0; valor != -1; a++) {
		scanf("%d", &valor); // Recebendo os valores da lista

		if (valor != -1) {
			inserirNoFim(&lista, valor); // Inserindo na lista
			vetorValores[a] = valor; // Inserindo em um vetor os valores
		} else {
			 scanf("%d", &numeroParaExcluir); // Valor a qual vai ser excluido da lista
		}
	}

	for (int i = 0; i < lista.tamanho; i++) // Percorre a lista toda
		if (vetorValores[i] == numeroParaExcluir) // Verifica se os valores da lista são iguais ao numero para excluir
			removerNumerosRepetidosDaLista(&lista, numeroParaExcluir); // Remove se forem iguais

	removerNumerosRepetidosDaLista(&lista, numeroParaExcluir); // Chama a função para remover um numero repetido
	if (valor == -1) imprimirValoresDaLista(&lista); // Imprimindo a lista

	free(vetorValores); // Liberando a memória

	return 0;
}
