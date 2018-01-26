#include <iostream>
using namespace std;

int call ()
{  int x=1;
		
  return x++;
};
int main (){

for (int x;x<10;x++)
	{
	call ();
}
cout << "The function has been called " << call() << " times.\n";
    system ("Pause");
	return 0;
}

// we can not use local variable because x is defined as "1" in every initialization of the function.
