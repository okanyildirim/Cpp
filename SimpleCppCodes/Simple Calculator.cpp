#include <iostream>
using namespace std;
/* OKAN YILDIRIM
   2-I      4074 */
int main () {
	
	int x,m,n ;
	float a,b;
	char h ;
   cout << "\t HESAP MAKINESI\n";
  
   while(h!='h'){
   cout << "Lutfen yapmak istediginiz islemi seciniz\n" ;
   cout << "1_Toplama\n2_Cikarma\n3_Carpma\n4_Bolme\n5_Ortalamasini alma\n6_ Mod alma\n"  ;
   cin >> x;
   
   switch(x) {
   	
   	         case 1: cout << "Ilk sayiyi giriniz:" ;
   	                 cin >> a ;
   	                 cout << "Ikinci sayiyi giriniz:" ;
   	                 cin >> b ;
   	                 cout << "Sonuc:" << a+b << "\nDevam etmek icin 'E' tusuna kapatmak icin 'H' tusuna basiniz\n" ;
   	                 cin >> h;
					 break;
   	
   	         case 2: cout << "Ilk sayiyi giriniz:" ;
   	                 cin >> a ;
   	                 cout << "Ikinci sayiyi giriniz:" ;
   	                 cin >> b ;
   	                 cout << "Sonuc:" << a-b << "\nDevam etmek icin 'E' tusuna kapatmak icin 'H' tusuna basiniz\n" ;
   	                 cin >> h;
					 break;
   	                 
   	         case 3: cout << "Ilk sayiyi giriniz:" ;
   	                 cin >> a ;
   	                 cout << "Ikinci sayiyi giriniz:" ;
   	                 cin >> b ;
   	                 cout << "Sonuc:" << a*b << "\nDevam etmek icin 'E' tusuna kapatmak icin 'H' tusuna basiniz\n" ;
   	                 cin >> h;
					 break;
   	 
   	         case 4: cout << "Bolunen sayiyi giriniz:" ;
   	                 cin >> a ;
   	                 cout << "Bolen sayiyi giriniz:" ;
   	                 cin >> b ;
   	                 cout << "Sonuc:" << a/b << "\nDevam etmek icin 'E' tusuna kapatmak icin 'H' tusuna basiniz\n" ;
   	                 cin >> h;
					 break;
   	                 
   	         case 5: cout << "Ilk sayiyi giriniz:" ;
   	                 cin >> a ;
   	                 cout << "Ikinci sayiyi giriniz:" ;
   	                 cin >> b ;
   	                 cout << "Sonuc:" << (a+b)/2 << "\nDevam etmek icin 'E' tusuna kapatmak icin 'H' tusuna basiniz\n" ;
   	                 cin >> h;
				   	 break;
					
   	         case 6: cout << "Ilk sayiyi giriniz:" ;
   	                 cin >> m ;
   	                 cout << "Ikinci sayiyi giriniz:" ;
   	                 cin >> n ;
   	                 cout << "Sonuc:" << m%n << "\nDevam etmek icin 'E' tusuna kapatmak icin 'H' tusuna basiniz\n" ;
   	                 cin >> h;
					 break;
   	                 
   	         default: cout << "Lutfen islemi dogru seciniz." << "\nDevam etmek icin 'E' tusuna kapatmak icin 'H' tusuna basiniz\n" ; 
				cin >> h ;      
   }
	 
   }

	return 0 ;
	
	
}
