#include <iostream>

using namespace std;

struct Mahasiswa{
	
	int npm;
	string nama;
	string kelas;
	
};

int main() {
	Mahasiswa data1;
	
	data1.npm = 5520125028;
	data1.nama = "Samsul Bahtiar";
	data1.kelas = "IF A 25";
	
	cout<<"Data mahasiswa : "<<endl;
	cout<<"NPM : "<<data1.npm<<endl; 
	cout<<"nama : "<<data1.nama<<endl; 
	cout<<"kelas : "<<data1.kelas<<endl;
	
}
