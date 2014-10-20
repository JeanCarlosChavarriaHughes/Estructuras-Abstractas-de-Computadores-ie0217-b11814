//Author: Jean Carlos Chavarria Hughes

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;


vector<char> join(vector<char> V1, vector<char> V2){	
	std::vector<char> V3;
	V3.reserve( V1.size() + V2.size() ); // preallocate memory
	V3.insert( V3.end(), V1.begin(), V1.end() );
	V3.insert( V3.end(), V2.begin(), V2.end() );
	return V3;
}


int main() {
//here the variables 'text_file' and 'file' and declared as a vector<char>
std::vector<char> text_file;
std::ifstream file;

//here the exceptions are declared in order to show in console common errors.
file.exceptions(
    std::ifstream::badbit
  | std::ifstream::failbit
  | std::ifstream::eofbit);

//here the file is opened.
file.open("text.txt");

//I don't know yet what 'seekg' function does.
file.seekg(0, std::ios::end);

//storing the characters in text_file.
std::streampos length(file.tellg());
if (length) {
    file.seekg(0, std::ios::beg);
    text_file.resize(static_cast<std::size_t>(length));
    file.read(&text_file.front(), static_cast<std::size_t>(length));
}
//showing words on console
cout<<"Este es el contenido del archivo text.txt \n"<<endl;
for (int i = 0; i < text_file.size(); i++)
	{
		cout << text_file[i];
	}

//inverting the chars in text_file
cout<<"\n Este es el contenido del archivo text.txt en orden inverso \n"<<endl;
std::vector<char> text_file_inverted(text_file.rbegin(), text_file.rend());;	
for (int i = 0; i < text_file.size(); i++)
	{
		cout << text_file_inverted[i];
	}	

cout<<"\n Ejecutando la funcion join() \n"<<endl;

std::vector<char> vector_joined;
vector_joined = join(text_file,text_file_inverted);	

for (int i = 0; i < vector_joined.size(); i++)
	{
		cout << vector_joined[i];
	}	

return 0;
}
