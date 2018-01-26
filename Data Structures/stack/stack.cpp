#include <iostream>
#include <conio.h>
using namespace std;
;
class Stack{
	
	private :
	
		int size;
		int data;
		int *array;
		int top;
	public :
		
		Stack (int top);
		void push(int pushed);
		void pop();
		void display();
		
};

Stack :: Stack(int size1){
	top=-1;
	size=size1; // size1= size that entered by user
	array = new int[size1];
}

void Stack :: push(int pushed){
    cout << "\n \n \t Enter your number push onto stack:";
		cin >> pushed;
	if(size==(top+1)){
		
		cout << "\n \n \t The stack is full!!";
	}
	else{
	top++;
		array[top]=pushed;
		
	}

}

void Stack :: display(){
	if(top==-1){
	cout << "There is no element in stack!!";
}
    else{
	
		for(int i=top;i>=0;i--){
		cout << "\n\n\t"<<array[i]<<"\n";
	}

    }

}
void Stack :: pop(){
	
    if(top==-1){
	cout << "You can not pop. There is no element in stack!!";
	}
	else{
	data = array[top];
	top --;
	}
}	

int main(){
	int size2,ch;
	cout << "\n\n\t Enter the size of the array:";
	cin >>size2;
	
	Stack fistArray(size2);
	
		while(1) {
		int ch,pushed,popped;
		cout << "\n \n \t Please select your choice \n\n 1_Push \n 2_Pop \n 3_Display \n 4_Exit \n";
	
	     cin>>ch;
		switch (ch){
			
		case 1 :
	
		fistArray.push(pushed);
		break;
		
		case 2:
		
		fistArray.pop();
		break;
		
		case 3:
		fistArray.display();
		break;
		
		case 4:
		exit(0);
		break;
		
		default : cout << "\n \n \t You enter the number incorrectly!!";
		}
	
	}
	
	system("Pause");
	return 0;
}
