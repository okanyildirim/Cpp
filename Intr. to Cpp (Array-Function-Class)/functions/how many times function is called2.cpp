#include <iostream>
using namespace std;
int x=1;
void call ()
{ 
		cout << "The function has been called " << x << " times.\n";
		x++;
};
int main (){
for (int y=1;y<=10;y++)
	{	
	call ();
	}
	system ("Pause");
	return 0;
}
