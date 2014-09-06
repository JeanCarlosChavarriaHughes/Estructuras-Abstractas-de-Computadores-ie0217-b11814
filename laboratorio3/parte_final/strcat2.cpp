//Example concatenates two strings to output
//By asking the user for input
#include <cstring>
#include <iostream>

using namespace std;

char strcat2(const char *destination, const char *source)
{
     unsigned destination_length = strlen(destination),
     combined_length = destination_length + strlen(source);
     char *combined_string = new char[combined_length + 1];

     cout<<"logitud de combined_length: ";
     cout<<combined_length<<'\n'<<endl;

     for (unsigned i = 0; i < combined_length; i++)
     {
          if (i < destination_length)
               *(combined_string + i) = *(destination +i);
          else
               *(combined_string + i) = *(source + i - destination_length);
     }
     *(combined_string + combined_length) = '\0';

    	cout << combined_string<<endl;
    
     return *combined_string;
}

char constructor(char *destination,char *source, char (*calc_string)(const char*, const char*)){
	return(calc_string(destination,source));
}

int main(void)
{
    char *s1 = new char[30];
    char *s2 = nwe char[30];
    cout<<"Ingrese el string uno(sin espacios):";
    cin>>s1;
    cout<<"Ingrese el string dos(sin espacios):";
    cin>>s2;
    cout<<"HOLA"<<endl;
    cout<<constructor(s1, s2, strcat2);
    return 0;
}
