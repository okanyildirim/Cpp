#include<iostream>
#include<conio.h>
using namespace std;

double power(double n, int p=2);
char   power(char   n, int p=2);
int    power(int    n, int p=2);
long   power(long   n, int p=2);
float  power(float  n, int p=2);

int main()
{
    char sep; int p=2; double d_n; char c_n; int i_n; long l_n; float f_n;

    do{
        cout<<"In [n^p] format;\n";
        cout<<"Enter a double type n : "; cin >>d_n>>sep>>p;
        cout<<"The power is "<<power(d_n, p)<<endl;
        cout<<"Enter a char type n   : "; cin >>c_n>>sep>>p;
        cout<<"The power is "<<power(c_n, p)<<endl;
        cout<<"Enter a int type n    : "; cin >>i_n>>sep>>p;
        cout<<"The power is "<<power(i_n, p)<<endl;
        cout<<"Enter a long type n   : "; cin >>l_n>>sep>>p;
        cout<<"The power is "<<power(l_n, p)<<endl;
        cout<<"Enter a float type n  : "; cin >>f_n>>sep>>p;
        cout<<"The power is "<<power(f_n, p)<<endl;
        cout<<"\n\n !Press c to continue or any key to exit."<<endl<<endl;
    }while(getch()=='c');
}

double power(double n, int p){ for(int ret=1; p>0; p--) ret*=n; return ret;}
char   power(char   n, int p){ for(int ret=1; p>0; p--) ret*=n; return ret;}
int    power(int    n, int p){ for(int ret=1; p>0; p--) ret*=n; return ret;}
long   power(long   n, int p){ for(int ret=1; p>0; p--) ret*=n; return ret;}
float  power(float  n, int p){ for(int ret=1; p>0; p--) ret*=n; return ret;}
