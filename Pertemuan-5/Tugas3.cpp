#include <iostream>

using namespace std;

// Mendeklarasikan function untuk memberitahu bahwa ada function bernama deretFibonacci, sehingga nantinya tidak akan menimbulkan error.
void deretFibonacci(int n);

int main() {

    // Mendeklarasikan variabel "n" untuk menampung inputan dari user yang nantinya akan dijadikan argumen di function deretFibonacci.
    int n;

    cout << "\n------------------------" << endl;
    cout << "Program deret Fibonacci" << endl;
    cout << "------------------------" << endl;
    cout << "Masukkan nilai ke-n : ";
    cin >> n; // Memasukkan nilai dari user kedalam variable n.

    // Memanggil function deretFibonacci
    deretFibonacci(n);

    return 0;
};



// Membuat function dengan nama deretFibonacci dengan parameter tipe data integer.
void deretFibonacci(int nilai) {

    // Membuat variable integer menggunakan long, hal ini untuk mengantisipasi nilai yang melebihi kapasitas dari tipe data integer.
    // Misal jika kita menginput nilai melebihi nilai 92, akan ada bilangan negatif yang muncul.
    long long int c;
    long long int a = 0;
    long long int b = 1;

    // Melakukan pengkondisian jika argumen dari parameter "nilai"bernilai negatif.
    if(nilai < 0) {
        // Menggunakan perulangan do while tujuannya agar saat argumen dari parameter "nilai" bernilai negatif akan disuruh untuk memasukkan nilai ulang.
        do {
            cout << "\nNilai yang harus dimasukkan harus bilangan bulat positif!\n" << endl;
            cout << "Masukkan nilai ke-n : ";
            cin >> nilai;  // Memasukkan nilai dari user kedalam variable nilai.
        } while (nilai < 0);
    }

    cout << "\nDeret Fibonacci sampai ke-" << nilai << " adalah : ";

    // Melakukan pengoperasian deret fibonacci menggunakan perulangan. 
    for(int i = 0; i <= nilai; i++){
        if(i < 2) {
            c = i;
        } else {
            c = a + b;
            a = b;
            b = c;
        };
        cout << c << " ";
    }
    cout << endl << endl;
}