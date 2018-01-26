#include <iostream>
using namespace std;
void swap( int &num1, int &num2 ){
int	tmp = num1;
	num1 = num2;
	num2 = tmp;
}
void bubblesort(int array[]){
	bool swapped=true;
	while(swapped){
		swapped=false;
		for(int j=0;j<10;j++){
			if(array[j]>array[j+1]){
				swap(array[j],array[j+1]);
				swapped=true;
			}
		}
	}
}
int main(){
	int x=100,y=99;
	int array[10]={21,3,45,65,4,43,0,29,21,54};
	cout << "\n\n\t First time:";	
	for(int i=0;i<10;i++){
		cout << endl << array[i]<< endl;
	}
	cout << "\n\n\t Second time:";	
   	bubblesort(array);
   	for(int i=0;i<10;i++){
			cout << endl << array[i] << endl;
	}	
	system("Pause");
	return 0;
}
