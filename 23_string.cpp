#include <iostream>
#include <new>
#include <string>
#include <vector>

using std::bad_alloc;
using namespace std;

	
   char *prefix ( const char * str, int n );


	int main(){

			char *str =  new char[sizeof(char) * 10];

			gets(str);

			int n;

			std::cout << "Informe o valor de 'n': ";
			std::cin >> n;

	 		std::cout << ">>> " << prefix(str, n) << endl;

		return EXIT_SUCCESS;
	}


   char *prefix ( const char * str, int n ){

   		char *newstring = new char[n];
   		char *sss = new char[strlen(str)];

   		if (n < strlen(str))
   		{
		   	
		   		for (int i = 0; i < n; ++i)
		   		{
		   		 	newstring[i] = str[i];
		   		}  
		   			return newstring;		
   		}else{

		   		for (int i = 0; i < strlen(str); ++i)
		   		{
		   		 	sss[i] = str[i];
		   		}  
		   			return sss;
			}
  	}
