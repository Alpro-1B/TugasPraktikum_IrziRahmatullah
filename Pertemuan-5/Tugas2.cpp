#include <iostream>

using namespace std;

// Mendeklarasikan function untuk memberitahu bahwa ada function bernama triangleStars, sehingga nantinya tidak akan menimbulkan error.
void triangleStars(int angka);

int main() {

    // Mendeklarasikan variable "n" untuk menampung value yang dikrimkan oleh user yang nantinya akan menjadi argumen di function "triangleStars"
    int n;
    cout << "\nMasukkan berapa kolom bintang yang akan dibuat : ";
    cin >> n; // Memasukkan nilai dari user kedalam variable n.

    
    triangleStars(n);
    
    return 0;
}




// Membuat function dengan nama triangleStars dengan parameter tipe data integer.
void triangleStars(int nilai) {

    // Melakukan pengkondisian jika argumen dari parameter "nilai" bernilai negatif.
    if(nilai < 0) {
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
};