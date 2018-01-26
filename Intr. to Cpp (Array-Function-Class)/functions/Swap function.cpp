#include <iostream>
using namespace std;

void swap(int& number1, int& number2);

int main(){
	int number1=0, number2=0;
	cout << "The first values of the program.\n";
	cout << "Number 1="; 
	cin >> number1;
	
	cout << "Number 2=";
	cin >> number2;
	
	cout << "Number1=" << number1 << "\t"
	<< "Number2=" << number2 << endl;
	cout << "After swap function used...\n";
	
	swap(number1, number2);
	
	cout << "Number1=" << number1 << "\t"
	<< "Number2=" << number2 << endl;

	system ("pause");
	return 0;
}
void swap(int &number1, int &number2){
	int temporary;
	temporary=number1;
    number1=number2;
	number2=temporary;
}
