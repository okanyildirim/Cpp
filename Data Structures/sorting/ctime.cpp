#include <iostream>
#include <ctime>
using namespace std;

int main(){
	int dizi[100000];
	clock_t x;
	x = clock();
	
	for(int i=0;i<100000;i++){
		
		cout << dizi[i]<<endl;
	}
	clock_t y;
	y = clock();

    cout <<  ((double)y-(double)x)/(double)CLOCKS_PER_SEC << endl;
	
	cout << (double)CLOCKS_PER_SEC;
	system("Pause");
	return 0;
}
