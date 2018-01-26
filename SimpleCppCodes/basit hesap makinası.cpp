#include <iostream>

using namespace std;

main () {
	
	float x,y;
   	int z;
	cout << "\tHESAP MAKINESI\n Lutfen ilk sayiyi giriniz:" ;
	cin >> x ;
    cout << " Ikinci sayiyi giriniz:" ;
	cin >> y ;	
	cout << " Yapicaginiz islemi seciniz:\n 1_Toplama\n 2_Cikarma\n 3_Carpma\n 4_Bolme\n 5_Ortalamasini alma\n" ;
	cin >> z ;
	
	switch(z) {
		
		case 1: cout << x+y <<"\n";
		break;
		
		case 2: cout << x-y <<"\n";
		break;
		
		case 3: cout << x*y <<"\n";
		break;
		
		case 4: cout << x/y <<"\n";
		break;
		
		case 5: cout << (x+y)/2 <<"\n";
		break;
		
		default: cout << "Lutfen islemi dogru seciniz!!\n";
	}

	system("pause");
	
	return 0 ;
	
}
