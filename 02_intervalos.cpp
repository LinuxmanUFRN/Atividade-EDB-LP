#include <iostream>
	
	using namespace std;

	int main(int argc, char* argv[]){

		auto number( 0 );
		auto cont  ( 0u );
		auto cont1 ( 0u );
		auto cont2 ( 0u );
		auto cont3 ( 0u );
		auto cont4 ( 0u );
			
			std::cout << "Entre com valores inteiros (Ctrl+d p/ encerrar): " << endl;
			
			while(cin >> number){
				
				if (number >=0 && number < 25) cont1++;
				if (number >=25 && number < 50) cont2++;
				if (number >=50 && number < 75) cont3++;				
				if (number >=75 && number <= 100) cont4++;
					cont++;
			}

		std::cout << static_cast<float> (cont1)/cont * 100 << "/100" << " no intervalo [0, 25)" << endl;
		std::cout << static_cast<float> (cont2)/cont * 100 << "/100" << " no intervalo [25, 50)" << endl;
		std::cout << static_cast<float> (cont3)/cont * 100 << "/100" << " no intervalo [50, 75)" << endl;
		std::cout << static_cast<float> (cont4)/cont * 100 << "/100" << " no intervalo [75, 100]" << endl;

		return EXIT_SUCCESS;
	}
