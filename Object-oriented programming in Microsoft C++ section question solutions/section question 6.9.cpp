#include<iostream>
#include<conio.h>
using namespace std;

class fraction{
    int numerator, denominator;
    char c;
    void dispFct() const { cout<<numerator<<"/"<<denominator;}
public:
    void getFct(){ cout<<"Enter fraction: "; cin>>numerator>>c>>denominator;}
    void addFct(fraction x, fraction y){
        numerator=x.numerator*y.denominator+x.denominator*y.numerator;
        denominator=x.denominator*y.denominator;
        cout<<"Sum = "; dispFct();}};

void main(void)
{
    fraction f[3];

    do{
        f[0].getFct(); f[1].getFct();
        f[2].addFct(f[0], f[1]);
        cout<<"\n\n !Press c to continue or any key to exit."<<endl<<endl;
    }while(getch()=='c');
}
