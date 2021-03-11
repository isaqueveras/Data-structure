#include <stdio.h>
#include <string.h>

void insertionSort(char array[], int n) {
	int key, j;

	for (int i=1; i < n; i++) {
		key = array[i];
		j = i-1;

		while (j >= 0 && array[j] > key) {
			array[j+1] = array[j];
			j = j-1;
		}

		array[j+1] = key;
	}
}

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	
	char word_original[n];
	scanf("%s", word_original);
	insertionSort(word_original, n);
	
	m = m-1;
	
	char encrypted_word[n];
	
	for (int i = 1; i <= m; i++) {
		scanf("%s", encrypted_word);
		insertionSort(encrypted_word, n);
		
		if (strcmp(encrypted_word, word_original) == 0) printf("sim\n");
		else printf("nao\n");
	}
	
}
