#include <iostream>
using namespace std;

int main(){
	
	int x, toplam=0;
	cin >> x ;
	
	for (int i;x>0;i){
		 
		toplam+=x%10;
		x/=10;
	}
	
	cout << toplam << endl;
	system ("Pause");
	return 0 ;
}
