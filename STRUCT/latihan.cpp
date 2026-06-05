#include <iostream>

using namespace std;

struct Tanggal{
	int hari;
	string bulan;
	int tahun;
};

struct Alamat{
	string jalan;
	string kota;
	
};

struct Karyawan{
	string nama;
	int gaji;
	struct Tanggal tgl;
	struct Alamat almt;
};

int main () {
	Karyawan m1[2];
	
	cout<<"Data Karyawan"<<endl;
	
	for(int i=0; i<2; i++){
		cout<<"Masukan Data ke -"<<i+1<<endl;
		cout<<"Masukan nama : ";
		cin>>m1[i].nama;
		
		cout<<"Masukan gaji : ";
		cin>>m1[i].gaji;
		
		cout<<"Masukan alamat Jalan : ";
		cin>>m1[i].almt.jalan;
		
		cout<<"Masukan alamat kota : ";
		cin>>m1[i].almt.kota;
		
		cout<<"Masukan Hari : ";
		cin>>m1[i].tgl.hari;
		
		cout<<"Masukan bulan : ";
		cin>>m1[i].tgl.bulan;
		
		cout<<endl;
		
	}
	
	
	for(int i = 0; i<2; i++){
	
	cout<<"Nama Karyawan : "<<m1[i].nama<<endl;
	cout<<"Tanggal Masuk : "<<m1[i].tgl.hari<<" "<<m1[i].tgl.bulan<<" "<<m1[i].tgl.tahun<<endl;
	cout<<"Alamat : "<<m1[i].almt.jalan<<" "<<m1[i].almt.kota<<endl;
	cout<<"Gaji Perbulan : Rp. "<<m1[i].gaji<<endl;
	
	}
	
	
	
	
	
	
	
		
//	m1.nama = "Andri";
//	m1.gaji = 2750000;
//	m1.tgl.hari = 01;
//	m1.tgl.bulan = "Februari";
//	m1.tgl.hari = 02;
//	m1.almt.jalan = "Jl. M. Toha";
//	m1.almt.kota = "Cianjur";
}
