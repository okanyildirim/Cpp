#include <iostream>
using namespace std;

class employee{
	int employee_number;
	float employee_compensation;
	int day, month, year;
	enum etype {laborer=1, secretary, manager};
	char slash;
	public:
	int type;
	employee(int number, float compensation, int d, char s, int m, int y): employee_number(number), 
	employee_compensation(compensation), day(d), slash(s), month(m), year(y){
	}
	void display(){
		static int sayac=1;
		cout << sayac << ". Employee's number:" << employee_number << endl 
		     << sayac << ". Employee's compensation:" << employee_compensation << endl
		     << sayac << ". Employee's date that hired:" << day << slash << month << slash << year << endl;
		     sayac++;
	}
	void getemploy(){
		 cout << "------------------\n"
	     << "Please select your type:\n"
	     << "1-Laborer\n"
	     << "2-Secretary\n"
	     << "3-Manager\n"
	     << "------------------\n";
	     cin >> type;	
	}
	void putemploy(){
		static int sayac=1;
		switch(type){
			case laborer:{
				cout << sayac << ". Employee's type is Laborer.\n\n";
				break;
			}
			case secretary:{
				cout << sayac << ". Employee's type is Secretary.\n\n";
				break;
			}
			case manager:{
				cout << sayac << ". Employee's type is Manager\n\n";
				break;
			}
		}
		sayac++;
	}	
		
};
int main(){
	int en, d, m, y, type;
	float ec;
	char s;
	cout << "Please enter 1. employee's number:";
	cin >> en;
	cout << "Please enter 1. employee's compensation:";
	cin >> ec;
	cout << "Please enter the date that employee's hired:";
	cin >> d >> s >> m >> s >> y;
	employee employee1(en, ec, d, s, m, y);
	employee1.getemploy();
	
	
	cout << "Please enter 2. employee's number:";
	cin >> en;
	cout << "Please enter 2. employee's compensation:";
	cin >> ec;
	cout << "Please enter the date that employee's hired:";
	cin >> d >> s >> m >> s >> y;    
	employee employee2(en, ec, d, s, m, y);
	employee2.getemploy();
	
	cout << "Please enter 3. employee's number:";
	cin >> en;
	cout << "Please enter 3. employee's compensation:";
	cin >> ec;
	cout << "Please enter the date that employee's hired:";
	cin >> d >> s >> m >> s >> y;
	employee employee3(en, ec, d, s, m, y);
	employee3.getemploy();
	
	cout << endl;
	
	employee1.display();
	employee1.putemploy();
	employee2.display();
	employee2.putemploy();
	employee3.display();
	employee3.putemploy();
	
	system("pause");
	return 0;
}
