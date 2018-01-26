#include <iostream>
#include <fstream>

using namespace std;



int main(){
	
	int array[10];
	for(int i=0;i<10;i++){
		array[i]=i;
	}
	ofstream output("dizi.txt");
	for(int j=0;j<10;j++){
		output << array[j] <<"\n";
	}
	cout << "Islem tamam\n";
	system ("Pause");
	return 0;
}
