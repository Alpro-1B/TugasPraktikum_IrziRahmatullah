
#include <iostream>

using namespace std;

int main() {
    cout << "\n------------------------" << endl;
    cout << "Program deret Fibonacci" << endl;
    cout << "------------------------" << endl;

    // Mendeklarasikan variable n dan hasil. n untuk menampung nilai ke-n dari user, dan hasil untuk menampung harus pengoperasian.
    int n, c;
    int a = 0;
    int b = 1;

    cout << "Masukkan nilai ke-n : ";
    cin >> n; // Memasukkan nilai dari user kedalam variable n.

    // Melakukan pengkondisian jika user memasukkan nilai negatif.
    if(n < 0) {
        // Menggunakan perulangan do while tujuannya agar saat user memasukkan value negatif akan disuruh untuk memasukkan nilai ulang.
        do {
            cout << "\nNilai yang harus dimasukkan harus bilangan bulat positif!\n" << endl;
            cout << "Masukkan nilai ke-n : ";
            cin >> n;   // Memasukkan nilai dari user kedalam variable n.
        } while (n < 0);
    }

    cout << "\nDeret Fibonacci sampai ke-" << n << " adalah : ";

    // Melakukan pengoperasian deret fibonacci menggunakan perulangan. 
    for(int i = 0; i < n; i++){
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
    
    return 0;
}