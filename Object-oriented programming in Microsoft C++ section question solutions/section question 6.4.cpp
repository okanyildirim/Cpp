#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

class employee{
    int emp_num;
    float emp_comp;
public:
    void assign(int en, float ec){ emp_num=en; emp_comp=ec;}
    void disp() const { cout<<endl<<setw(25)<<emp_num<<setw(25)<<emp_comp;}
};

void main(void)
{
    employee x[3]; int a; float b;

    do{
        for(int i=0; i<3;){
            cout<<"Enter the employee "<<++i<<" number      : "; cin>>a;
            cout<<"Enter the employee "<<  i<<" compensation: "; cin>>b;
            x[i-1].assign(a, b);}
        cout<<setw(25)<<"employees number"<<setw(25)<<"employee's compensation";
        for(int j=0; j<3; j++) { x[j].disp();}
        cout<<"\n\n !Press c to continue or any key to exit."<<endl<<endl;
    }while(getch()=='c');
}
