#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
	
	char sifre[8];
	int sonuc, hak=3;
	
	
	
	while(hak>0){
		cout<< "Sifreyi yazisniz:";
		cin >> sifre;
		
		sonuc = strcmp (sifre,"com271AB");
		hak--;
		if(sonuc==0){
		puts("Sifre dogru");
		break;
		}	
		else
		puts("Sifre yalnis");
	}
	
system ("Pause");
return 0;	
}
