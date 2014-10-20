//Author: Jean Carlos Chavarria Hughes

#include <stdio.h>
#include <list>
#include <cstring>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

int findLastOf(list<string> &L, string comp){
	//Esta funcion se encarga de devolver la posicion de cada string
	//, de lo contrario un -1
	list<string>::iterator it;
	int indice = -1;
	it = L.begin();
	for(unsigned int i = 0; i < L.size() ; i++, it++){
			if (*it == comp){indice = i+1;}
		}
	return indice;
}

//Encuentra palabras duplicadas
void duplicate(list<string> &L){
	list<string>::iterator it1;
	list<string>::iterator it2;
	
	cout<<"Complete list (size: "<<L.size()<<"):"<<"\n \"";
    it1 = L.begin();
    for(unsigned int i = 0; i < L.size() ; i++, it1++){cout<<*it1<<" ";}
	cout<<"\""<<endl;
	it1 = L.begin();
	for(unsigned int i = 0; i < L.size()-1 ; i++, it1++)
	{
		it2 = L.end();
		for(unsigned int j = i; j < L.size() ; j++, it2--)
		{
			if(*it1 == *it2)
			{
				L.erase(it2);
				it1 = L.begin();
				i=0;
			}
			
		}
	}
	L.unique();
	cout<<"List without duplicated words(size: "<<L.size()<<"):"<<"\n \"";
    it1 = L.begin();
    for(unsigned int i = 0; i < L.size() ; i++, it1++){cout<<*it1<<" ";}
	cout<<"\""<<endl;	
}

//Caso de comparacion
bool compare_nocase (const std::string& first, const std::string& second)
{
  unsigned int i=0;
  while ( (i<first.length()) && (i<second.length()) )
  {
    if (tolower(first[i])<tolower(second[i])) return true;
    else if (tolower(first[i])>tolower(second[i])) return false;
    ++i;
  }
  return ( first.length() < second.length() );
}

void sorting(list<string> &L){
	list<string>::iterator it1;
	L.sort(compare_nocase);
	cout<<"Sorted words list (size: "<<L.size()<<"):"<<"\n \"";
	it1 = L.begin();
    for(unsigned int i = 0; i < L.size() ; i++, it1++){cout<<*it1<<" ";}
	cout<<"\""<<endl;
	}

//Este es el main.
int main()
{
	list<string> List;
	list<string>::iterator it;
    string filename = "text.txt";
	ifstream file(filename.c_str());
	if(!file)
	{
		cout << "Error, the file cannot be opened: " << filename << endl;
                return 1;
	}
	string linea, archivo;
	while(getline(file, linea)){
		archivo += linea + "\n";
	}
	string buf; // Have a buffer string
    stringstream ss(archivo); // Insert the string into a stream
	while (ss >> buf){
        List.push_back(buf);
    }
    cout<<"********* findLastOf() *********"<<endl;
    //Testing the function findeLastOf();
    string comparar;
    cout<<"Write the word to find: ";
    cin>> comparar;
    int index = findLastOf(List, comparar); 
    if(index== -1){cout<<"The word is not here."<<endl;}
	else{cout<<"The last posicion of the word is "<<index<<endl;}
    
    //Testing the function duplicate();
    cout<<"\n********* duplicate() *********"<<endl;
    duplicate(List);
    //Testing the function sorting();
    cout<<"\n********* sorting() *********"<<endl;
    sorting(List);
    return 0;
    
}
	
