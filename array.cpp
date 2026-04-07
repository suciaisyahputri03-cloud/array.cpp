#include <iostream>
using namespace std;

int main()
{
    //deklarasi array disertai inisialisasi
    int dataku[5] = {10, 20, 30, 40, 50};
    //deklarasi tanpa inisialisasi
    int datamu[5];

    //cara akses (membaca atau mengambil isi array)
    cout << "isi data kedua : " << dataku << endl;
    //mengisi array
    dataku[1] = 200;
    cout << "isi data kedua setelah diubah : " << dataku[1] << endl;

    //mengisi data dengan perintah satu persatu
    cout << "isikan data pertama : ";
    cin >> datamu[0];
    cout << "isikan data kedua : ";
    cin >> datamu[1];
    cout << "isikan data ketiga : ";
    cin >> datamu[2];
    cout << "isikan data keempat : ";
    cin >> datamu[3];
    cout << "isikan data kelima : ";
    cin >> datamu[4];
    cout << endl;

    //menampilan data dengan perintah satu perstu
    cout << "data pertama = " << datamu[0] << endl;
    cout << "data kedua = " << datamu[1] << endl;
    cout << "data ketiga = " << datamu[2] << endl;
    cout << "data keempat = " << datamu[3] << endl;
    cout << "data kelima = " << datamu[4] << endl;
    cout << endl;

    cout << "input array menggunakan for" << endl;
    //mengisi data melalui perulangan
    for (int i = 0; i <= 4; i++)
    {
        cout << "isikan data ke-" << (i + 1) << " : ";
        cin >> datamu [i];
    }
    cout << endl;

   cout << "tampil data array menghgunakan for" << endl;
   // menampilkan data dengan perulangan
}