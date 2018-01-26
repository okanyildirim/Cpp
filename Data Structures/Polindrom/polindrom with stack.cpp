#include <iostream>
#include <string>
#include <string.h>
using namespace std;
int size =100;
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
    char phrase[size];
    int length;
    int count=0;
	Stack firstArray;
	
	cout << "Enter a phrase for checking is it polindrom or not:";
	cin >> phrase;
    length = strlen(phrase);
	
	for(int i=0;i<length;i++){
		
    firstArray.push(phrase[i]);
	}
	
	for (int i=0;i<length;i++){
		if(phrase[i]== firstArray.pop()){
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
