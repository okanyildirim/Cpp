#include <iostream>

using namespace std;

int main(){
	
	float epsilon=1;
	
	while(1){
		if ((epsilon+1)<=1)
		break;
		
		epsilon=epsilon/2;
	}

	epsilon=epsilon*2;
	cout<< epsilon;
	
	system ("Pause");
	return 0;
}
