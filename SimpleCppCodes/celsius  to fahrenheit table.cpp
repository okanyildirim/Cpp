#include <iostream>

using namespace std ;

int main () {
	
float x,y,F ;

cout << "�lk Celsius derecesini giriniz:";
cin >> x ;
cout << "�kinci Celsius derecesini giriniz:" ;
cin >> y ;

if(x<y) {
	
	for (x;x<=y;x=x+5){
		
	F= (x*1.8)+32 ;
	cout << x  << "=========>";
	cout << F << endl;
	}
	
}
	else
	cout << "�lk degerin ikinci degerden buyuk olmasi gereklidir!!" ;
	
system ("pause") ;	
return 0 ;
	
	
	
}
