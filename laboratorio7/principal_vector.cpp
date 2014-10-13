//Author: Jean carlos Chavarria Hughes

#include "vector.cpp"

int main(void){
	int x[] = {9,3,1};
	int y[] = {1,3,6};
	vector<int,3> V1(x);                                     
	vector<int,3> V2(y);
	vector<int,3> V3(y);
	vector<int,3> V4(y);
	//V3=V3.suma(&V1,&V2);
	//V4=V4.resta(&V1,&V2);
	//double norma_V2 = V2.norma(&V2);
	cout << "V3 = V1 + V2: "<<endl;
	V3.suma(V1,V2); //Se estan sumando dos vectores
	cout << "V4 = V1 - V2: "<<endl;
	V4.resta(V1,V2); //Se estan restando dos vectores
	double norma_V4 = (double)V4.norma();//Se obtiene la norma de V4
	cout << "|V4| es: "<< norma_V4 << endl;
    return 0;
}