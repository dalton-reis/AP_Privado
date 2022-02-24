#include <stdio.h>
#include <stdlib.h>

/*
- Ler 2 inteiros n e p
- Calcular o fatorial deles: n! e p!
- Calcular o arranjo: A(n,p)
- Calcular a combinação: C(n,p)
*/

float fatorial(int val) {
    float res;
    int cont;
      
    res = 1;
    for (cont = 2; cont <= val; cont = cont + 1)     {
        res = res * cont;
    }
      
    return res;
}

float arranjo(int n, int p) {
    float res;
    
    res = fatorial(n) / fatorial(n - p);
    
    return res;
}

float combinacao(int n, int p) {
    float res;
    
    res = fatorial(n) / (fatorial(p) * fatorial(n - p));
    
    return res;
}

int main(int argc, char *argv[]) {
    int n, p;
    float result;
    
   	printf("Analise Combinatoria\n");
   	printf("Entre com os valores de n e p: ");
	scanf("%i %i", &n, &p);

	result = fatorial(n);
	printf("%i! vale %.0f\n", n, result);
	result = fatorial(p);
	printf("%i! vale %.0f\n", p, result);

	result = arranjo(n, p);
	printf("A(%i,%i) vale %.0f\n", n, p, result);
  
	result = combinacao(n, p);
	printf("C(%i,%i) vale %.0f\n", n, p, result);

	return 0;
}
