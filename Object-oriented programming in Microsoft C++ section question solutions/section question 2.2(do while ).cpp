#include <iostream>
using namespace std;

int main(){
	int number,x=1;

    cout << "Enter  how many times you want written 'Hello, World!' \n";
    cin >> number;
	
	do {

	x++;
	cout << "Hello, World! \n";
    }
	
	while(x<=number);
	

    system ("Pause") ;
    return 0 ;
}
