#include <iostream>

int main() {

	int apple_count {15};
	int orange_count {5};
	int total {apple_count + orange_count};

	// iniciando uma variável com valor 0
	// int valor {0}; ou int valor {};


	// variável com valor fixo e imutável (constantes)
	// int foi omitido pois o valor já indicado o tipo de variável
	const unsigned count {10};


	// o valor dos int são convertidos para um char
	// automaticamente com a adição do operador de inserção <<
	std::cout << "O valor de apple_count " << apple_count << std::endl;
	std::cout << "O valor de orange_count " << orange_count << std::endl;
	std::cout << "O valor total " << total << std::endl;

	return 0;
}


/*
	Nome				Tamanho(Bytes)

	signed char			1

	short				2
	short int
	signed short
	signed shot int

	int					4
	signed
	signed int

	long				4 ou 8
	long int
	signed long
	signed long int

	long long			8
	long long int
	signed long int
	signed long long int
	

	Há também unsigned para indicar que 
	não se espera um valor negativo

	Como o número de estudantes em uma sala de aula
	O total é um int, que pode ser representado como
	unsigned int, pois o total de estudantes nunca será negativo
*/