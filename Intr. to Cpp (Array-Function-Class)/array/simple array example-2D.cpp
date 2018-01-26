#include <iostream>
using namespace std;
const int LIMIT1=10,LIMIT2=10;

class safearay {
	private:
	int array[LIMIT1][LIMIT2];
	
	public: 
		
	void	pute1(int limit1,int limit2, int number ){
		 array[limit1][limit2]=number;
		}
	
    void	    get1(int limit1,int limit2){		
		cout << "[" << limit1 << "]" <<"[" << limit2 << "]" << "=" << array [limit1][limit2] << endl;
	}
	
}sa1;

int main (){
	int lim1,lim2,num;
	
	cout << "Enter the first index of the number:";
	cin >> lim1 ;
	cout << "Enter the second index of the number:";
	cin >> lim2 ;
	cout << "Enter the number in that indexes:";
	cin >> num;
	
	sa1.pute1(lim1,lim2,num);
	sa1.get1(lim1,lim2);

	system ("pause");
	return 0;
}
		
