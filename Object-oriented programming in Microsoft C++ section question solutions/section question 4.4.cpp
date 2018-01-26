# include <iostream >

 using namespace std;

 int main ()
 {
 short number ;
 cout << " Enter a number : ";
 cin >> number ;
 
 if(number<0){
 		cout << "Negative numbers are not used in factorial funtions";

 }
 else if (number>13){
	cout << "Program is not able to compute correctly the numbers than more than 13";
}
else {

 cout << "The factorial of " << number << " is ";
 int accumulator = 1;
 for (; number > 0; accumulator *= number --);
 cout << accumulator << ".\n";
}
 return 0;
 }
