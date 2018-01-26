#include <iostream>

using namespace std;

int main () {
	
	int pay1,payda1,pay2,payda2, sadepay, sadepayda ,obeb;  // Sayi degiskenleri.
	char karakter,func,res;  // Komut degiskenleri.
	do {    // Devam etme dongusu.
		cout << "Giris Yapiniz :  ";
		cin >> pay1 >> karakter >> payda1 >> func >>pay2 >> karakter >> payda2 ;
		while ((karakter != '/') || (payda1 == 0) || (payda2 == 0) ) {  // Payda ve karakter kontrolu.
			cout << "Payda sifir yada bolme karakteri girilmedi \n ";
			cout << "Giris Yapiniz :  ";
			cin >> pay1 >> karakter >> payda1 >> func >>pay2 >> karakter >> payda2 ;
		}
		switch(func){       // Matematiksel islem kontrolu.

			case '+' : { // Toplama islemi.

				for(int i=1; i<=((pay1*payda2)+ (pay2*payda1))&& i<=((payda1*payda2));i++){
					if(((pay1*payda2)+ (pay2*payda1))%i==0 && ((payda1*payda2))%i == 0 ){
						obeb=i;
					}
				}

				sadepay = (((pay1*payda2)+ (pay2*payda1)) / obeb); // Pay icin sadeletirme islemi.
				sadepayda = (((payda1*payda2)) / obeb);   //// Payda icin sadeletirme islemi.

				cout << "Toplama islemini sectiniz : \n Sonuc : " << sadepay << karakter << sadepayda ;
				cout << "\n Baska islem yapmak istermisiniz ? [y/n] : "; 
				cin >> res;

			break;} 

			case '-' : { // Cikarma islemi.

				for(int i=1;i<=(((pay1*payda2) - (pay2*payda1)))&&i<=((payda1*payda2));i++){
					if(((pay1*payda2) - (pay2*payda1))%i==0 && ((payda1*payda2))%i == 0 ){
						obeb=i;
					}
				}
				sadepay = (((pay1*payda2) - (pay2*payda1)) / obeb); // Pay icin sadeletirme islemi.
				sadepayda = (((payda1*payda2)) / obeb);   //// Payda icin sadeletirme islemi.
				
				cout << "Cikarma islemini sectiniz : \n Sonuc : " << sadepay << karakter << sadepayda ;
				cout << "\n Baska islem yapmak istermisiniz ? [y/n] : ";
				cin >> res;
			break;}   

			case '*' : { // Carpma islemi.

				for(int i=1;i<=((pay1*pay2))&&i<=((payda1*payda2));i++){
					if((pay1*pay2)%i==0 && ((payda1*payda2))%i == 0 ){
						obeb=i;
					}
				}
				sadepay = ((pay1*pay2) / obeb); // Pay icin sadeletirme islemi.
				sadepayda = ((payda1*payda2) / obeb);   //// Payda icin sadeletirme islemi.
				
				cout << "Carpma islemini sectiniz : \n Sonuc : " << sadepay << karakter << sadepayda ;
				cout << "\n Baska islem yapmak istermisiniz ? [y/n] : ";
				cin >> res;
			break;}  

			case '/' : { // Bolme islemi.

				for(int i=1;i<=((pay1*payda2))&&i<=((payda1*pay2));i++){
					if((pay1*payda2)%i==0 && ((payda1*pay2))%i == 0 ){
						obeb=i;
					}
				}
				sadepay = ((pay1*payda2) / obeb); // Pay icin sadeletirme islemi.
				sadepayda = ((payda1*pay2) / obeb);   //// Payda icin sadeletirme islemi.
				
				cout << "Bolme islemini sectiniz : \n Sonuc : " << sadepay << karakter << sadepayda ;
				cout << "\n Baska islem yapmak istermisiniz ? [y/n] : ";
				cin >> res;
			break;}    

			default : { // Tanýmsýz komut islemi.

				cout << "\n Komut anlasilmadi. Baska islem yapmak istermisiniz ? [y/n] : ";
			cin >> res; }  

		}
	}
	while ( res == 'y');  // Basa donme sartý.

	cout << "\n Bizi tercih ettiginiz icin tesekkur ederiz... ";
	
	system ("Pause");
	return 0;
}

