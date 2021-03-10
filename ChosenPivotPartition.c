#include <stdio.h>
#include <stdlib.h>

int main(){
	/* n - a quantidade de elementos
	 * pivo - o índice do pivô
	 */
  int n = 0, pivo = 0;

	/* Recebendo os dois primeiros valores,
	 * n -a quantidade de elementos
	 * pivo - índice do pivô
	 */
  scanf("%d %d", &n, &pivo);

  int *vector;
  vector = (int *) malloc(n*sizeof(int));

	// Recebendo os valores do vetor
  for(int i = 0; i < n; i++)
  scanf("%d", &vector[i]);

  int menor = 0, maior = 0;
  for(int i = 0; i < n; i++){
    if(vector[i] < vector[pivo]) menor++;
    else maior++;
  }

  int *vetRearranjada1, *vetRearranjada2;
  vetRearranjada1 = (int *) malloc(menor*sizeof(int));
  vetRearranjada2 = (int *) malloc(maior*sizeof(int));

  (int *) malloc(n*sizeof(int));
  // Adicionando os elementos menores o pivô
  for(int i = 0, j = 0; i < n; i++)
    if(vector[i] < vector[pivo]) vetRearranjada1[j++] = vector[i];

	// Recebendo o pivô do vetor
  vetRearranjada2[0] = vector[pivo];

	// Adicionando os elementos maiores do que o pivô
  for(int i = 0, j = 1; i < n; i++)
    if(vector[i] > vector[pivo])
      vetRearranjada2[j++] = vector[i];

	// Mostre a lista reajustada
  for(int i = 0; i < menor; i++)
		printf("%d ", vetRearranjada1[i]);

	// Mostre a lista reajustada
  for(int i = 0; i < maior; i++){
    if(i < maior-1) printf("%d ", vetRearranjada2[i]);
    else printf("%d", vetRearranjada2[i]);
  }

	// Limpando os vetores da memoria
  free(vector);
  free(vetRearranjada1);
  free(vetRearranjada2);
}
