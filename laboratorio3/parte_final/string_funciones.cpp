#include <iostream>
#include <string.h>

using namespace std;

char strcat2(const char *destination, const char *source)
{
     unsigned destination_length = strlen(destination),
     combined_length = destination_length + strlen(source);
     char *combined_string = new char[combined_length + 1];

     for (unsigned i = 0; i < combined_length; i++)
     {
          if (i < destination_length)
               *(combined_string + i) = *(destination +i);
          else
               *(combined_string + i) = *(source + i - destination_length);
     }
     *(combined_string + combined_length) = '\0';

    	cout << combined_string;
    
     return *combined_string;
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

int strend(char *destination, char *source)
{
        int i = strlen(source)-1;
        int j = strlen(destination)-1;
        char *destination_final = destination+j;
        char *source_final = source+i;
 
        while (i-- >= 0)
            if (*source_final-- != *destination_final--) return 0;
        return 1;
}

char armador(char *p1,char *p2, char (*calc_string)(const char*, const char*)){
	return(calc_string(p1, p2));
}

int armador(char *p1,char *p2, int (*calc_string)(char*, char*)){
	return(calc_string(p1, p2));
}

char armador(char *p1,char *p2, int i, char (*calc_string)(char*, char*, int)){
	return(calc_string(p1, p2,i));
}


int main(void){
	
	//Prueba de punteros a funciones.
	char cad1[30] = "miercoles";
    char cad2[30] = "miercoles";
    int i = 4;
    cout<<"\nFuncionamiento strcat ";
    armador (cad1,cad2,strcat2);
    cout<<"\nFuncionamiento strend "<<armador(cad1,cad2,strend);
    cout<<"\nFuncionamiento strcpy ";
    armador (cad1,cad2,i,strcpy2);
	return 0;
}
