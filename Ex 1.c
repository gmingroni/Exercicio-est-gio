#include <stdio.h>

int main(){
	int INDICE = 13, SOMA = 0, K = 0; 

	for(K=0;K<INDICE;K++){ // ou fazer isso ou retirar o �ltimo termo do for e somar 1 unidade a k dentro do for
		SOMA = SOMA + K;
	}
	printf("%i\n", SOMA); // exibir� o resultado 78
}

// pode se fazer por fun��o retornando o valor de soma no int main tamb�m
