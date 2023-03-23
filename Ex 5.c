#include <stdio.h>
#define max 10
void inverterstring(char frase[max]){
	int i, c;
	char aux;
	printf("frase certa %s\n", frase);
	c=strlen(frase);
	for(i=0;i<c;i++){
	if(i<c/2){ // ele irá inverter até a metade
	aux = frase[i];
	frase[i] = frase[c-i-1];
	frase[c-i-1] = aux;
		}
	}
	printf("frase invertida %s\n", frase);
}

int main(){
	char frase[max];
	printf("Digite a frase que quer inverter: ");
	gets(frase);
	inverterstring(frase);
}
