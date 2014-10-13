//Author: Jean carlos Chavarria Hughes
#include "vector.hh"


template <typename T,int N>
vector<T,N>::vector(const T contenido[]){
	//este es el constructor
	//N es la longitud del vector
	//T es el contenido del vector
	
	//T ptr_data_original[] = new T[N];
	
	this->data = new T[N];

	for (int i = 0; i < N; ++i)
	{
		this->data[i]=contenido[i];
	}
}

template <typename T,int N>
vector<T,N>::~vector(){
	//este es el destructor
	
	delete this->data;
	//cout << "Se ejecutó el destructor" << endl;
}

template <typename T,int N>
void vector<T,N>::suma(vector& V1, vector& V2){
	//esta es la funcion que suma vectores
	cout << "[ ";
	for (int i = 0; i < N; ++i)
	{
		this->data[i]=V1.data[i]+V2.data[i];
		cout << this->data[i] << " ";
		
	}
	cout << "]"<< endl;
}

template <typename T,int N>
void vector<T,N>::resta(vector &V1, vector &V2){
	//esta es la funcion que suma vectores
	cout << "[ ";
	for (int i = 0; i < N; ++i)
	{
		this->data[i]=V1.data[i]-V2.data[i];
		cout << this->data[i] << " ";
		
	}
	cout << "]"<< endl;
}

template <typename T,int N>
double vector<T,N>::norma(){
	//esta es la funcio que obtiene la norma de V1
	T Vnorma = 0;
	for (int i = 0; i < N; ++i)
	{
		Vnorma=(this->data[i])*(this->data[i])+Vnorma;
	}
	return sqrt(Vnorma);
}
