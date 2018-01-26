#include<iostream>
#include<conio.h>
using namespace std;

struct time{int hours; int minutes; int seconds;};
void swap(time& t1, time& t2);

int main(void)
{
    time t1, t2; char c;

    do{
        cout<<"In [hh:mm:ss] format;\n";
        cout<<"Enter first time value : "; cin >>t1.hours>>c>>t1.minutes>>c>>t1.seconds;
        cout<<"Enter second time value: "; cin >>t2.hours>>c>>t2.minutes>>c>>t2.seconds;
        swap(t1, t2);
        cout<<"Now first time is : "  <<t1.hours<<c<<t1.minutes<<c<<t1.seconds
           <<" and second time is : "<<t2.hours<<c<<t2.minutes<<c<<t2.seconds;
        cout<<"\n\n !Press c to continue or any key to exit."<<endl<<endl;
    }while(getch()=='c');
}

void swap(time& a, time& b){time c=a; a=b; b=c;}
