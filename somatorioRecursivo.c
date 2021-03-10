#include <stdio.h>

int summation(int n) {
  if (n != 0) return n + summation(n - 1);
  else return 0;
}    

int main() {
  int number;
  
  scanf("%d", &number);
  printf("%d", summation(number));
  
  return 0;
}