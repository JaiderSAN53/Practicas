#include <stdio.h> 
int factorial(int numero);

int main() { 
    int numero; 
    printf("Ingrese un numero para calcular su factorial: ");
    scanf("%d", &numero);
    printf("El factorial de numero  %d\n", factorial(numero));
}    


int factorial(int numero) { 
  if (numero == 0)  // caso base 
return 1; 
  else 
return numero * factorial(numero - 1); // caso recursivo 
}  