#include <iostream>

using namespace std;

int main(){
	
	float epsilon=1;
	
	while((epsilon+1)>1){
		
		epsilon=epsilon/2;
	}

	epsilon=epsilon*2;
	cout<< epsilon;
	
	system ("Pause");
	return 0;
}
