#include <compare>
#include <format>
#include <iostream>

/*
	operador spaceship surgiu no C++ 20, e de certa forma
	é a junção do <, == e > em um só operador.

	Assim a expressão a <=> b, engloba as seguintes operações:
	a é menor (<), igual (==) ou maior(>) que b.
*/
int main() {

	int value;

	std::cout << "Please enter a number: ";
	std::cin >> value;

	// inicializando ordering com a expressão, se o valor
	// que o usuário digitar é menor, maior ou igual a 0.
	std::strong_ordering ordering{ value <=> 0 };

	// printando e fazendo as comparações.
	std::cout << std::format("value < 0: {}\n", ordering == std::strong_ordering::less);
	std::cout << std::format("value > 0: {}\n", ordering == std::strong_ordering::greater);
	std::cout << std::format("value == 0: {}\n", ordering == std::strong_ordering::equal);
}