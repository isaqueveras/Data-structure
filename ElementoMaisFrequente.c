#include <stdio.h>

int main() {
	int key, j, n, count=0, temp, maior;
	scanf("%d", &n);
	
	int array[n];
	
	for (int i = 0; i < n; i++)
		scanf("%d", &array[i]);
	
	// Ordena os numeros em sequencia
	for (int i = 1; i < n; i++) {
		key = array[i];
		j = i-1;
		
		while (j >= 0 && array[j] > key) {
			array[j+1] = array[j];
			j = j-1;
		}
		
		array[j+1] = key;
	}
	
	for (int i = 0; i < n; i++) {
		count = 0;
		
		for (int p = 0; p < n; p++)
			if (array[i] == array[p])
				count++;
		
		if (count >= temp) {
			temp = count;
			maior = array[i];
		}
	}
	
	printf("%d", maior);		
}
