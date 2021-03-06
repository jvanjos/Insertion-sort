// ConsoleApplication2.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

std::ifstream arquivo;
std::vector<int> vetor;


int main() {
	std::string arquivoname;
	std::cout << "Insection sort:" << std::endl << "Digite o nome do arquivo(ex. exemplo.txt):";
	std::cin >> arquivoname;
	arquivo.open(arquivoname.data());
	if (!arquivo.is_open()) {
		system("pause");
		return -1;
	}
	int i, j, aux, min;
	std::string stringer;
	while (!arquivo.eof()) {
		std::getline(arquivo, stringer);
		int num = std::stoi(stringer);
		vetor.push_back(num);
	}
	for (i = 0; i < vetor.size(); i++) {
		min = vetor[i];
		j = i;
		while (j > 0 and vetor[j - 1] > min) {
			vetor[j] = vetor[j - 1];
			j = j - 1;
		}
		vetor[j] = min;
	}
	for (i = 0; i < vetor.size(); i++) {
		std::cout << vetor[i] << " " << std::endl;
	}
	system("pause");
	return 0;
}