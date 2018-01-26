//okan yýldýrým
#include <iostream>
using namespace std;
 const int Max=3;
class Queue{
	
	private:
		int head;
		int tail;
		int array[Max];
		int number; // element number in the stack
	public:
	Queue(int x, int y, int z){
		head=x;
		tail=y;
		number=z;	
		}
	
	void enqueue(int data){
		
		if (number>=(Max-1))
		cout << "\n \n \tThe queue is full!!!";
		
		if(number==0 || head==tail==-1 ) {
			head++;
			tail++;
			array[head]=array[tail]=data;
			number++;
		}
		
		else{
			tail = (tail+1)%Max;
			array[tail]=data;
			number++;
		}
		
	}
	void  getFront(){
		if(isEmpty() || head==-1)
		cout << "\n \n \tQueue is empty!!!";
	else
	cout << "\n\n\t" << array[head];
		
	}
	bool isEmpty(){
		if(number==0)
		return true;
		else 
		return false;
	}
	void dequeue(){
		
		if(isEmpty() || head==-1){
		
		cout << "\n \n \tQueue is empty!!!";
		}
		
		else{
			if(number==1){
				head=tail=-1;
				number--;
			}else{
			
			head=(head+1)%Max;
			number--;
			}
			}
	
		}
	void disp(){
		for(int i=0 ; i<Max; i++){
			cout << array[i] << endl;
		}
		cout << "head=" << head << "\t" << "tail=" << tail << "\t" << "count=" << number;
	}
};


int main(){
	
	int ch,data1;
	
	Queue first(-1,-1,0);
	while(1){
		
		cout << "\n \n \t Please select your choice \n\n 1_Enqueue \n 2_Dequeue \n 3_Get Front \n 4_Exit \n ";
	cin >> ch;
	
	switch(ch){
		case 1 : cout << "\n \n \t Enter the number you want to enqueue:";
		         cin >> data1;
		         first.enqueue(data1);
		break;
		
		case 2:  first.dequeue();
		 
		break;
		
		case 3: first.getFront();
		break;
		
		case 4: exit(0);
		case 5: first.disp();
		break;
		default : cout << "\n \n \tYour enter choice incorrectly. Please enrter again:";
		
	}
	}
	
	system("Pause");
	return 0;
}
