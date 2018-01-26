#include <iostream>
using namespace std;
struct time{
	int hours,mins,secs,total_time_in_secs;
	char slash;
};
void time_swapper(time, time);
int main(){
	int total_time_in_secs;
	time time1,time2;
	cout << "Please enter the first time:";
	cin >> time1.hours >> time1.slash >> time1.mins >> time1.slash >> time1.secs;
	
	cout << "Please enter the second time:";
	cin >> time2.hours >> time2.slash >> time2.mins >> time2.slash >> time2.secs;
	
	cout << "After swap function used...\n";
	
	time_swapper(time1, time2);
	
	
	system("pause");
	return 0;
}
void time_swapper(time time1,time time2){
	int temp_hour, temp_min, temp_sec;
	temp_hour = time1.hours; temp_min = time1.mins; temp_sec = time1.secs;
	time1.hours = time2.hours; time1.mins = time2.mins; time1.secs = time2.secs;
	time2.hours = temp_hour; time2.mins = temp_min; time2.secs = temp_sec;
	cout << "First time:";
	cout << time1.hours << time1.slash << time1.mins << time1.slash << time1.secs << endl;
	cout << "Second time:";
	cout << time2.hours << time2.slash << time2.mins << time2.slash << time2.secs << endl;
}






