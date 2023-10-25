#include <iostream>

using namespace std;

int main() {

        // Tugas Nomor 3;

    // Mendeklarasikan variable bertipe integer untuk pilihan dari setiap bangun datar.
    int pilihanUser;
    // Mendeklarasikan variable bertipe float, karena nanti hasil dari operasi perhitungan tidak akan selalu berbentuk bilangan bulat.
    float alas, lebar, tinggi, hasil;

    // Melakukan output agar user dapat memilih program luas bangun datar mana yang akan di hitung.
    cout << "Program menghitung luas bangun datar dari :" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "Silahkan pilih bangun datar mana yang akan dihitung luas nya (Masukkan nilai : 1/2/3) ";
    cin >> pilihanUser; // Memasukkan value dari user kedalam variable pilihanUser

    /* Membuat proses menggunakan switch case dengan 3 case sesuai bangun datar. Setiap case memiliki inputan dari user 
    dan inputan tersebut dioperasikan sesuai rumus luas dari tiap bangun datar, dan hasilnya dimasukkan kedalam variable hasil. Lalu hasil tersebut dicetak/di output kan.*/
    switch (pilihanUser) {
        case 1:
            cout << "Masukkan nilai sisi : ";
            cin >> alas;
            hasil = alas*alas;
            cout << "Luas dari persegi yang diberikan sisi sebesar " << alas << " adalah : " << hasil <<endl <<endl;
            break;
        case 2:
            cout << "Masukkan nilai panjang : ";
            cin >> alas;
            cout << "Masukkan nilai lebar : ";
            cin >> lebar;
            hasil = alas*lebar;
            cout << "Luas dari persegi panjang yang diberikan alas " << alas << " dan lebar " << lebar << " adalah : " << hasil << endl <<endl;
            break;
        case 3:
            cout << "Masukkan nilai alas : ";
            cin >> alas;
            cout << "Masukkan nilai tinggi : ";
            cin >> tinggi;
            hasil = 0.5 * alas * tinggi;
            cout << "Luas dari segitiga yang diberikan alas " << alas << " dan tinggi " << tinggi << " adalah : " << hasil <<endl<<endl;
        default:
            break;
        }

    return 0;
}