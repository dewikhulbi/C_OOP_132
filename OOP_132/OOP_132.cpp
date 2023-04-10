#include <iostream>
using namespace std;

class mahasiswa {
public:
	string nim;
	string nama;
public: void cetak() {
	cout << "NIM = " << nim;
	cout << "\nNama = " << nama;
	}
};

class matakuliah {
private:
	string kode;
	string namaM;
	int sks :
public:
	void input() {
		cout << "masukan kode matakuliah : ";
		cin >> kode;
		cout << "masukan nama matakuliah : ";
		cin >> namaM;
	}
};