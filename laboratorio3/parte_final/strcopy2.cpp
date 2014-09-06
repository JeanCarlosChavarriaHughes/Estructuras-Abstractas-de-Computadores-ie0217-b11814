//Example concatenates two strings to output
//By asking the user for input
#include <cstring>
#include <iostream>
#include <stdio.h>
#define SIZE 16

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


int strend2(char *s, char *t){
    while (*s++) { 
        if (*t == *s) {
            while ((*s++ == *t++) && (*t != '\0')) ;
            if (*s == '\0' && *t == '\0')
                return 1;
            return 0;
        }
    }
    return 0;
}

char strcpy2(char *destination, char *source, int i)
{
     unsigned destination_length = strlen(destination),
     combined_length = destination_length + i;
     char *combined_string = new char[combined_length + 1];

     for (unsigned j = 0; j < combined_length; j++)
     {
          if (j < destination_length)
               *(combined_string + j) = *(destination +j);
          else
               *(combined_string + j) = *(source + j - destination_length);
     }
     *(combined_string + combined_length) = '\0';
     cout << combined_string<<endl;
     return *combined_string;
}



char constructor_strcat2(char *destination,char *source, char (*calc_string)(const char*, const char*)){
	return(calc_string(destination,source));
}

int constructor_strend2(char *destination,char *source, int (*calc_strend2)(char*, char*)){
	return(calc_strend2(destination,source));
}

char constructor_strcpy2(char *destination,char *source, int i, char (*calc_strcpy2)(char*, char*, int)){
    return(calc_strcpy2(destination, source,i));
}


int main(void)
{
    char *s1 = new char[30];
    char *s2 = new char[30];
    int i = 4;
    cout<<"Ingrese el string uno(sin espacios):";
    cin>>s1;
    cout<<"Ingrese el string dos(sin espacios):";
    cin>>s2;
    cout<<"HOLA USUARIO"<<endl;
    cout<<constructor_strcat2(s1, s2, strcat2);
    cout<<"\n"<<endl;
    cout<<constructor_strend2(s1, s2, strend2);
    cout<<"\n"<<endl;
    cout<<"\n strcpy ";
    constructor_strcpy2(s1,s2,i,strcpy2);
    return 0;
}
