#include <iostream>
#define count 20

	using namespace std;

		int main(int argc, char* argv[]){

			int vet[20];
			int menor;
			int posicao;

				for (int i = 0; i < count; ++i)
				{
					std::cin >> vet[i];
				}

				for (int i = 0; i < count; ++i)
				{
					std::cout << vet[i] << " ";
				} 

				std::cout << "\n";

				for (int i = 19; i >= 0; --i)
				{
					std::cout << vet[i] << " ";
				}


			return EXIT_SUCCESS;
		}
