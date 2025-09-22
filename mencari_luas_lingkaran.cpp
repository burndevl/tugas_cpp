#include <iostream>

using namespace std;

int main() {
    int pilihan;
    int r;
    const float pi = 3.14;

    cout << "==== Menu Lingkaran ====\n";
    cout << "1. Hitung luas\n";
    cout << "2. Hitung keliling\n";
    cout << "Masukkan pilihan: ";
    cin >> pilihan;

    switch(pilihan) {
        case 1:
            cout << "Masukkan jari-jari: ";
            cin >> r;
            cout << "Luas lingkaran: " << r * r * pi << " cm2" << endl;
            break;
        case 2:
            cout << "Masukkan jari-jari: ";
            cin >> r;
            cout << "Keliling lingkaran: " << 2 * r * pi << " cm" << endl;
            break;
        default:
            cout << "pilihan kamu tidak ada." << endl;
    }

    return 0;
}
