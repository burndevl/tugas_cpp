#include <iostream>

using namespace std;

float setengah = 0.5;
int alas;
int tinggi;

int hasil_luas;
int main() {

    cout << "==== PROGRAM MENARI LUAS SEGITIGA ====\n";
    cout <<"Masukan Alas Segitiga : ";
    cin >> alas;
    cout << "Masukan Tinggi Segita : ";
    cin >> tinggi;

    hasil_luas = setengah * alas * tinggi;

    cout << "\nLuas Segitiga Nya Adalah : " << hasil_luas << " cm2"; 


}