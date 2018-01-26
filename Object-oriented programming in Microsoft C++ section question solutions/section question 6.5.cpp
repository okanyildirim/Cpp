#include<iostream>
#include<conio.h>
using namespace std;

class date{
    int day, month, year;
    char c;
public:
    void getdate(){
        cout<<"Enter date in [12/31/97] format: ";
        cin >>day>>c>>month>>c>>year;}
    void showdate() const { cout<<"Date is: "<<day<<c<<month<<c<<year;}};

void main(void)
{

    date x;

    do{
        x.getdate();
        x.showdate();
        cout<<"\n\n !Press c to continue or any key to exit."<<endl<<endl;
    }while(getch()=='c');
}
