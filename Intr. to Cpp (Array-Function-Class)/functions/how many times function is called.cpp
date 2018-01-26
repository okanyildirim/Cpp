#include <iostream>
using namespace std;

int call ()
{ static int x=0;
		x++;
		return x;
};
int main (){

for (int y=0;y<9;y++)
	{
	call ();
}
cout << "The function has been called " << call()<< " times.\n";
    system ("Pause");
	return 0;
}
