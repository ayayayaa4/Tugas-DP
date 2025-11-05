#include <iostream>
using namespace std;

int main() {
    long totalDetik;
    int hari, jam, menit, detik;

    cout << "Masukkan waktu lebih dari 1 detik (dalam satuan detik)" << endl;
    cout << ">> ";
    cin >> totalDetik;
    long inputAsli = totalDetik;
    hari = totalDetik / 86400;
    totalDetik %= 86400;
    jam = totalDetik / 3600;
    totalDetik %= 3600;
    menit = totalDetik / 60;
    detik = totalDetik % 60;

    cout << "\nHalo Jadi Hasil Dari Konversinya adalah:" << endl;
    cout << inputAsli << " detik = ";

    if (hari > 0)
        cout << hari << " Hari, ";
    
    cout << jam << " Jam, " << menit << " Menit, " << detik << " Detik." << endl;

    return 0;
}
