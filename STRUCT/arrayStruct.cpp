#include <iostream>

using namespace std;

struct Mahasiswa{
	int npm;
	string nama;
	string kelas;
	
};

int main() {
	Mahasiswa data[2];
	
	cout<<"Data Mahasiswa : "<<endl;
	for(int i=0; i<2; i++){
		cout<<"Masukan Data ke -"<<i+1<<endl;
		cout<<"Masukan npm : ";
		cin>>data[i].npm;
		
		cout<<"Masukan nama : ";
		cin>>data[i].nama;
		
		cout<<"Masukan kelas : ";
		cin>>data[i].kelas;
		cout<<endl;
		
	}
	
	cout<<endl;
	
	int no = 1;
	
	for (int i=0; i<2; i++){
		cout<<"data ke - "<<no++<<endl;
		cout<<"NPM : "<<data[i].npm<<endl;
		cout<<"Nama : "<<data[i].nama<<endl;
		cout<<"Kelas : "<<data[i].kelas<<endl;
		
		cout<<endl;
	}
	
	cin.get();
}


