#include <iostream>
	
	using namespace std;
		// test
		int main(){

			int n, contador = 1, max = 0, min = 0, guardai = 0;

			int matriz [10][10];

				for (int i = 0; i < 10; ++i)
				{
					for (int j = 0; j < 10; ++j)
					{
						matriz[i][j] = contador;
						contador ++;
					}
					
				}

				for (int i = 0; i < 10; ++i)
				{
					for (int j = 0; j < 10; ++j)
					{
						std::cout << matriz[i][j] << " ";
					}
						std::cout << endl;
				}
				
				max = matriz[0][0];

				for (int i = 0; i < 10; ++i)
				{
					for (int j = 0; j < 10; ++j)
					{
						if (matriz[i][j] > max)
						{
							max = matriz[i][j];
							guardai = i;
						}
					}

				}

				min = matriz [guardai][0];

				for (int i = 0; i < 10; ++i)
				{
					if (matriz[guardai][i] < min)
						{
							min = matriz[guardai][i];
						}	
				}
				std::cout << ">>> O menor elemento está na linha " << guardai << " onde está o maior elemento, "<< max << ",é: " << min;

			return EXIT_SUCCESS;
		}
