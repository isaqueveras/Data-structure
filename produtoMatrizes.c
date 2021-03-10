#include <stdio.h>
#include <stdlib.h>

int main() {
	// Inicializa as variaveis
	int n, i, j, x;
	
	// Recebe o valor de N
	scanf("%d", &n);
	
	// Inicializa as matrizes
	int **matrizA;
	int **matrizB;
	int **matrizC;
	
	// Alocando memorias nas matrizes
	matrizA = (int **) malloc(sizeof(int *) *n);
	matrizB = (int **) malloc(sizeof(int *) *n);
	matrizC = (int **) malloc(sizeof(int *) *n);
	
	for (i = 0; i < n; i++) {
		matrizA[i] = (int *) malloc(sizeof(int *)*n);
		matrizB[i] = (int *) malloc(sizeof(int *)*n);
		matrizC[i] = (int *) malloc(sizeof(int *)*n);
	}
	
	// Percorre os valores da matriz A
	for (i = 0; i < n; i++) {	
		for (j = 0; j < n; j++) {
			scanf("%d", &matrizA[i][j]);
		}	
	}
	
	// Percorre os valores da matriz B
	for (int i = 0; i < n; i++) {	
		for (int j = 0; j < n; j++) {
			scanf("%d", &matrizB[i][j]);
		}	
	}
	
	for (int i = 0; i < n; i++) {	
		for (int j = 0; j < n; j++) {
			matrizC[i][j] = 0;
			for (x = 0; x < n; x++)
				matrizC[i][j] = matrizC[i][j] + matrizA[i][x] * matrizB[x][j];
			
			printf("%d ", matrizC[i][j]);
		}
		putchar('\n');
	}
	
	// Liberar memoria (Deslocar a memória)
	for (i = 0; i < n; i++) {
		free(matrizA[i]);
		free(matrizB[i]);
		free(matrizC[i]);
	}
	
	free(matrizA);
	free(matrizB);
	free(matrizC);
	
	return 0;
}