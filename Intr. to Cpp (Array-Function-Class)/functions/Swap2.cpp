#include <iostream>
using namespace std ;

 void swap(int x, int y){
 	int t;
	 t=x;
	 x=y;
 	 y=t;
     cout << "First integer number is " << x << endl << "Second integer number is " << y << endl;
 }
 
 int main(){
 	
 	int a,b;
 	
 	cout <<"Enter first integer number:";
 	cin >> a;
 	cout <<"Enter second integer number:";
 	cin >> b;
    swap(a,b);

 	
 	return 0;
 }
