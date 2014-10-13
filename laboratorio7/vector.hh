//Author: Jean carlos Chavarria Hughes
#include <iostream>
#include <cmath>

using namespace std;

template <typename T, int N>

class vector{

public:
	//T data[N]; //aqui defino un nuevo elemento tipo T
	T *data; //debe ser un puntero en lugar de una referencia

	//vector(const T contenido);
	vector(const T contenido[]);
	~vector();

	void suma(vector &V1, vector &V2);
	void resta(vector &V1, vector &V2);
	double norma();
};
