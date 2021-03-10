#include <stdio.h>
#include <stdlib.h>

int menor(int v[], int tam) {
	int menor = v[0];

	for (int i = 1; i < tam; i++) {
		if (v[i] < menor)
			menor = v[i];
	}
	
  return menor;
}

int maior(int v1[], int tam1) {
	int maior = v1[0];
	
  for (int i = 0; i < tam1; i++) {
		if (v1[i] > maior)
			maior = v1[i];
	}
	
  return maior;
}

int main() {
	int n;
	
	scanf("%d", &n);
	int* V = (int *) malloc(n * sizeof(int));
	
	for (int i = 0; i < n; i++) {
	  scanf("%d", &V[i]);
	}
	
	printf("%d %d", menor(V, n), maior(V, n));
	return 0;
}
