// Okan YILDIRIM  4074   2-I

#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int size =100;
int Max= 100;
class Queue{
	
	private:
		int head;
		int tail;
		char array[100];
		int number; // eleman number in the stack
	public:
	Queue(){
		head=-1;
		tail=-1;
		number=0;	
		}
	
	void enqueue(char data){
		
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
	bool isEmpty(){
		if(number==0)
		return true;
		else 
		return false;
	}
	char dequeue(){
	 
	static int temp=0;
	 if (temp==0){
	 temp++;	
	 return array[head];
	 }
	 
	 else {
	 	 if (isEmpty() || head==-1)
		{cout << "\n \n \tQueue is empty!!!";}
		
		else{
			
			head=(head+1)%Max;
			number--;
			
			return array[head];
			
			
			}
	
	 }
	
		
		}
};

class Stack {
	private:
		int top;
		char array[100];
		char data;
		
	public:
		
		    Stack();
	void	push(char pushed);
	char	pop();
	
};
Stack :: Stack (){
	top=-1;
}

void Stack :: push(char pushed){

	top++;
	array[top]= pushed;
}

char Stack :: pop(){
	data= array[top];
	top--;
	return data;
} 
int main(){
    string phrase;
    int length;
    int count=0;
	Stack firstArray;
	Queue secondarray;
	
	cout << "Enter a phrase for checking is it polindrom or not:";
	getline(cin,phrase) ;
    length = phrase.length();
	
	for(int i=0;i<length;i++){   // we take phrase's letter into stack
		
    firstArray.push(phrase[i]);
	}
	
	for (int i=0;i<length;i++){   // we take phrase's letter into queue
		
		secondarray.enqueue(phrase[i]);
	}
	
	
	
	for(int a=0;a<length;a++){
		if( secondarray.dequeue() == firstArray.pop()){
		count++;
		}
		
		}
		
	
	if(length == count){
			
			cout << "Your phrase is a polindrom :)\n";
		}
		else{
			cout << "Your phrase is not a polindrom :(\n";
		}
	
	system("Pause");
	return 0 ;
}

