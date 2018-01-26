#include<iostream>
#include<conio.h>
using namespace std;

class angle{
    int degrees;
    float minutes;
    char direction;
public:
    angle(int deg, float min, char dir){
        degrees=deg;
        minutes=min;
        direction=dir;
    }
    void setAngle(int deg, float min, char dir){
        degrees=deg;
        minutes=min;
        direction=dir;
    }
    void display() const {
        cout<<degrees<<"\xF8"<<minutes<<"\'"<<direction<<endl;
    }
};

void main(void)
{
    angle A(17, 31.5f, 'S');
    int a; float b; char c;
    A.disp();

    do{
        cout<<"Enter degrees  : "; cin>>a;
        cout<<"Enter minutes  : "; cin>>b;
        cout<<"Enter direction: "; cin>>c;
        A.setAngle(a, b, c);
        A.display();
        cout<<"\n\n !Press c to continue or any key to exit."<<endl<<endl;
    }while(getch()=='c');
}
