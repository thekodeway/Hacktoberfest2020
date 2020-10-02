#include <stdio.h> 
int factorial(int num) {
  if(num == 0) {
    return 1; }
  return num * factorial(num-1);
}
int main() { 
  int num, result;
  printf("Insert the number: ");
  scanf("%d", &num);
  printf("Result = %d", factorial(num));
	return 0; 
}
