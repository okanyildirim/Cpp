// OKAN   YILDIRIM
// HARP 3\S  4074

#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

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

int main(){
clock_t insertion_start, insertion_finish, merge_start, merge_finish,insertion_start1, insertion_finish1;	
int array[1000];
ifstream input("numbers.dat");    // Okuttuðum dosyada 0 ile 10000 arasýnda karýþýk bir þekiþlde 1000 sayý var.
	int i;
	while(input){
	
	input >> array[i];	
		i++;
	}
	cout << endl <<endl<< endl<< "     ==========================Insertion Sorting==========================\n\n";  
	insertion_start= clock();
	insertionSort(array,1000);
	insertion_finish=clock();        // insetion sortun süresini hesaplanýyor
	
	
	cout << endl <<endl<< endl<< "        ==========================Merge Sorting==========================\n\n";  
	
	merge_start=clock();
    mergesort(array,0,1000);
    for(int k=0;k<1001;k++)                 // burada dizi içerisinde sayýlar sýralanýyor
    cout << array[k] <<" ";  
	merge_finish=clock();                 // merge sortun süresini hesaplanýyor
    
	cout << endl <<endl<< endl<< "     =======================Insertion Sorting - Best Case====================\n\n";  
	insertion_start1= clock(); 
	insertionSort(array,1000);             // sýralý  gelen dizinin insertion sortta sýralanmasý best case dir.
	insertion_finish1=clock();              // insertion sortun best case süresi hesaplanýyor
	cout << endl <<endl<< endl<< "        ========================== Finish ==========================\n\n"; 

	 cout << "\n\n\t\t\t\t" <<"Insertionsort time: " << ((double)( insertion_finish-insertion_start))/(double)CLOCKS_PER_SEC<<endl;
     cout << "\n\n\t\t\t\t" <<"Mergesort time: " <<((double)( merge_finish-merge_start))/(double)CLOCKS_PER_SEC<<endl;
    	cout << "\n\n\t\t\t\t" <<"Insertionsort (best case) time: " << ((double)( insertion_finish1-insertion_start1))/(double)CLOCKS_PER_SEC<<endl;
	
	system ("Pause");
	return 0;
}
                            /*  Geçen zaman sýralamasý ----> Ýnsertionsort > Ýnsertionsort(best case) > Mergesort
                                           
                               Programý her çalýþtýrmamda süreler farklý gelse de genel olarak sonuç yukarýdaki gibi çýkýyor */
                                           
    
