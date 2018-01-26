#include <iostream >

 using namespace std;

 int main ()
 {
 int n ;
 
 while(5){
 cout << "Enter n:";
 cin >> n;
 if(n<0 || n%5!=0){
 continue;
 }
 else{
  cout << n/5 << endl ;
 }

 }

 system("pause");
 return 0;

}
