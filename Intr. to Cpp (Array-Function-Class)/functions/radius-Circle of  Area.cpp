/*1. Refer to the CIRCAREA program in Chapter 2, “C++ Programming Basics.” Write a function
called circarea() that finds the area of a circle in a similar way. It should take an
argument of type float and return an argument of the same type. Write a main() function
that gets a radius value from the user, calls circarea(), and displays the result.*/
#include <iostream>
using namespace std;

float circarea(float radius);

int main(){
	float rad;
	cout <<"Enter radius:";
	cin >> rad ;
	
	cout << circarea (rad);
	
	return 0;
	}
	
	float circarea(float r){
		
	float PI = 3.14 ;
	
	return r*r*PI;
	}
	
	
	
	

