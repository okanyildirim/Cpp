# include <iostream >

 using namespace std;

 int main ()
 {
 int N ;
 cout << " Enter a N for compute N's factorial : ";
 cin >> N ;
 
 switch (N) {
 	
 	case 0: cout << "1\n";
 	    break;
 	case 1 :cout << "1\n";
 		break;
 	case 2 :cout << "2\n";
 		break;
	case 3 :cout << "6\n";
		break;
	case 4 :cout << "24\n";
		break;
	case 5 :cout << "120\n";
		break;
	case 6 :cout << "720\n";
		break;
	case 7 :cout << "5040\n";
		break;
	case 8 :cout << "40320\n";
		break;
	case 9 :cout << "362880\n";
		break;
 	case 10 :cout << "3628800\n";
 		break;
 	default : cout << "This program able to compute just factarial of numbers from 0 to 10 \n";
 }	
 	system("pause");
 	return 0;	
 	
}
 
