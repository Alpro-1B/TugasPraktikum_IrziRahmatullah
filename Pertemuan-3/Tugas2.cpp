#include <iostream>

using namespace std;

int main() {

    // Tugas Nomor 2

    // Mendeklarasikan variable bertipe data double agar input dari user tidak harus selalu berupa integer.
    double angka1, angka2, angka3, angkaTerbesar;

    cout << "Program mencetak angka terbesar.\n" << "Masukkan angka pertama : ";
    cin >> angka1; //Memasukkan value dari user kedalam variable angka1
    cout << "Masukkan angka kedua : ";
    cin >> angka2; //Memasukkan value dari user kedalam variable angka2
    cout << "Masukkan angka ketiga : ";
    cin >> angka3; //Memasukkan value dari user kedalam variable angka3

    // Mengisi variable angkaTerbesar dengan isi dari variable angka1 sebagai nilai default jika angka1 adalah angka yang paling besar.
    angkaTerbesar = angka1;

    /* Membuat proses pengkondisian terhadap varialbe angka2 dan angka3 untuk memilah nilai 
    dari variable mana yang paling besar, yang nantinya akan dimasukkan kedalam variable angkaTerbesar.*/
    if(angka2 > angkaTerbesar) {
        angkaTerbesar = angka2;
    } else if(angka3 > angkaTerbesar) {
        angkaTerbesar = angka3;
    };

    // Menampilkan output angka terbesar dari user.
    cout << "Angka terbesar dari yang anda masukkan adalah : " << angkaTerbesar << endl << endl; 

    return 0;
}