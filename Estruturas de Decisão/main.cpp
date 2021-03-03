#include <iostream>

using namespace std;

// comparando valores

int main() {

	char first {};
	char second {};

	cout << "Enter a character: ";
	// cin pega o input do usuário e armazena na variável first
	// stream de input
	cin >> first;

	cout << "Enter a second character: ";
	cin >> second;

	cout << "The value of the expression " << first << " < " << second
		<< " is " << (first < second) << endl;

	cout << "The value of the expression " << first << " == " << second
		<< " is " << (first == second) << endl;
}