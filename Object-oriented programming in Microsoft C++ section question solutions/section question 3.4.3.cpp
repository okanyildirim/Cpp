#include <iostream >

 using namespace std;

 int main ()
 {
 int n ;
 
 while(5){
 cout << "Enter n:";
 cin >> n;
 
 if(n%5>0){
 continue;
 }
 
 else if (n<0){
 
 break;
 }
 else {
cout << n/5 << endl ; 
}
}
 
 cout << "Goodbye!";
 

 return 0;
}
