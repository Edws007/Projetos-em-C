//Aula sobre vari�veis
#include <stdio.h>

int main(){//A chave delimita um bloco de c�digo (in�cio do bloco)
	//Declarando vari�veis
	int idade; //inteiro

	//declarando e inicializando vari�veis
	//int idade = 0;

	//Fun��o para escrever algo na sa�da padr�o
	printf("Qual � a sua idade?");//o ponto e virgula finaliza um comando

	fflush(stdout);

	//Receber dados
	scanf("%d", &idade);

	//Sa�da
	printf("A sua idade � %d", idade);

	return 0;
}//Fim do bloco
