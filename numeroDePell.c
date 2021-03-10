#include <stdio.h>
#include <stdlib.h>

// Função recursiva de Pell
int pell(int n) {
	if (n == 0)
		return 0;
	
	if (n == 1)
		return 1;
	
	return 2 * pell(n-1) + pell(n-2);
}

int main() {
	int n;
	
	scanf("%d", &n);
	printf("%d", pell(n));
	
	return 0;
}
