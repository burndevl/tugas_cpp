#include <iostream>

using namespace std;

    int r;
    const float pi = 3.14;
    float rumus_luas;


int main() {

    cout << "==== MENCARI LUAS LINGKARAN ====\n";
    cout << "Masukan Nilai Jari - Jari : ";
    cin >> r;

    rumus_luas = r * r * pi;

    cout << "\nLuas Lingkarannya Adalah : " << rumus_luas << " cm2";

}