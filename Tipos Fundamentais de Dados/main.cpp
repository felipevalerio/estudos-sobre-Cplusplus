#include <iostream>

int main() {

	/*

			Table da verdade Binários 
				Operadores Bitwise
	x    	y    	x & y    	x | y    	x ^ y
	0    	0    	0        	0        	0
	1    	0    	0        	1        	1
	0    	1    	0        	1        	1
	1    	1    	1        	1        	0



		Bitwise é uma técnica que consiste
		em alterar a sequência de bits de uma variável
		
		Operador & (and)
		Operador | (or)
		Operador ^ (xor)
		Operador ~ (not)
		Operador >> (right shift)
		Operador << (left shift)

	*/


	// & AND
	// O operador & compara os bits de cada variável um por um
	// quando os dois bits (um da variável "a" e outro da variável "b") 
	// são iguais a 1 (bit ligado), o retorno é 1. Caso contrário, o retorno é 0. 

	char a = 1; // 0000 0001
	char b = 5; // 0000 0101

	char c = a & b; // 0000 0001


	// | OR
	// O operador | também compara os bits de cada variável um por um, 
	// quando pelo menos um dos bits é igual a 1, o retorno é 1. 
	// Caso contrário, o retorno é 0.

	char a = 1; // 0000 0001
	char b = 5; // 0000 0101

	char c = a | b; // 0000 0101


	// ^ XOR
	// O operador ^ compara os bits de forma que, se os 2 bits 
	// (um da variável "a" e outro da variável "b") forem iguais ele, retorna 0. 
	// Caso contrário, ele retorna 1. 

	char a = 1; // 0000 0001
	char b = 5; // 0000 0101

	char c = a ^ b; // 0000 0100


	// ~ (NOT)
	// O operador ~ inverte os bits de uma variável, 
	// onde era 1 fica 0 e onde era 0, fica 1.

	char a = 1; // 0000 0001
	char b = ~a; // 1111 1110


	// << (left shift) e >> (right shift)
	// Os operadores << e >> 
	// fazem o deslocamentos dos bits para esquerda e para a direita. 
	// Preenchendo o restante com 0. 

	char a = 1; // 0000 0001
	char b = a << 2; // 0000 0100

	char c = b >> 2; // 0000 0001


	return 0;
}