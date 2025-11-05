#include <iostream>
using namespace std;

int main() {
    int td, jam, menit, detik;

    cout << "Haloo, aku aya ini program pertamaku jadi..." << endl;
    cout << "Masukkan bilangan lebih dari 1 (satuan detik)" << endl;
    cout << ">> ";
    cin >> td;

    jam = td / 3600;
    td = td % 3600;
    menit = td / 60;
    detik = td % 60;

    cout << "\nHasil Konversi:" << endl;
    cout << td + jam * 3600 + menit * 60 + detik << " detik = "
         << jam << " Jam, "
         << menit << " Menit, "
         << detik << " Detik." << endl;

    return 0;
}