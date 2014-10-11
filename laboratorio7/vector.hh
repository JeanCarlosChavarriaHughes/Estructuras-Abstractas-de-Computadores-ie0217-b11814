#include <iostream>
#include <cmath>

using namespace std;

template <typename T, int N>

class vector{

public:
	T data[N]; //aqui defino un nuevo elemento tipo T

	//vector(const T contenido);
	vector(const T contenido[]);
	~vector();

	vector suma(vector &V1, vector &V2);
	vector resta(vector &V1, vector &V2);
	double norma(vector &V1);
};
