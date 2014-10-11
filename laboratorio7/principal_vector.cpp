#include "vector.cpp"

int main(void){
	int x[] = {1,2,3};
	int y[] = {1,1,1};
	vector<int,3> V1(x);                                     
	vector<int,3> V2(y);
	vector<int,3> V3(y);
	vector<int,3> V4(y);
	//V3=V3.suma(&V1,&V2);
	//V4=V4.resta(&V1,&V2);
	//double norma_V2 = V2.norma(&V2);
    return 0;
}