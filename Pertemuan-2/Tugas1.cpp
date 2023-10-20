#include <iostream>

using namespace std;

int main () {

    // TUGAS NOMOR 1

    int firstValue = 10;
    int secondValue = 8;
    int variableTambahan;

    // Menukarkan nilai menggunakan varuable tambahan
    variableTambahan = firstValue;
    firstValue = secondValue;
    secondValue = variableTambahan;

    cout << "Nilai firstValue dan secondValue setelah ditukar menggunakan variable tambahan :" << endl;
    cout <<"Nilai firstValue : " << firstValue << "\nNilai secondValue : " << secondValue << endl<<endl;


    // Menukarkan nilai tanpa menggunakan variable
    firstValue = firstValue + secondValue;
    secondValue = firstValue - secondValue;
    firstValue = firstValue - secondValue;

    cout << "Nilai firstValue dan secondValue setelah ditukarkan tanpa variable akan menjadi posisi semula kembali" << endl;
    cout <<"Nilai firstValue : " << firstValue << "\nNilai secondValue : " << secondValue << endl<<endl;

    return 0;
}