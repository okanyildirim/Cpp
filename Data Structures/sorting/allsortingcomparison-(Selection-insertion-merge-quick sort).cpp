#include <iostream> 
#include <fstream>
#include <ctime>

using namespace std;
void swap( int &num1, int &num2 )
{
int	tmp = num1;
	num1 = num2;
	num2 = tmp;
}
void selectionSort(int numbers[], int n){
for(int i=0; i< n-1; i++)   
    {
	
         int min= i;
        for(int j=i+1; j< n; j++)
		{
             if(numbers[j]<numbers[min])
                 min= j;
           
         }
         	swap(numbers[i],numbers[min]);
     }
     for(int k=0;k<1000;k++)
	cout << numbers[k] << " ";
}

void insertionSort(int numbers[], int n)
{
	
   for (int i = 1; i < n; i++)
   {
      for (int j=i; j>0 && numbers[j] < numbers[j-1]; j--){
       int tmp = numbers[j-1];
	  numbers[j-1]= numbers[j]   ;
         numbers[j] = tmp;
   }
      }
	for(int k=0;k<1000;k++)
	cout << numbers[k] << " ";
}
void merge(int numbers[],int ilk,int orta,int son)
{
	int tempArray[1000];
	int ilk1=ilk;
	int son1=orta;
	int ilk2=orta+1;
	int son2=son;
	int index=ilk1;
	for(;(ilk1<=son1)&&(ilk2<=son2);++index){
		if(numbers[ilk1]<numbers[ilk2]){
			tempArray[index]=numbers[ilk1];
			++ilk1;
		}
	    else{
	    	tempArray[index]=numbers[ilk2];
	    	++ilk2;
	    }
	}


for(;ilk1<=son1;++ilk1,++index)
tempArray[index]=numbers[ilk1];
for(;ilk2<=son2;++ilk2,++index)
tempArray[index]=numbers[ilk2];
for(index=ilk;index<=son;++index)
numbers[index]=tempArray[index];
}

void mergesort(int numbers[],int ilk,int son){
	if(ilk<son){
		int orta =(ilk+son)/2;
		mergesort(numbers,ilk,orta);
		mergesort(numbers,orta+1,son);
		merge(numbers,ilk,orta,son);
	}
	 
}

void quicksort(int numbers[],int left,int right){
    int i=left, j=right;
    int tmp;
    int pivot = numbers[(left+right)/2];

    while (i <=j){
        while (numbers[i] < pivot)
            i++;
        while (numbers[j] > pivot)
            j--;
        if(i <= j){
            swap(numbers[i],numbers[j]) ;
            
            i++;
            j--;
        }
    }
    if(left < j)
        quicksort(numbers,left,j);
    if(i < right)
        quicksort(numbers,i,right);
        
}


int main(){
 clock_t  Selectionstart, Selectionfinish,Insertionstart,Insertionfinish,Mergestart,Mergefinish, Quickstart,Quickfinish;
	int array[1000];
	ifstream input("numbers.dat");
	int i=0;
	while(input){
		input>>array[i];
		i++;
	}
	
	int array2[1000];
	ifstream input2("numbers.dat");
	int j=0;
	while(input2){
		input2>>array2[j];
		j++;
	}

	
cout << endl <<endl<< endl<< "     ==========================Selection Sorting==========================\n\n";  	
 Selectionstart=clock();
 selectionSort(array,1000);
 Selectionfinish=clock();
  cout << endl <<endl<< endl<< "     ==========================Insertion Sorting==========================\n\n";  
 
 Insertionstart=clock();
 insertionSort(array,1000);
 Insertionfinish=clock();
  cout << endl <<endl<< endl<< "        ==========================Merge Sorting==========================\n\n";  

 Mergestart=clock();
 mergesort(array,0,1000);
 for(int k=0;k<1001;k++)
 cout << array[k] <<" ";   
 Mergefinish=clock();
cout << endl <<endl << endl<< "        ==========================Quick Sorting==========================\n\n";         
  

 Quickstart=clock();
 quicksort(array2,0,1000);     // array2 kullanmamýn sebebi mergesorttan sonra ilk array sýralanmýþ oluyor.
 for(int k=0;k<1000;k++)
 cout << array2[k] << " ";    
 Quickfinish=clock();
 
 cout << "\n\n\t\n\n\t\t\t\t" <<"Selectionsort time: " << ((double)( Selectionfinish-Selectionstart))/(double)CLOCKS_PER_SEC<<endl;
 cout << "\n\n\t\t\t\t" <<"Insertionsort time: " << ((double)( Insertionfinish-Insertionstart))/(double)CLOCKS_PER_SEC<<endl;
 cout << "\n\n\t\t\t\t" <<"Mergesort time: " <<((double)( Mergefinish-Mergestart))/(double)CLOCKS_PER_SEC<<endl;
 cout << "\n\n\t\t\t\t"<<"Quicksort time: " <<((double)( Quickfinish-Quickstart))/(double)CLOCKS_PER_SEC<<endl<< endl;
 

	system("pause");
	return 0;
}
