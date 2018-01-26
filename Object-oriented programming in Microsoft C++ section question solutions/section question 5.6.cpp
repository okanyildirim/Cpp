#include<iostream>
#include<conio.h>
using namespace std;

struct time{int hours; int minutes; int seconds;};
long time_to_secs(time t);
time secs_to_time(long s);

int main(void)
{

    time t1, t2, t3; char c;

    do{
        cout<<"In [hh:mm:ss] format;\n";
        cout<<"Enter first time value : "; cin >>t1.hours>>c>>t1.minutes>>c>>t1.seconds;
        cout<<"Enter second time value: "; cin >>t2.hours>>c>>t2.minutes>>c>>t2.seconds;
        t3=secs_to_time(time_to_secs(t1)+time_to_secs(t2));
        cout<<"The result is: "<<t3.hours<<":"<<t3.minutes<<":"<<t3.seconds;
        cout<<"\n\n !Press c to continue or any key to exit."<<endl<<endl;
    }while(getch()=='c');
}

long time_to_secs(time t){ return t.hours*3600+t.minutes*60+t.seconds;}

time secs_to_time(long s){
    time t;
    t.seconds=s%60; t.minutes=((s-t.seconds)%3600)/60; t.hours=s/3600;
    if(t.seconds>59) {t.seconds-=59; t.minutes++;} //Check seconds over.
    if(t.minutes>59) {t.minutes-=59; t.hours++;}   //Check minutes over.
    return t;
}
