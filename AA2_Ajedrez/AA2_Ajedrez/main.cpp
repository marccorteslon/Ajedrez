#include <iostream>
#include <windows.h>
#include <vector>
#include "Tablero.h"
#include "Tablero.cpp"


int main() {

	std::vector<std::vector<char>>tablero(8, std::vector<char>(8, '*'));
	tableroajedrez(tablero);
	mostrartablero(tablero);
	return 0;

}