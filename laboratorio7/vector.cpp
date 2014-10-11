#include "vector.hh"


template <typename T,int N>
vector<T,N>::vector(const T contenido[]){
	//este es el constructor
	//N es la longitud del vector
	//T es el contenido del vector
	
	//T ptr_data_original[] = new T[N];
	
	this->*data = new T[N];

	for (int i = 0; i < N; ++i)
	{
		this->data[i]=contenido[i];
	}
}

template <typename T,int N>
vector<T,N>::~vector(){
	//este es el destructor
	//N es la longitud del vector
	//T es el contenido del vector
	
	//this->data = delete;
}

template <typename T,int N>
vector<T,N> vector<T,N>::suma(vector &V1, vector &V2){
	//esta es la funcion que suma vectores
	vector<T,N> Vsuma;
	for (int i = 0; i < N; ++i)
	{
		Vsuma.data[i]=V1.data[i]+V2.data[i];
	}
	return Vsuma;
}

template <typename T,int N>
vector<T,N> vector<T,N>::resta(vector &V1, vector &V2){
	//esta es la funcion que eresta vectores
	//esta es la funcion que suma vectores
	vector<T,N> Vresta;
	for (int i = 0; i < N; ++i)
	{
		Vresta.data[i]=V1.data[i]-V2.data[i];
	}
	return Vresta;
}

template <typename T,int N>
double vector<T,N>::norma(vector &V1){
	//esta es la funcio que obtiene la norma de V1
	//esta es la funcion que suma vectores
	vector<T,N> Vnorma;
	for (int i = 0; i < N; ++i)
	{
		Vnorma=V1[i]+Vnorma;
	}
	return sqrt(Vnorma);
}
