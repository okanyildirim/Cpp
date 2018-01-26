#include <iostream>
using namespace std;

int main(){
	
	int x,a,toplam,d;
	toplam=1;
	a=0;
	cout <<"Bu program girilen sayinin faktoriyelini alir \n";
    cout <<"Lutfen sayiyi giriniz:" ;
	cin >> x ;
   
    do{
    
    a++;
	toplam=a*toplam;
	
	}
   
   	while(a<x);
    		
   	cout << "sonuc:" << toplam << endl ;
    	
	
    system ("pause");
	return 0 ;
	
	
	
	
}
