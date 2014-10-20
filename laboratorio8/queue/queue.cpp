//Author: Jean Carlos Chavarria Hughes

#include <iostream>
#include <queue>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

void radixSort(int q[], int n) {
	
    queue<int> bins[10]; //un arreglo para digitos posibles
    int maxDigito=3; //mantiene la cantidad de digitos
    int DigitoActual=0; //base de arranque para digito decimal
    while (DigitoActual < maxDigito) {
        for(int i=0; i<n; i++){ //ciclo atraves del arreglo completo
            int divisor=pow(10,DigitoActual);
            int num = q[i]; //ajustar el valor actual
            int digitValue = static_cast<int>((num/divisor)%10); //conseguir es digito actual
            bins[digitValue].push(num);
        }
        int i=0;
        for(int k=0;k<10;k++){ //ciclo sobre todos los posibles bins
            while (!bins[k].empty()){
                int temp=bins[k].front();
                q[i]=temp;
                bins[k].pop();
                i++;
            }
        }
        DigitoActual++;
    }
}

int main() {
	
	queue<int> data_q;
	bool i = true;
	string line;
	int numero;
	
	cout << "digite los numeros que quiere ordenar y escriba 'fin' al lado del ultimo elemento para finalizar" << endl;
	while (i){
		
		cin >> numero;
		if (numero == 0){
			
			i = false;
		}
		else{
			data_q.push(numero);
			cout << "Se agrego un " << numero << endl;
		}
	}
	
	cout << "La cola tiene " << data_q.size() << " elementos" << endl;
  ;
	int radix[data_q.size()];
	int size = data_q.size();
	int seed =time(0);
	srand(seed);
	for (int i=0;i<size;i++){
		radix[i] = data_q.front();
		data_q.pop();
	}
	for (int j=0;j<size;j++)
		cout << radix[j] << " ";
		cout << endl << endl;
		radixSort(radix, size);
	for (int j=0;j<size;j++)
		cout << radix[j] << " ";
	cout << endl <<endl;
	return 0;
}


