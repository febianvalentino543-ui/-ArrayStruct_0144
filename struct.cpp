#include <iostream>
using namespace std;

struct orang
{
    string nama;
    string alamat;
    int umur;
};

int main()
{
    // deklarasi variable struct
    orang mhs;

    // mengisi data
    cout << "Isikan data nama : ";
    cin >> mhs.nama;
    cout << "Isikan data alamat : ";
    cin >> mhs.alamat;
    cout << "Isikan data usia : ";
    cin >> mhs.umur;
    cout << endl;

    cout << "Data tampil" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat : " << mhs.alamat << endl;
    cout << "Umur : " << mhs.umur << endl;
    cout << endl;
}