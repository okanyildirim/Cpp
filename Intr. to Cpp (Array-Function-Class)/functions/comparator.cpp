#include <iostream>
using namespace std;
double compare(double number1, double number2);
int main(){
	double number1,number2;
	cout << "Enter a number";
	cin >> number1;
	cout << "Enter a number";
	cin >> number2;
	cout << compare(number1, number2) << endl;
	
	system ("pause");
	return 0;
}
double compare(double number1, double number2){
	if (number1>number2){
		return number1;
	}
	else {
		return number2;
	}
}
