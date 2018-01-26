#include <iostream>
using namespace std;

class Angle {
	
	private:
		int degree;
		float minute;
		char direction;
	
	public:
	Angle ():degree(0),minute(0),direction(0)	
	{}
	Angle(int deg, float min, char dir):degree(deg),minute(min),direction(dir)
	{
	}
	void getdata(int deg,float min,char dir){
		degree=deg ;
		minute=min ;
		direction=dir ;
	}
	void showdata(){
		const char sign='\xF8';
		cout << "Your location is: " << degree << sign << minute <<"'" << direction << endl;
	}

};
 
int main(){
	Angle longitude, latitude;
	int deg1;
	float min1;
	char dir1;
	while(1){
	cout << "Enter your location's latitude degree:";
	cin >>	deg1 ;
	cout << "Enter your location's latitude minute:";
	cin >>	min1 ;
	cout << "Enter your location's latitude direction(W/E):";
	cin >>	dir1 ;
	latitude.getdata(deg1,min1,dir1);
	
	cout << "Enter your location's longitude degree:";
	cin >>	deg1 ;
	cout << "Enter your location's longitude minute:";
	cin >>	min1 ;
	cout << "Enter your location's longitude direction(N/S):";
	cin >>	dir1 ;
	longitude.getdata(deg1,min1,dir1);
	
	latitude.showdata();	
	longitude.showdata();
	}
	
	system ("pause");
	return 0;
}
