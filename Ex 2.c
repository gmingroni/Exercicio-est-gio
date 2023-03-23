#include <stdio.h>

void Verificar_Fibonacci(int x, int *primeiro_elemento, int *segundo_elemento, int *elemento_auxiliar){
	*elemento_auxiliar = *primeiro_elemento + *segundo_elemento;
	if(x>*elemento_auxiliar){
	*primeiro_elemento = *segundo_elemento;
	*segundo_elemento = *elemento_auxiliar;
	Verificar_Fibonacci(x, primeiro_elemento, segundo_elemento, elemento_auxiliar);	
	}
	else if(x==*elemento_auxiliar)
	printf("%i pertence a sequencia de fibonacci\n", x);
	else if(x<*elemento_auxiliar)
	printf("%i nao pertence a sequencia de fibonacci\n", x);
}

int main(){
	int x, primeiro_elemento, segundo_elemento, elemento_auxiliar;
	primeiro_elemento = 0, segundo_elemento = 1;
	printf("Escolha o número que quer que seja verificado se pertence ou não ao fibonacci: ");
	scanf("%i", &x);
	Verificar_Fibonacci(x, &primeiro_elemento, &segundo_elemento, &elemento_auxiliar);
}
