#include <iostream>
#include <conio.h>

using namespace std;

class Node{
	int veri;
	public:
		Node *pSonraki;
		
		Node(){
			veri=0;
			pSonraki=NULL;
		}
		Node(int gelen){
			veri=gelen;
			pSonraki=NULL;
		}
		
		int al(){
			return veri;
		}
};

class NodeFonk{
	
	public:
		Node *bas;
		Node *son;
		
		NodeFonk(){
			bas=NULL	;
			son=NULL;
		}
		
		NodeFonk(int yeni){
			Node *p = new Node(yeni);
			bas=son=p;
		}
	
	void sonaekle(int yenieklenen ){
		
		if(bas==NULL){
			bas = new Node(yenieklenen);
			son = bas;
		}
		else{
			Node *p = new Node(yenieklenen);
			son->pSonraki=p;
			son = p;
		}
		}
		Node *sondansil (){
			Node *temp, *silinecek;
			temp = bas;
			
			if(temp!=NULL){
				
				if(temp->pSonraki==NULL){
				son = NULL;
				bas = NULL;
				cout << "\nSon eleman " << temp->al() <<  " silindi! Liste Bos!..\n\n";
				return temp;
			}
			
			while(temp->pSonraki->pSonraki!=NULL){
				temp=temp->pSonraki;
			}
			
			silinecek = temp->pSonraki;
			temp->pSonraki=NULL;
			son = temp;
			cout << endl << "Eleman " << silinecek->al() << " silindi...\n" << endl;
			return silinecek;
			
			}
			else{
				cout << "\nListe Bos!..\n\n";
			}
		}
		Node *bastancikar(){
			Node *temp;
			temp = bas;
			
			if(temp!=NULL){
			cout << endl << "Eleman " << temp->al() << " silindi...\n" << endl;
			bas=bas->pSonraki;
			return temp;
		}
		else{
				cout << "\nListe Bos!..\n\n";
		}
		}
		void goster(){
			Node *temp;
			temp = bas;
			
			if(temp!=NULL){
			
			while(temp!=NULL){
			cout << endl << temp->al() << endl;
			temp = temp->pSonraki;
			}
			cout << endl;
			}else{
				cout << "\nListe Bos!..\n\n";
			}
		}
};

int main(){
	NodeFonk nf;
	char x;
	Node *temp;
	int sayi;
	do{
		cout << "Sona eklemek icin E\'ye bas\n";
		cout << "Sondan silmek icin S\'ye bas\n";
		cout << "Bastan silmek icin B\'ye bas\n";
		cout << "Listelemek icin L\'ye bas\n";
		cout << "Cikmak icin C\'ye bas\n";
		x = getch();
		
		if(x == 'E' || x == 'e'){
			cout << "\nEklemek istediginiz sayiyi giriniz:";
			cin >> sayi;
			cout << endl;
			nf.sonaekle(sayi);	
		}
		if(x == 'S' || x == 's'){
			
			temp = nf.sondansil();
			delete temp;
		}
		if(x == 'B' || x == 'b'){
			temp = nf.bastancikar();
			delete temp;
		}
		if(x == 'L' || x == 'l'){
			nf.goster();
		}
		
	}while(x!= 'C' && x!= 'c');
	system("pause");
	return 0;
}
