#include <iostream>
using namespace std;

void hanoi (int diskno,char first,char last, char middle){
	
	if (diskno==1){
		cout << "Move disk " << diskno << " from stick " << first << " to stick " << last << endl; 	
		return ;
	}
	hanoi (diskno-1,first,middle,last);
	cout << "Move disk " << diskno << " from stick " << first << " to stick " << last << endl ;
	hanoi (diskno-1,middle,last,first);
	
};

int main (){
	int diskno;
	
	cout << "Enter the number of disk:";
	cin >> diskno;
	
	hanoi(diskno,'A','C','B');
	
	system ("Pause");
	return 0;
}
