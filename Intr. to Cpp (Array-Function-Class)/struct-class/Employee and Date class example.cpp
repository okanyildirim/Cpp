#include <iostream>
using namespace std;

class employee {
	private:
		int number,type;
		float compensation;
		enum etype { 
           laborer=1,
           secretary,
           manager	
       };

	public:
	void data (int num, float comp){
      number=num;
	  compensation = comp; 
	}

	void getemploy(int type){
		switch (type) {
               static int numbercounter=1;
	      case 1 : 
		  cout<< numbercounter << ". employee's type is Laborer"<< endl << endl ;
	      numbercounter++;
	      break;
	
	      case 2 : 
		  cout<< numbercounter << ". employee's type is Secretary"<< endl << endl ;
	      numbercounter++;
	      break;
	
	      case 3: cout<< numbercounter << ". employee's type is Manager"<< endl << endl;
	      numbercounter++;
	      break;
	      
		  default : cout << "You enter type of employee incorrectly."<< endl << endl;

	}	
	
	}
		void show (){
	      static int numbercounter=1;
	      cout << numbercounter <<". employee's number is " << number << endl 
	      <<numbercounter << ". employee's compensation is " << compensation << " $" << endl ;
	      numbercounter++;
		}
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
		static int numbercounter=1;
	cout<< numbercounter << ". employee's date when was hired is " << day << dummy << month << dummy << year << endl;
	numbercounter++;
	}
}date1;

};

int main (){
	int n,type1,type2,type3 ; 
	float c ;
	char dummy;
    int d1,m1,y1;
	employee emp1,emp2,emp3;
	cout << "Enter first employee's number:";
cin >> n ;
cout << "Enter first employee's compensation:";
cin >> c ;
cout << "Enter a date when the employee was hired:";
cin >> d1 >> dummy >> m1 >> dummy >> y1;
cout << "Select first employee's type:\n1_Laborer\n2_Secretary\n3_Manager \n";
cin >> type1 ;
cout << endl;
emp1.data(n,c);
emp1.date1.get_date(d1,m1,y1);


cout << "Enter second employee's number:";
cin >> n ;
cout << "Enter second employee's compensation:";
cin >> c ;
cout << "Enter a date when the employee was hired:";
cin >> d1 >> dummy >> m1 >> dummy >> y1;
cout << "Select second employee's type:\n1_Laborer\n2_Secratary\n3_Manager \n";
cin >> type2 ;
cout << endl;
emp2.data(n,c);
emp2.date1.get_date(d1,m1,y1);


cout << "Enter third employee's number:";
cin >> n ;
cout << "Enter third employee's compensation:";
cin >> c;
cout << "Enter a date when the employee was hired:";
cin >> d1 >> dummy >> m1 >> dummy >> y1;
cout << "Select second employee's type:\n1_Laborer\n2_Secratary\n3_Manager \n";
cin >> type3 ;
cout << endl;
emp3.data(n,c);
emp3.date1.get_date(d1,m1,y1);

	emp1.show();
	emp1.date1.show_date();
	emp1.getemploy(type1);
	emp2.show();
	emp2.date1.show_date();
	emp2.getemploy(type2);
    emp3.show();
	emp3.date1.show_date();
	emp3.getemploy(type3);
		
	system ("pause");
	return 0;
}

