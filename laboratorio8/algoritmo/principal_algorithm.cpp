//Author: Jean Carlos Chavarria Hughes

#include "algorithm.cpp"
#include <iterator>
#include <time.h>
#include <numeric>

using namespace std;

	//boolean function
  	bool myfunction (int i, int j) 
  	{
  	return (i==j);
	}

int main () {
	int a = 50; //length of the original vector
	int myints[a];
	cout<< "Original Vector 'myints':{" << endl;
	srand (time(NULL)); //con srand() se generan los numeros 
	//aleatorios basados en el tiempo.
	for (int i =0; i < a; i++)
	{
        myints[i]= rand() % 11 + 10;
        //the rand() function is for generate a randon value
        //since a randon number between %(first) plus (last)
        //where: rand() % (first) + (last)
        cout<<" "<<myints[i]<<endl;
    }
    cout<<'\n'<<endl;

  	std::vector<int> myvector (a);

  	//Copy algorithm
  	std::copy ( myints, myints+a, myvector.begin() );

  	std::cout << " 'myvector' is a copy of 'myints':";
  	for (std::vector<int>::iterator it = myvector.begin(); it!=myvector.end(); ++it)
    	std::cout << ' ' << *it;

  	std::cout << '\n';

	//adjacent_find 
  	std::vector<int>::iterator it;

  	// using default comparison:
  	it = std::adjacent_find (myvector.begin(), myvector.end());

  	if (it!=myvector.end())
    	std::cout << "the first pair of repeated elements are: " << *it <<endl;
	std::cout << '\n';
/*
  	//using predicate comparison:
  	it = std::adjacent_find (++it, myvector.end(), myfunction);
  	if (it!=myvector.end())
    	std::cout << "the second pair of repeated elements are: " << *it << '\n';
*/
  
  	//sorting algorithm
  	std::sort(myvector.begin(),myvector.end());
  	std::cout<< "myvector constains: ";
  	for (std::vector<int>::iterator it = myvector.begin(); it!=myvector.end(); ++it)
  		std::cout<< ' ' << *it;
  		std::cout << '\n';

  	//showing in console:
  		std::cout<< "printing using 'copy()' function: "<<endl;
		std::cout << '\n';
		std::copy(myvector.begin(),myvector.end(),std::ostream_iterator<int>(std::cout, " ")); 
		std::cout << '\n'<<endl;

	//greater
	std::sort(myvector.begin(),myvector.end(),greater<int>());
	std::cout<< "using greater parameter: "<<endl;
  	for (std::vector<int>::iterator it = myvector.begin(); it!=myvector.end(); ++it)
  		std::cout<< ' ' << *it;
  		std::cout << '\n';


  	//count
	//Calculando la moda del vector
	int mayortemp = 0;
	int cantdelmayor = 0;
	int init = 100;
	int cantidad;
	for(int i = 10; i < 21; i++ ){
		cantidad = std::count(myvector.begin(), myvector.end(), i);
	if ((cantdelmayor-cantidad)<0){
		mayortemp = i;
		cantdelmayor = cantidad;
	}
	}
	std::cout << '\n'<<endl;
	cout << "El número moda es " << mayortemp << " pues aparece " << cantdelmayor << " veces"<<endl;

	//Cálculo de la media
	int sumatoria = std::accumulate(myvector.begin(), myvector.end(), init);
	int media = sumatoria/myvector.size();
	cout << "La media del vector es "<< media <<endl;

	//Cálculo de la varianza
	int sumaVar = 0;
	int varianza = 0;
	for(unsigned int i = 0; i < myvector.size(); i++)
	{
	sumaVar += (myvector[i]-media)*(myvector[i]-media);
	}
	varianza = sumaVar/myvector.size();
	cout << "La varianza del vector es "<< varianza <<endl;

	//Cálculo de la mediana
	std::nth_element (myvector.begin(), myvector.begin()+(myvector.size()/2), myvector.end());
	cout << "La mediana del vector es "<< myvector[myvector.size()/2] <<endl;
	std::sort (myvector.begin(), myvector.end(), std::greater<int>());


  	//reverse()
  		//std::vector<int> myvector;
  		// set some values:
  	for (int i=1; i<10; ++i) myvector.push_back(i);   // 1 2 3 4 5 6 7 8 9
  	//std::reverse(myvector.begin(),myvector.end());    // 9 8 7 6 5 4 3 2 1
  	reverse2(myvector.begin(),myvector.end());    // 9 8 7 6 5 4 3 2 1
  		// print out content:
  	std::cout << '\n'<<endl;
  	std::cout << "After reversing an even vector :";
  	for (std::vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
	    std::cout << ' ' << *it;
  	std::cout << '\n';

  		//parte a) generando nuevos vectores para probar el reverse()
  		//Vector impar
  		std::cout << "After reversing an odd vector :";
  		std::cout << '\n';
	 	int a2 = 51; //length of the original vector
		int myints2[a2];
		//srand (time(NULL)); //con srand() se generan los numeros 
		//aleatorios basados en el tiempo.
		for (int i =0; i < a2; i++)
		{
        myints2[i]= rand() % 11 + 10;
   		}
    	cout<<'\n'<<endl;
  		std::vector<int> myvector2 (a2);
  		//Copy algorithm
  		std::copy ( myints2, myints2+a2, myvector2.begin() );
  		std::cout << '\n';
 		reverse2(myvector2.begin(),myvector2.end());
  		// print out content:
  		for (std::vector<int>::iterator it=myvector2.begin(); it!=myvector2.end(); ++it)
	    std::cout << ' ' << *it;
	  	std::cout << '\n';

 		//Vector longitud 0
	  	std::cout << "After reversing a zero lenght vector :";
  		std::cout << '\n';
	 	int a3 = 0; //length of the original vector
		int myints3[a3];
		//srand (time(NULL)); //con srand() se generan los numeros 
		//aleatorios basados en el tiempo.
		for (int i =0; i < a3; i++)
		{
        myints3[i]= rand() % 11 + 10;
   		}
    	cout<<'\n'<<endl;
  		std::vector<int> myvector3 (a3);
  		//Copy algorithm
  		std::copy ( myints3, myints3+a3, myvector3.begin() );
  		std::cout << '\n';
 		reverse2(myvector3.begin(),myvector3.end());
  		// print out content:
  		for (std::vector<int>::iterator it=myvector3.begin(); it!=myvector3.end(); ++it)
	    std::cout << ' ' << *it;
	  	std::cout << '\n';

 		//Vector longitud 1
 		std::cout << "After reversing a unitary lenght vector :";
  		std::cout << '\n';
	 	int a4 = 1; //length of the original vector
		int myints4[a4];
		//srand (time(NULL)); //con srand() se generan los numeros 
		//aleatorios basados en el tiempo.
		for (int i =0; i < a4; i++)
		{
        myints4[i]= rand() % 11 + 10;
   		}
    	cout<<'\n'<<endl;
  		std::vector<int> myvector4 (a4);
  		//Copy algorithm
  		std::copy ( myints4, myints4+a4, myvector4.begin() );
  		std::cout << '\n';
 		 reverse2(myvector4.begin(),myvector4.end());
  		// print out content:
  		for (std::vector<int>::iterator it=myvector4.begin(); it!=myvector4.end(); ++it)
	    std::cout << ' ' << *it;
	  	std::cout << '\n';

      //Parte Generate
      int f1 = 20; //original vector size
      int gi = 5;  //initial value
    int u = 1;  //step size
    vector<int> myvector5 (f1);
    generate (myvector5.begin(),myvector5.end(),gi,u);
    cout << "Vector generado con generate :";
    for (vector<int>::iterator it=myvector5.begin(); it!=myvector5.end(); ++it)
      cout << ' ' << *it;
      cout<<endl;

  	return 0;
}