#include <iostream>

using namespace std ;

int main () {
	
float x,y,F ;

cout << "Ýlk Celsius derecesini giriniz:";
cin >> x ;
cout << "Ýkinci Celsius derecesini giriniz:" ;
cin >> y ;

if(x<y) {
	
	for (x;x<=y;x=x+5){
		
	F= (x*1.8)+32 ;
	cout << x  << "=========>";
	cout << F << endl;
	}
	
}
	else
	cout << "Ýlk degerin ikinci degerden buyuk olmasi gereklidir!!" ;
	
system ("pause") ;	
return 0 ;
	
	
	
}
