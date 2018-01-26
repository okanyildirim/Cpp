#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int limit1=100;
	int limit2=100;
	int array[limit1][limit2];
	 
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
		array[i][j]=i*j;
		cout << "array[" << i << "]["<< j << "]="  <<array[i][j] <<endl;
			
		}
	
	}
	
	getch();
	return 0;
}
