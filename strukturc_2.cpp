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
    cin >> mhs.nim;
    cout << "nama mahasiswa: ";
    cin >> mhs.nama;

    cout << "alamat mahasiswa: ";
    cout << "\t nama desa : "
    cin >> mhs.alamat.desa;
    cout << "\t nama kota : ";
    cin >> mhs.alamat.kota;
    
    cout << "umur mahasiswa: ";
    cin >> mhs.umur;

    cout << endl;
    cout << "\n nim : " << mhs.nim;
    cout << "\n nama : " << mhs.nama;
    cout << "\n alamat: " << mhs.alamat;
    cout << "\n umur : " << mhs.umur;
}