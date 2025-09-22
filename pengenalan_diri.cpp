#include <iostream>

using namespace std;

int main() {

    string nama;
    int umur;
    string ttl;
    float tinggi;
    string asal_sekolah;

    cout << "Masukan Nama Kamu : ";
    getline(cin, nama);
    cout << "Masukan Umur Kamu : ";
    cin >> umur;
    cin.ignore();
    cout << "Masukan Tempat Tanggal Lahir : ";
    getline( cin, ttl);
    cout << "Masukan Tinggi Kamu : ";
    cin >> tinggi;
    cin.ignore();
    cout << "Asal Sekolah Kamu : ";
    getline( cin, asal_sekolah);


    cout << "\n====DATA DIRI KAMU====\n";
    cout << "Nama Lengkap Kamu : " << nama <<endl;
    cout << "Umur Kamu Sekarang : " << umur << " Tahun"<<endl;
    cout << "Tempat Tanggal Lahir : " << ttl << endl;
    cout << "Tinggi Kamu : " << tinggi << " Cm" << endl;
    cout << "Asal Sekolah Kamu : " << asal_sekolah << endl;
    

return 0;
    // cout << "Nama Kamu " << nama; debug 
}