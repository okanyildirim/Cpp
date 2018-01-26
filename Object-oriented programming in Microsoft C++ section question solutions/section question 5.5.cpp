#include<iostream>
#include<conio.h>
using namespace std;

long hms_to_secs(int hours, int minutes, int seconds);

int main()
{

    int h, m, s; char sep;

    do{
        cout<<"Enter the time in format hh:mm:ss : "; cin>>h>>sep>>m>>sep>>s;
        cout <<"The equivalent time in seconds is : "<<hms_to_secs(h, m, s);
        cout<<"\n\n !Press c to continue or any key to exit."<<endl<<endl;
    }while(getch()=='c');
}

long hms_to_secs(int hours, int minutes, int seconds)
{
    return  seconds+minutes*60+hours*3600;
}
