#include <iostream>
using namespace std;

double HitungVolumeBalok(double panjang, double lebar, double tinggi) {
    return panjang * lebar * tinggi;
}

int main() {
    double panjang, lebar, tinggi;

    
    cout << "Masukkan panjang balok: ";
    cin >> panjang;
    cout << "Masukkan lebar balok: ";
    cin >> lebar;
    cout << "Masukkan tinggi balok: ";
    cin >> tinggi;

    double volume = HitungVolumeBalok(panjang, lebar, tinggi);

    cout << "Volume balok adalah: " << volume << endl;

    return 0;
}


