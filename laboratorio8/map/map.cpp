//Author: Jean Carlos Chavarria Hughes

#include <string>
#include <map>
#include <iostream>
#include <stack>

using namespace std;

typedef map<string, int> MiMapa;
typedef map<int, string> MiTitulo ;
		
void maping(){
	 string theCarne;
	 MiMapa carne;
	  
	 carne["B11814"] = 1;
	 carne["B13967"] = 1;
	 carne["B18991"] = 2;
	 carne["A43210"] = 2;
	 carne["B11848"] = 3;
	 carne["A90288"] = 3;
	 carne["A10988"] = 4;
	 carne["B10923"] = 4;
	 
	 MiMapa::iterator i;
	 
	 MiTitulo name;
	 name[1] = "\"Proyecto tuanis\"; Integrantes:{Blanco, Black, Lepi}";
	 name[2] = "\"Motion Capture\"; Integrantes:{Makefile, Transistor, Mae random}";
	 name[3] = "\"Proyecto mediotonton\"; Integrantes:{mechon, ratica, Guápiles}";
	 name[4] = "\"NAOS\"; Integrantes:{Sólo llevo Cálculo 2, Mae Aleatorio #2, Otro Mae Aleatorio}";
	 
	 for( ; ; ){ 
		 bool notFind = true;
		 cout << "Presione \"q\" para salir o digite el número de carné: ";
         cin >> theCarne;
         if(theCarne == "q")
			break;
		 for (i = carne.begin(); i != carne.end(); i++) {
			if(((*i).first) == theCarne){
				cout<<name[((*i).second)];
				notFind = false;
				}
			}
		 if(notFind == true){cout<<"Carné Inválido";}
		 cout<<endl;
		}
	}

int main(void){
	maping();
}
