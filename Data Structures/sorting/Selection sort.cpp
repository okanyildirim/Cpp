#include <iostream> 
#include <fstream>
#include <ctime>

using namespace std;
void swap( int &lhs, int &rhs )
{
int	tmp = lhs;
	lhs = rhs;
	rhs = tmp;
}
	void selectionSort(int numbers[], int n){
	clock_t start,finish;
	start=clock();
	
	
	for(int i=0;i<n-1;i++){
		int min=i;

	for(int j=i+1;j<n;j++){
		if(numbers[j]<numbers[min])
		min=j;
	}
	swap(numbers[i],numbers[min]);

}
	for(int k=0;k<n;k++)
	cout << numbers[k] << endl;
	
	finish=clock();
	cout << endl <<((double)finish-(double)start)/(double)CLOCKS_PER_SEC<<endl;

};

int main(){
clock_t x,y,z;
	int array[1000];
	int *arr;
	ifstream input("numbers.dat");
	int i=0;
	z=clock();
	while(input){
		input>>array[i];
		i++;
	}
	int j=0;
x=clock();
	//while(j<1000){
	//		cout << array[j]<<endl;
	//		j++;
	//}
y=clock();

 selectionSort(array,1000);
	


/*cout << "\n\nPassed time : " << ((double)y-(double)x)/(double)CLOCKS_PER_SEC<<endl;
	cout << (double)CLOCKS_PER_SEC << endl;
	cout << "\n\nPassed time2 : " << ((double)y-(double)z)/(double)CLOCKS_PER_SEC<<endl;
	cout << "Islem tamam\n";*/
	system ("PAUSE");
	return 0;
}
