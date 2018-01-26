#include<iostream>
#include<conio.h>
using namespace std;

void swap(int& a, int& b);

int main(void)
{

    int a, b;

    do{
        cout<<"Enter a : ";
        cin >>a;
        cout<<"Enter b : ";
        cin >>b;

        swap(a, b);

        cout<<"Now a value is : "<<a<<" and b value is : "<<b;
        cout<<"\n\n !Press c to continue or any key to exit.";
    }
    while(getch()=='c');
}

void swap(int& a, int& b){
    int c=a;
    a=b;
    b=c;
}
