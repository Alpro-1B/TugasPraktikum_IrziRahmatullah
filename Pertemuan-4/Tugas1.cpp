#include <iostream>

using namespace std;

int main() {

    // Mendeklarasikan variable "opsi" dan "n". variable opsi untuk menentukan pada operasi switch case, dan variable n untuk menentukan nilai ke-n.
    int opsi, n;
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "Program menampilkan bilangan genap, ganjil dan prima." << endl;
    cout << "1. Bilangan genap\n2. Bilangan ganjil\n3. Bilangan prima" << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "Silahkan pilih program mana yang mau anda jalankan (1/2/3) : ";
    cin >> opsi; // memasukkan inputan user kedalam variable opsi.
    cout << endl;

    // Menggunakan operasi switch case untuk menentukan program mana yang akan dijalankan.
    switch (opsi){
    case 1:
        cout << "Anda memilih program bilangan genap" << endl;
        cout << "Silahkan masukkan nilai ke-n : ";
        cin >> n;

        // Melakukan pengkondisian jika inputan dari user bilangan negatif.
        // Di setiap case user diminta untuk memasukkan nilai ke-n.
        // Di setiap case juga melakukan perulangan do while untuk memastikan user tidak memasukkan bilangan negatif pada nilai ke-n.
        if( n < 0) {
            do {
                cout << "\nNilai yang dimasukkan harus bilangan bulat positif!\nSilahkan masukkan kembali nilai ke-n : ";
                cin >> n;
            } while (n < 0);
        };
        cout << "Bilangan genap dari 1 sampai " << n << " yaitu : ";
        for (int i = 1; i <= n; i++ ){
            if(i % 2 == 0) {
                cout << i << " ";
            };
        };
        break;
    case 2:
        cout << "Anda memilih program bilangan ganjil" << endl;
        cout << "Silahkan masukkan nilai ke-n : ";
        cin >> n;

        if( n < 0) {
            do {
                cout << "\nNilai yang dimasukkan harus bilangan bulat positif!\nSilahkan masukkan kembali nilai ke-n : ";
                cin >> n;
            } while (n < 0);
        };
        cout << "Bilangan ganjil dari 1 sampai " << n << " yaitu : ";
        for (int i = 1; i <= n; i++ ){
            if(i % 2 == 1) {
                cout << i << " ";
            };
        };
        break;
    case 3:
        cout << "Anda memilih program bilangan prima" << endl;
        cout << "Silahkan masukkan nilai ke-n : ";
        cin >> n;

        if( n < 0) {
            do {
                cout << "\nNilai yang dimasukkan harus bilangan bulat positif!\nSilahkan masukkan kembali nilai ke-n : ";
                cin >> n;
            } while (n < 0);
        };

        cout << "Bilangan prima dari 1 sampai " << n << " yaitu : ";
        for (int i = 2; i <= n; ++i ){
            int bilPrima = 1;
            for(int j = 2; j * j <= i; ++j) {
                if (i % j == 0) {
                    bilPrima = 0;
                    break;
                }
            }
            if(bilPrima == 1) {
                cout << i << " ";
            };
        };
    };
    cout << endl << endl;
    return 0;
}