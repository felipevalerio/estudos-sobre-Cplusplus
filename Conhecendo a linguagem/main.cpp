// import <iostream> ainda não incluído no MSV 2019
// uma feature do C++ 20

// iostream fornece as funções de input do teclado
// e output para mostrar texto na tela
#include <iostream>

int main() {

	// int answer = 42;
	int answer {42};    // define uma variável do tipo int com valor já definido

	// input e output no C++ são feitos com o streams
	// stream é uma representação abstrata de uma fonte de dados

	// cout output streams
	// cin input streams
	// << transfere dados para uma stream


	// A inserção de 'endl' em std::cout faz com que uma nova linha 
	// seja gravada no fluxo e o buffer de saída seja liberado.


	std::cout << "The answer to life, the universe, and everything is "
			<< answer
			<< std::endl;

	return 0;
}