#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
    
};

void traverseNext(struct Node *temp);
void traversePrev(struct Node *temp);
void traverseDouble(struct Node *temp);

 
int main(){
	Node *node1 = NULL;	
	Node *node2 = NULL;	
	Node *node3 = NULL;
	
	node1 = new Node;
	node2 = new Node;
	node3 = new Node;
	
	node1->data = 10;
	node1->next = node2;
	node1->prev = NULL;
	
	node2->data = 20;
	node2->next = node3;
	node2->prev = node1;
	
	node3->data = 30;
	node3->prev = node2;
	node3->next = NULL;
	
	cout<<"data single linked list next "<<endl;
	
	traverseNext(node1);
	cout<<endl;
	cout<<"data single linked list prev  "<<endl;
	traversePrev(node3);
	
	cout<<endl;
	cout<<"data double linked list "<<endl;
	traverseDouble(node1);
	
}

void traverseNext(struct Node *temp)
{
	
	int i = 0;
	while (temp != NULL ){
	cout<< "data ke "<<i+1<< " : ";
	
    cout<<temp->data;
	temp = temp->next;
	cout<<endl;
	i++;
	}
	cout << "Jumlah data: " << i << endl;

}

void traversePrev(struct Node *temp){
	int i = 4;
	int j = 0;
	while(temp != NULL) {
		cout<<"data ke "<<--i<< " : "<<temp->data<<endl;
		temp = temp->prev;
		j++;
	}
	cout<<"Jumlah data: "<< j <<endl;
}

void traverseDouble(struct Node *temp){
	int i = 0;
	int j = 0;
	
	Node *bantu = NULL;
	
	while (temp != NULL ){
	cout<< "data ke "<<i+1<< " : ";
	    cout<<temp->data;
		bantu = temp;
		temp = temp->next;
		cout<<endl;
	i++;
	}
	
	while(bantu != NULL) {
		cout<<"data ke "<<i<< " : "<<bantu->data <<endl;
		bantu = bantu->prev;
		--i;
	}
	
}
