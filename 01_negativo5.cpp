#include <iostream>
#define count 5
using namespace std;
	
	int main(int argc, char* argv[]){
		auto number ( 0 ); // Recebe o número
		auto counter ( 0 ); // Contador para armazenar a quantidade de negativos
		int i;

		std::cout << ">>>Digite 5 números: ";

		for (i = 0; i < count; ++i)
		{
			std:: cin >> number;

			if(number < 0) 
				counter ++;
		}

		std::cout << ">>>A Quantidade de números negativos foram " << counter << " de um total de " << count << " números digitados.";

		
		return EXIT_SUCCESS;
	}
