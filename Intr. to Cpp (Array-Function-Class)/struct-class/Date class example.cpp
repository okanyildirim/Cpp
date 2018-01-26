#include <iostream>
using namespace std;

class Date{
	
	private:
		int day, month, year;
		char dummy ;
	public :
	
	Date():day(0), month(0), year(0)
	{}
	Date (int d, int m,int y): day(d), month(m), year(y),dummy('/')
	{}
	
	void get_date(int d, int m,int y){
		day=d;
		month=m;
		year=y;
		dummy ='/';
	}
	void show_date(){
		
	cout<< day << dummy << month << dummy << year << endl;
	
	}
};

int main(){
	int d1,m1,y1;
	char dummy ;
	cout << "Enter a date:";
	cin >> d1 >> dummy >> m1 >> dummy >> y1;
	
	Date date1;
	date1.get_date(d1,m1,y1);
	date1.show_date();
	
	system ("pause");
	return 0;
}
