#include <stdio.h>

int main() {
	int key, j, k, n;
	
	// Recebe os dois valores
	scanf("%d %d", &k, &n);
	
	int array[n];
	for (int y = 0; y < n; y++)
		scanf("%d", &array[y]);
	
	// Ordena os numeros em sequencia
	for (int i=1; i < n; i++) {
		key = array[i];
		j = i-1;
		
		while (j >= 0 && array[j] > key) {
			array[j+1] = array[j];
			j = j-1;
		}
		
		array[j+1] = key;
	}
	
	printf("%d", array[k-1]);
}
