#include <iostream>
using namespace std;

struct detaiAlamat
{
    string desa;
    string kota;


};

struct orang 
{
    string nama;
    detaiAlamat alamat;
    int umur;
};
 int main ()
 {
    //deklarasi variable struct
    orang mhs;
    // mengisi data
    cout << "isikan data nama : ";
    cin >> mhs.nama;
    cout << " isikan data desa : ";
    cin >> mhs.alamat.desa;
    cout << " isikan data kota : ";
    cin >> mhs.alamat.kota;
    cout << "isikan data umur : ";
    cin >> mhs.umur;
    cout << endl;

    cout << "data tampil" << endl;
    cout << "nama : " << mhs.nama << endl;
    cout << "desa : " << mhs.alamat.desa << endl;
    cout << "kota : " << mhs.alamat.kota << endl;
    cout << "umur : " << mhs.umur << endl;

 }