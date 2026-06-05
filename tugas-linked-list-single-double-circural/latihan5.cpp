#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};

void tambahNode(Node *&head, int nilai) {
    Node *baru = new Node();
    Node *bantu = head;
    baru->data = nilai;
    baru->next = NULL;

    if (head == NULL) {
        head = baru;
        head->next = baru;
        head->prev = baru;
    } else {
        Node *temp = head->next;
        while(temp->next != head){
        	temp = temp->next;
		}
                
        temp->next = baru;
        
        
        baru->next = head;
        baru->prev = temp;
        head->prev = baru;
    }
}

void tampilkan(Node *head) {
    Node *temp = head;
	Node *bantu = head;
	Node *tail = head->prev;
	
	cout<< "Circural "<<endl;
	
	do { 
		temp = temp->next;
		cout<< temp->data << " -> ";
	}while(temp != head);
	cout<<"Kembali"<<endl;
	
	cout<<"Single linkedlist"<<endl;
	
	do {
		cout<<bantu->data << " -> ";
		bantu = bantu->next;
		if (bantu == tail){
			cout<<bantu->data << " " ;
		}
	}while(bantu != tail);
	
    cout << "Kembali" << endl;
}

int main() {
    Node *head = NULL;
    int n, nilai;

    cout<<"Masukkan jumlah data: ";
    cin>>n;

    for (int i = 0; i < n; i++) {
        cout<<"Masukkan nilai ke-" << i+1 << ": ";
        cin>>nilai;
        tambahNode(head, nilai);
    }
	cout <<endl;
	
    cout<<"Masukkan nilai yang ditambahkan di akhir: ";
    cin>>nilai;
    tambahNode(head, nilai);
    cout<<endl;

    cout<<"Data setelah ditambah di akhir: " <<endl;
    tampilkan(head);

    return 0;
}
