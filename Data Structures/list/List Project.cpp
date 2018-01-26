#include <iostream>
using namespace std;

class Linkedlist{

private:
	int data;
public: 
Linkedlist* next;

Linkedlist(){
	int data=0;
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

class Functions{
	private:
		Linkedlist* first;
		Linkedlist* last;
	public:
	
	Functions(){
	first=last=NULL;
	}	
	 Functions(int number){
		Linkedlist* newnode= new Linkedlist(number);
		first=last= newnode;
	}
	
	void AddtoLast(int num){
		
		if(first==NULL){
			first= new Linkedlist(num);
			last=first;
		}
		else{
		 Linkedlist* newnode= new Linkedlist(num);
		 last->next= newnode;
		 last=newnode;	
		}	
	}
	void Insert(int x, int num){
		Linkedlist* temp = first;
     	Linkedlist* newnode= new Linkedlist(num);
		for(int i=2;i<x ;i++){
			temp=temp->next;
		}
		newnode->next=temp->next;
		temp->next = newnode;	
	}
	
	void DeleteFromHead(){	
	Linkedlist* temp= first;
	if(first==NULL)
	cout<< "List is empty!..\n";
	else{
		
		cout << endl << temp->showdata() <<" was deleted.\n";
		first =temp-> next; 
		delete temp;
	}	
		
	}
	void DeleteFromLast(){
		Linkedlist* temp;
		Linkedlist* deleted;
		temp=first;
		if(temp!=NULL){
					if(temp->next==NULL){
				first = NULL;
				last = NULL;
				cout << "\nThe last element " << temp->showdata() <<  " was deleted!! \n";
				delete temp;
			}
			else{
			while(temp->next->next!=NULL){
				temp=temp->next;
			}
			deleted=temp->next;
			temp->next=NULL;
			last=temp;
			cout <<endl<<  deleted->showdata() << " was deleted.\n";
			delete deleted;
			}
	}		
			else{
				cout << "There is no element!!\n";
			}
		
	}
		
	void Delete(int x){
		Linkedlist* temp=first;
		Linkedlist* deleted;
		if(first==NULL)
	    cout<< " \n\n\tList is empty!..\n";
		
		else {
			for(int i=2;i<x;i++)
		temp=temp->next;
		
	deleted=temp->next;
	temp->next=temp->next->next;
	cout << deleted->showdata() << " was deleted.\n";
	delete deleted;
		}
}


    void AddtoHead(int num ){
    	Linkedlist* temp= first;
		if(first==NULL){
			first= new Linkedlist(num);
		}
		else{
		 Linkedlist* newnode= new Linkedlist(num);
		 first=newnode;
		 newnode->next=temp;
		}	
    	
    }
    
    void Search(int num){
         int count=1;
    	Linkedlist* temp=first;
    	while(temp->next!=NULL && temp->showdata()!=num){
    
		temp=temp->next;
    	count++;
    		
    	}
    	if(temp->showdata()==num){
	cout << endl << num << " was found in " << count <<". node...\n";
    }
    
    else{
	 cout << endl << num << " was not found in list.\n";
    }
    }
   
    
    
     void Display(){
		Linkedlist* temp = first;
	    if(temp!=NULL){
		while(temp!=NULL){
			cout << endl << temp->showdata()<<endl;;
			temp=temp->next;
		}
	}
	    else{
		cout <<"\n\n\n\t There is no element!!\n";
       	}
}
};

int main (){
	int ch,data1,order;
    Functions nodes;
	Linkedlist *temp;
    while(1){
    cout << "\n \n \t Please select your choice \n\n "
	"1_Add to Last \n 2_Add to Head \n 3_Insert\n 4_Delete from Head \n 5_Delete From Last\n 6_Delete \n 7_Search\n 8_Display\n 9_Exit \n ";
	cin >> ch;
    	switch(ch){
    	
		case 1: cout << "\n \n \t Enter the number you want to add:";
		         cin >> data1;
		         nodes.AddtoLast(data1);     
		break;
		
		case 2:  cout << "\n \n \t Enter the number you want to add:";
		         cin >> data1;
		         nodes.AddtoHead(data1);   
		break;
		
		case 3:	 
		         cout <<"\n \n \t Enter the number you want to add:";
		         cin >> data1;
		         cout << "\n \n \t What is your number's order:";
		         cin >>order;
		         nodes.Insert(order,data1);   
		break;
		
		case 4:nodes.DeleteFromHead();
		
		break;
		
		case 5:nodes.DeleteFromLast();
	
		break;
		
		case 6: cout << "\n \n \t What is your number's order:";
		        cin >>order;
		
		       nodes.Delete(order);
	
		break;
		
		case 7:  cout << "\n \n \t Enter the number you want to search:";
		         cin >> data1;
		        nodes.Search(data1);
	
		break;
	
		case 8:nodes.Display();
	
		break;
		
		case 9:	
		exit(0);
		
		break;
		
		default:cout << "\n \n \tYour enter choice incorrectly. Please enter again:\n";
		
    		
    	}
    	
    }
	
	system("Pause");
	return 0;
}

