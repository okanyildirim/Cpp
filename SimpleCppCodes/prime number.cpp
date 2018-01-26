#include <iostream>

using namespace std;

main(){
	
	 int a, counter=1;
	cout<< "This program for showing prime numbers that smaller than number that you enter.\nPlease enter a number:  ";
	cin>> a;
	bool controller=true;
	
	for(int i=2;i<=a;i++){
		
		for(int j=2;j<i;j++){
			
			if (i%j==0){
				
				controller=false;
				break;
			}
			
			else
			controller=true;
		}
		if(controller){
			cout << endl << counter << " ------> " << i;
			counter++;
		}
			
	}
	cout<<endl;
	system ("Pause");
	
	return 0;
}
