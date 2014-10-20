//Author: Jean Carlos Chavarria Hughes

#include <iostream>
#include <stack>

using namespace std;

void multiBase(int N, int b){
	bool i = true;
	std::stack<int> result;
	int dividendo = N;
	int division;
	
	cout<< "Procedimiento:" << endl;
	while(i == true){
		division = dividendo/b;
		cout << dividendo <<"/"<<b << " = " << division << " (%" << (dividendo-(division*b)) << ")" << endl;
		if(division != 0){
			result.push((dividendo-(division*b)));
			dividendo = division;
		}
		else{
			result.push((dividendo-(division*b)));
			i = false;
		}
	}
	cout << "El número " << N << " en base " << b << " es: ";
	while(!result.empty()){
		cout << result.top();
		result.pop();
	}
	cout << " " <<endl;
	
}





//Sección de código para ejecutar la función multiBase
int main(void){
	int N, b;
	cout << "Digite el número: ";
	cin >> N;
	cout <<  "Digite la base: ";
	cin >> b;
	multiBase(N, b);
}
