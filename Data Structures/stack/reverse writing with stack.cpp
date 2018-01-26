#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;
class Stack{
	static const int MAX=800;
	char st[MAX];
	int top;
	public:
		Stack(){
		top=0;		
		}
		
		void push(char writing[]){
			if(top==MAX){
				cout << "You can't write out of limits\n";
			}
			else if(top < MAX){
				cout << strlen(writing);
				for(int i=0; i<strlen(writing); i++){
					st[++top]=writing[i];	
				}				
			}			
		}
		void pop(){
			if(top==0){
				cout << "Stack is empty\n";				
			}
			else{
				bool temp=0;
				for(int i=1, j=top; i<=top/2; i++, j--){
					if(st[i] != st[j]){
						temp=1;
					}
				}
				if(temp==1){
					cout << "It's not a polindrom!";
				}
				else if(temp==0){
					cout << "It's a polindrom!";
				}
				cout << endl << endl;
				while(top>0){
				cout << st[top--]; 				
			}
			cout << endl;
			
		}
		 
		}
		void showtop(){
			cout << top << endl;
		}
};

int main(){
	Stack s1;
	string writing;
	char character;
	char temp[80];
	do{
		cout << "To write please enter \"W\" \n";
		cout << "To see reverse that you write please enter \"S\" \n";
		
		character=getch();
		
		if(character == 'W' || character == 'w'){
			cout << "\nPlease write something:";
			gets(temp);
			s1.push(temp);

        }
        else if(character=='S' || character == 's'){
        	 s1.pop();
        }
        cout << endl;
        
        }while(character !='E' && character != 'e');
	system("pause");
	return 0;
}
