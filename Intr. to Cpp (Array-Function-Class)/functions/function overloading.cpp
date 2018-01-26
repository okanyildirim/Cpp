#include <iostream>
using namespace std;
double power(double number, int powerof);
double power(char number, int powerof);
double power(int number, int powerof);
double power(long number, int powerof);
double power(float number, int powerof);
int main (){
	double number;
	int powerof;
	
	
	cout << "Please enter a number:";
	cin >> number;
	cout << "Please enter a integer power:";
	cin >> powerof;
	cout << "Result is:" << power(number, powerof) << endl;

	system ("Pause");
	return 0;
}
double power(double number, int powerof){
	double result=1;
	for (powerof;powerof>0;powerof--){
		result=number*result;
		
	}
	return result;
}
double power(char number, int powerof){
	double result=1;
	for (powerof;powerof>0;powerof--){
		result=number*result;
		
	}
	return result;
}
double power(int number, int powerof){
	double result=1;
	for (powerof;powerof>0;powerof--){
		result=number*result;
		
	}
	return result;
}
double power(long number, int powerof){
	double result=1;
	for (powerof;powerof>0;powerof--){
		result=number*result;
		
	}
	return result;
}
double power(float number, int powerof){
	double result=1;
	for (powerof;powerof>0;powerof--){
		result=number*result;
		
	}
	return result;
}



