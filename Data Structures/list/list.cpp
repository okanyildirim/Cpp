#include <iostream>
using namespace std;

class Linkedlist{
	private:
	int data;
	public:
	Linkedlist* next;
	
	Linkedlist(){
		data=0;
		next=NULL;
	}
	Linkedlist(int number){
		
		data=number;
		next=NULL;
		
	}
	int showdata(){
		return data;
	}	
};

class QueueFunctions{
	
	private:
		Linkedlist* first;
		Linkedlist* last;
	public:	
	QueueFunctions(){
		first=NULL;
		last=NULL;
	}
	QueueFunctions(int number){
		Linkedlist* newnode= new Linkedlist(number);
		first=last=newnode;
	}
	
	void AddtoLast(int num){
		if(first==NULL){
			first= new Linkedlist(num);
			last=first;
		}
		else{
			Linkedlist *newnode= new Linkedlist(num);
			last->next=newnode;
			last=newnode;
			
		}
	}
	void Display(){
		Linkedlist* temp = first;
	if(temp!=NULL){
		while(temp!=NULL){
			cout << endl << temp->showdata()<<endl;;
			temp=temp->next;
		}
	cout << endl;
	}
	else{
		cout <<" There is no element!!\n";
	}
	}	
	Linkedlist *DeleteFromHead()	{
		Linkedlist* temp = first;
		
		if(first!=NULL){
		cout << "\n" << temp->showdata() << " was deleted.";
	  	first=first->next;
	  	return temp;
		}
		else{
			cout << "There is no element!!\n";
		}
	}
	
};

class StackFunctions{
	private:
		Linkedlist* first;
		Linkedlist* last;
	public:
		StackFunctions(){
			last=NULL;
			first=NULL;
		}
		StackFunctions(int num){
		Linkedlist* node=new Linkedlist(num);
		first=last=node;
		
	}
	void AddtoLast(int num){
		if(first==NULL){
			first= new Linkedlist(num);
			last=first;
		}
		else{
			Linkedlist *newnode= new Linkedlist(num);
			last->next=newnode;
			last=newnode;
			
		}
	}
	Linkedlist *DeleteFromLast(){
		Linkedlist* temp;
		Linkedlist* deleted;
		temp=first;
	if(temp!=NULL){
					if(temp->next==NULL){
				first = NULL;
				last = NULL;
				cout << "\nThe last element " << temp->showdata() <<  " was deleted!! \n";
				return temp;
			}
			else{
			while(temp->next->next!=NULL){
				temp=temp->next;
			}
			deleted=temp->next;
			temp->next=NULL;
			last=temp;
			cout << deleted->showdata() << " was deleted.\n";
			return deleted;
			}
	}		
			else{
				cout << "There is no element!!\n";
			}
		
		
	
}
};

int main (){
	int ch,data1;
	QueueFunctions nodes;
	Linkedlist *temp;
	StackFunctions nodes1;
    while(1){
    cout << "\n \n \t Please select your choice \n\n "
	"1_Add to Last \n 2_Delete from Head(queue) \n 3_Display\n 4_Delete from Last(stack) \n 5_Exit \n ";
	cin >> ch;
    	switch(ch){
    	
		case 1: cout << "\n \n \t Enter the number you want to add:";
		         cin >> data1;
		         nodes.AddtoLast(data1);
		         nodes1.AddtoLast(data1);
		         
		break;
		case 2: temp = nodes.DeleteFromHead();
		delete temp;
			
		break;
		
		case 3:	nodes.Display();
		break;
		
		case 4:temp=nodes1.DeleteFromLast();
		delete temp;
		break;
		case 5:
			exit(0);
		break;
		default:cout << "\n \n \tYour enter choice incorrectly. Please enter again:\n";
		
    		
    	}
    	
    }
	
	system("Pause");
	return 0;
}
