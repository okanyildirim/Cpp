#include <iostream>
using namespace std;

class Serial {
	
	private:
	int serialnumber;
	public:
	 Serial(){
	 	static int counter=1;
	 	serialnumber = counter;
	 	counter++;
	 }
	 void showdata(){
	 cout << "I am object number " << serialnumber << endl ;
	 }
	 
}s1,s2,s3;
int main() {
	s1.showdata();
	s2.showdata();
	s3.showdata();
	system ("pause");
	return 0;
}
