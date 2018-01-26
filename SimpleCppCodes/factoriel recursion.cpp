#include <iostream>
using namespace std;

int factoriel(int n){
	
	if(n==0){
		return 1;
	}
	else {
		return factoriel(n-1)*n;
	}
}
int main(){
	int n;
	cout << "Please enter a number for taking its factoriel:";
	cin >> n;
	
	cout << factoriel(n) << endl;
	
	system ("Pause");
	return 0;
}
