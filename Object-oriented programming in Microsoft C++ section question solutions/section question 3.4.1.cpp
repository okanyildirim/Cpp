#include <iostream >

 using namespace std;

 int main ()
 {
 int n ;
 
 while(5){
 cout << "Enter n:";
 cin >> n;
 cout << ((n>=0 && n%5==0) ? n/5 : -1 )<< endl;
}
 system("pause");
 return 0;
 }

