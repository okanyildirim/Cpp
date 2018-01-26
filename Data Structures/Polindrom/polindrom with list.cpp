// Okan YILDIRIM  4074   2-I
#include <iostream>
#include <string>
#include <string.h>

int size=100;
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
	Linkedlist(char number){
		
		data=number;
		next=NULL;
		
	}
	int showdata(){
		return data;
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
		StackFunctions(char num){
		Linkedlist* node=new Linkedlist(num);
		first=last=node;
		
	}
	void AddtoLast(char num){
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
	char DeleteFromLast(){
		Linkedlist* temp;
		Linkedlist* deleted;
		temp=first;
	if(temp!=NULL){
					if(temp->next==NULL){
				first = NULL;
				last = NULL;
				return temp->showdata();
			}
			else{
			while(temp->next->next!=NULL){
				temp=temp->next;
			}
			deleted=temp->next;
			temp->next=NULL;
			last=temp;
			return deleted->showdata();
			}
	}		
			else{
				cout << "There is no element!!\n";
			}
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
	QueueFunctions(char number){
		Linkedlist* newnode= new Linkedlist(number);
		first=last=newnode;
	}
	
	void AddtoLast(char num){
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
	char DeleteFromHead()	{
		Linkedlist* temp = first;
		
		if(first!=NULL){
	  	first=first->next;
	  	return temp->showdata();
		}
		else{
			cout << "There is no element!!\n";
		}
	}
	
};

int main(){
	char phrase[size];
	int length;
	int count=0;
	StackFunctions firstArray;
	QueueFunctions secondarray;
	cout << "Enter a phrase for checking is it polindrom or not:";
	cin >>phrase;
    length = strlen(phrase);
    
    for(int i=0;i<length;i++){
    	firstArray.AddtoLast(phrase[i]);  // we take phrase's letter into stack
    }
	
    for (int i=0;i<length;i++){   // we take phrase's letter into queue
		
		secondarray.AddtoLast(phrase[i]);
	}
	
	for (int i=0;i<length;i++){
		if(firstArray.DeleteFromLast()==secondarray.DeleteFromHead())
		count++;
	}
	if(length==count){
		cout << "Your phrase is a polindrom :)\n";
	}
	else{
		cout << "Your phrase is not a polindrom :(\n";
	}
	system("Pause");
	return 0;
}
