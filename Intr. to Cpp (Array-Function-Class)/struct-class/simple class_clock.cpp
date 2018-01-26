#include <iostream>
using namespace std;

class Clock {
	
	private:
		int hour, min , sec;
		
	public:
	
	Clock(): hour(0), min(0), sec (0)
	{}
	Clock(int x, int y, int z): hour(x), min(y), sec(z)
	{}
	
	void clock_adding (Clock clock1,Clock clock2){
	sec=(clock1.hour + clock2.hour)*3600 + (clock1.min + clock2.min)*60 + clock1.sec + clock2.sec;
	hour=sec/3600;
	min= (sec%3600)/60;
	sec= ((sec%3600)%60); 
	}
	
	void clock_showing (){
		cout << "Total clock= " << hour << ":" << min <<":" << sec << endl;
	}
};

int main () {
	
  Clock clock1(5,25,50);
  Clock clock2(10,20,5);
  Clock clock3;
	
   clock3.clock_adding(clock1, clock2);
   clock3.clock_showing();
	
	system ("pause");
	return 0;
}
