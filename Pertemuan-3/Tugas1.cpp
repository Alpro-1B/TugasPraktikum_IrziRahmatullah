#include <iostream>

using namespace std;

int main() {

    // Tugas Nomor 1

    // Mendeklarasikan variable yang nantinya akan digunakan untuk pengkondisian
    int score;

    cout << "Program pemberian nilai sesuai score." << endl;
    cout << "Masukkan nilai 1 - 100 : ";
    cin >> score; //Memasukkan value dari user kedalam variable score.

    // Melakukan proses pengkondisian menggunakan if else.
    if(score >= 90) {
        cout << "Anda mendapatkan nilai A.\n" << endl;
    } else if(score >= 80) {
        cout << "Anda mendapatkan nilai B.\n" << endl;
    } else if(score >= 70) {
        cout << "Anda mendapatkan nilai C.\n" << endl;
    } else if(score >= 60) {
        cout << "Anda mendapatkan nilai D.\n" << endl;
    } else {
        cout << "Anda mendapatkan nilai E.\n" << endl;
    }
    

    return 0;
}
