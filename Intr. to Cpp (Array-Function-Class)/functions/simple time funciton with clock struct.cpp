#include <iostream>
using namespace std;


struct  clock {
	int hours;
	int mins;
	int secs;
};

void time (clock,clock);

int main(){
	clock  clock1, clock2;
	char slash;
	
	cout << "Enter the first time:";
	cin >> clock1.hours >> slash >> clock1.mins >> slash >> clock1.secs;
	cout << "Enter the second time:";
    cin >> clock2.hours >> slash >> clock2.mins >> slash >> clock2.secs;

	time (clock1, clock2);

	system ("pause");
	return 0;
}
void time (clock clock1,clock clock2){
	
	struct temp1 {
	int hours;
	int mins;
	int secs;
	} ;
    temp1 temp;
	temp.hours = clock1.hours ;
	temp.mins = clock1.mins ;
	temp.secs = clock1.secs ;
	clock1.hours=clock2.hours ;
	clock1.mins=clock2.mins ;
	clock1.secs=clock2.secs ;
	clock2.hours=temp.hours ;
	clock2.mins=temp.mins;
	clock2.secs=temp.secs;
	cout << "First time is " << clock1.hours << ":" << clock1.mins << ":" << clock1.secs << endl;
	cout << "Second time is " << clock2.hours << ":" << clock2.mins << ":" << clock2.secs << endl;
		
}
