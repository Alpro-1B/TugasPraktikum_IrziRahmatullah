#include <iostream>

using namespace std;

// Mendeklarasikan function untuk memberitahu bahwa ada function bernama showingIntegers, sehingga nantinya tidak akan menimbulkan error.
void showingIntegers(int userInputs);


int main() {

    // Mendeklarasikan variable "opsi" untuk menampung value dari user dalam memilihi program. Variable opsi untuk dijadikan argumen pada function showingIntegers.
    int opsi;
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "Program menampilkan bilangan genap, ganjil dan prima." << endl;
    cout << "1. Bilangan genap\n2. Bilangan ganjil\n3. Bilangan prima" << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "Silahkan pilih program mana yang mau anda jalankan (1/2/3) : ";
    cin >> opsi; // memasukkan inputan user kedalam variable opsi.
    cout << endl;

    showingIntegers(opsi);
    
    return 0;
}





// Membuat function dengan nama "showingIntegers" dengan parameter tipe data integer.
void showingIntegers(int userInputs) {

    // Mendeklarasikan variable "n" untuk menampung nilai ke-n dari user.
    int n;

    // Menggunakan operasi switch case untuk menentukan program mana yang akan dijalankan sesuai dari argumen pada parameter "userInputs".
    switch (userInputs){
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

}