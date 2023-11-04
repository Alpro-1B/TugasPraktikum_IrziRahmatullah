#include <iostream>

using namespace std;

int main() {

    // Mendeklarasikan variable vUser untuk menampung value yang dikrimkan oleh use.r
    int nilai;
    cout << "\nMasukkan berapa kolom bintang yang akan dibuat : ";
    cin >> nilai; // Memasukkan nilai dari user kedalam variable n.

    // Melakukan pengkondisian jika user memasukkan nilai negatif.
    if(nilai < 0) {
        // Menggunakan perulangan do while tujuannya agar saat user memasukkan value negatif akan disuruh untuk memasukkan nilai ulang.
        do {
            cout << "\nNilai yang dimasukkan harus bilangan bulat positif!\n" << endl;
            cout << "Silahkan masukkan nilai kembali : ";
            cin >> nilai;
        } while (nilai < 0);
    };

    // Melakukan for looping atau nested loop untuk membuat segitiga sama sisi.
    // for loop pertama untuk mencetak berapa baris yang akan dibuat. For loop kedua untuk mencetak bintang. 
    for (int a = 1; a < nilai; a++) {
        for(int b = a; b < nilai; b++) {
            cout << " ";
        };
        for(int c = 1; c < (2 * a); c++) {
            cout << "*";
        };
        cout << endl;
    }


    return 0;
}