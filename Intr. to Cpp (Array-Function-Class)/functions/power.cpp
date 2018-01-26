#include <iostream>
using namespace std;
int power(double number, int powerof);
int main (){
	double number;
	int powerof;
	while(1){
	
	cout << "Please enter a number:";
	cin >> number;
	cout << "Please enter a integer power:";
	cin >> powerof;
	cout << "Result is:" << power(number, powerof) << endl;
}
	system ("Pause");
	return 0;
}
int power(double number, int powerof){
	double result=1;
	for (powerof;powerof>0;powerof--){
		result=number*result;
		
	}
	return result;
	
}
