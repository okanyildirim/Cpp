#include <iostream>
using namespace std;
const int LIMIT=99;

class safearay {
	private:
	int array[LIMIT];
		
	public: 
		
	void	pute1(int limit, int number ){
		 array[limit]=number;
		}
	
    void	    get1(int limit){		
		cout << "[" << limit << "]" << "=" << array [limit] << endl;
	}
	
}sa1;

int main (){
	int lim,num;
	
	cout << "Enter the index of the number:";
	cin >> lim ;
	cout << "Enter the number in that index:";
	cin >> num;
	
	sa1.pute1(lim,num);
	sa1.get1(lim);

	system ("pause");
	return 0;
}
