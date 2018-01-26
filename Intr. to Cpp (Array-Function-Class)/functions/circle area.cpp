#include <iostream>
using namespace std;
float circarea(float);
int main(){
	float radius;
	cout << "Please enter the radius of the circle which you want to learn its area...\n"
	<< "Radius of the circle:";
	cin >> radius;
	cout << "Area of the circle is:" << circarea(radius) << endl;
	system ("pause");
	return 0;
	
}
float circarea(float yaricap){
	float area;
	area=yaricap*yaricap*3.14;
	return area;
}
