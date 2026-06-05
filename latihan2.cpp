#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
    
};

void traverseNext(struct Node *temp);
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
	node2->prev = node1;
	node2->next = node3;
	
	node3->data =30;
	node3->next = NULL;
	node3->prev = node2;
	
	cout<<"data single linked list  "<<endl;
	traverseNext(node1);
	
	cout<<endl;
	
	cout<<"data double linked list  "<<endl;
	traverseDouble(node1);	
	
}

void traverseDouble(struct Node *temp)
{
	int terbesar;
	int i = 0;
	Node *bantu = NULL;
	
	while (temp != NULL ){
		cout<< "data ke "<<i+1<< " : ";
	
	if (temp->data > terbesar) {
    	terbesar = temp->data;
    }
    
		cout<<temp->data;
		bantu = temp;
		temp = temp->next;
		cout<<endl;
		i++;
	}
	
	while (bantu != NULL){
		cout<<"Data ke "<< i << " : "<<bantu->data;
		bantu = bantu->prev;
		--i;
		cout<<endl;
	}cout<<endl;

	cout << "Terbesar adalah : " <<terbesar << endl;
}

void traverseNext(struct Node *temp)
{
	int terbesar = 0;
	int i = 0;
	while (temp != NULL ){
	cout<< "data ke "<<i+1<< " : ";
	
	if (temp->data > terbesar) {
    	terbesar = temp->data;
    }
    
	cout<<temp->data;
	temp = temp->next;
	cout<<endl;
	i++;
	}

	cout << "Terbesar adalah : " <<terbesar << endl;
}
