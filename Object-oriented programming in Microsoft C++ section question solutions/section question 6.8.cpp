#include<iostream>
#include<conio.h>
using namespace std;

class SN{
    static int count;
    int serial;
public:
    SN() {
        serial=++count;
    }

    void display() const { cout<<"I\'am object number "<<serial<<endl;}
};

int SN::count=0;

void main(void)
{
    do{
        SN s[3];

        for(int i=0; i<3; i++)
            s[i].disp();

        cout<<"\n\n !Press c to continue or any key to exit."<<endl<<endl;
    }while(getch()=='c');
}
