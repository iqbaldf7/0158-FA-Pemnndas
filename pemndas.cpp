#include <iostream>
using namespace std;
class MataKuliah{

public: // akses modifier
	string pemograman;
	string jaringan;

	void output() {
		cout << "Pemograman: " << pemograman << endl;
		out << "Jaringan: " << jaringan << endl;
	}
};
class matakuliah{
	private:
		string kodeMK;
		string namaMK;
		int sks;
	public:
		void input() {
			cout << "Kode MK: ";
			cin >> kodeMK;
			cout << "Nama MK: ";
			cin >> sks;
		}
		void input() {
			cout << "Kode MK: " << kodeMK << endl;
			cout << "Nama MK: " << namaMK << endl;
			cout << "SKS: " << sks << endl;
		}



	
	float presensi;
	cout << "Masukan Nilai Presensi : ";
	cout << "Masukan Nilai Activity : ";
	cout << "Masukan Nilai exercise : ";
	cout << "Masukan Nilai tugas akhir : ";
	
public:
	MataKuliah()
	{
		presensi = 0.0;
		
	}
	virtual void namaMataKuliah() { return; }

	void setPresensi(float nilai)
	{
		this->presensi = nilai;
	}
	float getPresensi()
	{
		return presensi;
	}
	
};
class Pemrograman : public MataKuliah
{
public: 
    void namaMataKuliah() {
        cout << "Pemograman" << endl;
    }

};
class Jaringan : public MataKuliah 
{
public:
    void namaMataKuliah() {
        cout << "Jaringan" << endl;
    }
	
};
int main()
{
	char pilih;
	MataKuliah* mataKuliah;
	Pemrograman pemrograman;
	Jaringan jaringan;

    return 0;
}