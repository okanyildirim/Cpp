#include <iostream>
using namespace std;

int main(){
int N,x,max,min,i=1;
double sum=0;

cout << "Firstly,Enter how many number you write,then write your numbers\n";
cin >> N;
cin >> sum;
max=sum;
min=sum;

while(i<N) {
cin >> x;
sum+=x;
if (max<x){
	max=x ;
	}
if (x<min){
	min=x;
}
	
i++	;
}
	cout << "Mean is " << sum/N << endl ;
	cout << "Max number is " << max << endl ;
	cout << "Min number is " << min << endl;
	cout << "Range is "<< max-min << endl;
	
	system("Pause");
	return 0 ;

	
  




}
