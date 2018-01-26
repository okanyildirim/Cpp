#include<iostream>
#include<conio.h>
using namespace std;

class fraction{
    char c;
    int numerator, denominator;
public:
    void fadd(fraction a, fraction b);
    void fdiv(fraction a, fraction b);
    void getfrac();
    void display();
    float getFl();
};

void fraction::fadd(fraction a, fraction b){
    numerator   = a.numerator*b.denominator + a.denominator*b.numerator;
    denominator = a.denominator*b.denominator;
}

void fraction::fdiv(fraction a, fraction b){
    if(b.numerator != 0){
        numerator   = a.numerator*b.denominator;
        denominator = b.numerator*a.denominator;
    }
    else
        cout<<"Math error !"<<endl;
}

void fraction::getfrac(){
    cout<<"Enter fraction: ";
    cin>>numerator>>c>>denominator;
}

void fraction::display() const {
    cout<< "Maximum = " <<numerator <<"/"<< denominator;
}

float fraction::getFl(){
    if(denominator)
        return numerator/denominator;
    else return 0;
}

int maxfrc(fraction arr[], int bound){
    int max=0;

    for(int j=1; j<bound; j++)
        if ( arr[max].getFl() < arr[j].getFl() )
            max = j;

    return max;
}

void main(void)
{
    do{
        fraction a[100];
        int i=1;
        cout<<"([0] to quit):\n";
        a[0].getfrac();

        while(a[i-1].getFl() || i==100)
            a[i++].getfrac();

        a[maxfrc(a, i)].disp();

        cout<<"\n\n !Press c to continue or any key to exit.";
    }
    while(getch()=='c');
}
