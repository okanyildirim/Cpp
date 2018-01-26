
#include <iostream>
using namespace std;

class employee {
	private:
		int number;
		float compensation;
	public:

	void data (int num, float comp){
    number=num;
	compensation = comp; 
	}
		void show (){
	cout << "employee's number is " << number << " and compensation is " << compensation << " $ \n" ;
		}
};
int main (){
	int n ; 
	float c ;
	employee emp1,emp2,emp3;
	cout << "Enter first employee's number:";
cin >> n ;
cout << "Enter first employee's compensation:";
cin >> c ;
emp1.data(n,c);

cout << "Enter second employee's number:";
cin >> n ;
cout << "Enter second employee's compensation:";
cin >> c ;
emp2.data(n,c);

cout << "Enter third employee's number:";
cin >> n ;
cout << "Enter third employee's compensation:";
cin >> c;
emp3.data(n,c);
	
	emp1.show();
	emp2.show();
    emp3.show();

	system ("Pause");
	return 0 ;
}
