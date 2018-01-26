#include <iostream>
using namespace std;

int ebob(int a,int b){
	
	if(a==0){
		return b;
	}
	if(b==0)
	return a;
	else {
		return ebob(b,a%b);
	}
}
int main(){
	int a,b;
	cout << "Please enter two number for taking their GCD:";
	cin >> a;
	cin >> b;
	
	cout << ebob(a,b) << endl;
	
	system ("Pause");
	return 0;
}
