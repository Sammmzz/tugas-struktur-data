#include <iostream>

using namespace std;

string dokumen[5]; 

int top = -1;
int low = -1;

void pushDokumen(string text) {
	if(top == -1){
		dokumen[++top] = text;
		low ++;	
	}else {
		dokumen[++top] = text;
	}
	
	
}

void undo(){
	if(top == -1){
		cout<<endl;
		cout<<"Dokumen Kosong"<<endl<<endl;
	}else {
		dokumen[top--] = " ";
	}	
}

void tampilkan () {
	if(top == -1){
			cout<<endl;
			cout<<"Dokumen Kosong"<<endl;
			cout<<endl;
		}else {
			cout<<endl;
			cout<<"Isi dokument : "<<endl;
			for(int i = low ; i <= top; i++ ){
				cout<<dokumen[i]<< " ";
			}
		}cout<<endl<<endl;
}

void pilihMenu() {
	string text;
	int pilih;
	do {
	cout<<"==== TEXT EDITOR ====="<<endl;
	cout<<"1. Ketik Teks"<<endl;
	cout<<"2. Undo"<<endl;
	cout<<"3. Tampilkan Dokumen"<<endl;
	cout<<"4. Keluar"<<endl;
	
	cout<<"Pilih : ";
	cin>>pilih;
	
	if(pilih == 1) {
		
		
		cout<<endl;
		cout<<"Ketikan Text : ";
		cin.ignore();
		getline(cin, text);
		
		pushDokumen(text);
		
		cout<<endl;
		
	}else if(pilih == 2){	
		undo();
		
	}else if(pilih == 3){
		tampilkan();
	}
	
	}while(pilih != 4);
	
}

int main () {
	pilihMenu();	
}
