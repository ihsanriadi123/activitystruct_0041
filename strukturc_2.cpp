#include <iostream>
using namespace std;

struct detailalamat{
    string desa;
    string kota;
};

struct mahasiswa {
    string nim;
    string nama;
    detailalamat alamat;
    int umur;
};

int main() {
    mahasiswa mhs;
    cout << "nomor mahasiswa: ";
    getline(cin,mhs.nim);
    cout << "nama mahasiswa: ";
    getline(cin,mhs.nama);
    cin.ignore(1,'\n');
    
    cout << "alamat mahasiswa:  "<<endl;
    cout << "\t nama desa : "
    cin >> mhs.alamat.desa;
    cin.ignore(1,'\n');
    cout << "\t nama kota : ";
    cin >> mhs.alamat.kota;
    cin.ignore(1,'\n');
    cout << "umur mahasiswa: ";
    cin >> mhs.umur;


    cout << endl;
    cout << "\n nim : " << mhs.nim;
    cout << "\n nama : " << mhs.nama;
    cout << "\n alamat: ";
    cout << "\n desa: " << mhs.alamat.desa;
    cout << "\n kota: " << mhs.alamat.kota;
    cout << "\n umur : " << mhs.umur;
}

