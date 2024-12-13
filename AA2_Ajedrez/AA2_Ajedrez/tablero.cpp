#include <iostream>
#include <windows.h>
#include "Tablero.h"
#include <vector>


void tableroajedrez(std::vector<std::vector<char>>& tablero) {

	tablero[0] = { 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r' };

	tablero[1] = { 'p','p','p','p','p','p','p','p' };

	for (int i = 2; i < 6; ++i) {
		tablero[i] = { '*','*','*','*','*','*','*','*' };

	}

	tablero[6] = { 'P','P','P','P','P','P','P','P' };
	tablero[7] = { 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R' };

}

void mostrartablero(std::vector<std::vector<char>>& tablero) {

	std::cout << " a b c d e f g h" << std::endl;

	for (int i = 0; i < 8; ++i) {
		std::cout << 8 - i << " ";

		for (int j = 0; j < 8; ++j) {
			std::cout << tablero[i][j] << " ";

		}
		std::cout << "a b c d e f g h" << std::endl;
	}

}