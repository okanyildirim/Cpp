#include<iostream>
#include<conio.h>
using namespace std;

int maxint(int arr[], int bound){
    int max=0;
    for(int j=1; j<bound; j++)
        if (arr[max]<arr[j]) max=j;
    return max;
}

void main(void)
{

    do{
        int a[100], i=1;
        cout<<"Enter numbers : ([0] to quit) "; cin>>a[0];
        while(a[i-1] || i==100) cin>>a[i++];
        cout<<"The maximum is: "<<a[maxint(a, i)];
        cout<<"\n\n !Press c to continue or any key to exit."<<endl<<endl;
    }while(getch()=='c');
}
