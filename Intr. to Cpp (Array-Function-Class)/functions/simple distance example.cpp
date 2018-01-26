#include <iostream>
using namespace std;

float distance1(float dist1, float dist2);

int main(){
	float dist1, dist2;
	cout <<"Enter first distance:";
	cin >> dist1 ;
	cout << "Enter second distance:";
	cin >> dist2 ;
	cout << distance1(dist1,dist2) << endl;
	system("Pause");
	return 0;
}

float distance1(float dist1, float dist2){
	if (dist1>dist2) {
	return dist1 ;
	}
	
	else {
	return dist2;
	}

}
