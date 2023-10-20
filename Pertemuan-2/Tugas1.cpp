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
    firstValue = 10;
    secondValue = 8;
    
    firstValue = firstValue + secondValue;
    secondValue = firstValue - secondValue;
    firstValue = firstValue - secondValue;

    cout << "Nilai firstValue dan secondValue setelah ditukarkan tanpa variable akan menjadi seperti ini" << endl;
    cout <<"Nilai firstValue : " << firstValue << "\nNilai secondValue : " << secondValue << endl<<endl;

    return 0;
}
