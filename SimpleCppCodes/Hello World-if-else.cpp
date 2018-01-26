#include <iostream>

using namespace std;


main(){
	string name;
	
	cout<< "Please enter your name:\n";
	cin>>name;
	
	if(name!="okan"){
		
		cout<< "You are not admin!!" << endl << "Get out of my computer"<< endl;
	}
	if(name=="okan"){
		
		cout <<"Hello world!!"<< endl;
	}
	
system("Pause");
	return 0;
}
