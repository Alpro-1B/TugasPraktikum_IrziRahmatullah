#include <iostream>

using namespace std;

// Mendeklarasikan function untuk memberitahu bahwa ada function bernama showingIntegers, sehingga nantinya tidak akan menimbulkan error.
void displayMaxArr(int sizeOfArr);
void displayValArr(int arr[], int nilaiArr);

int main() {

    // Mendeklarasikan variable sizeArr untuk menampung ukuran array sesuai keinginan user.
    int sizeArr;
    // Mendeklarasikan variable tipe char untuk menampung validasi dari usernya.
    char repeat, showArr;
    cout << "\n=====================================================" << endl;
    cout << "| Program mencari nilai tertinggi dari sebuah array |" << endl;
    cout << "=====================================================" << endl;
    // Menggunakan do while loop untuk mengulangi selama user ingin memasukkan kembali nilai arra/tidak.
    do{
        cout << "Masukkan nilai untuk menentukan ukuran sebuah array nanti.\nJawaban : ";
        cin >> sizeArr; // Memasukkan value dari inputan user kedalam variable sizeArr.

        // Melakukan pengkondisian jika inputan user kurang dari 0, karena harus lebih dari 1.
        if(sizeArr <= 0) {
            do{
            cout << "Harap masukkan nilai nya lebih dari 0 ya. \nJawaban : " << endl;
            cin >> sizeArr;
            } while (sizeArr <= 0);
        };

        // Memanggil function "displayMaxArr".
        displayMaxArr(sizeArr);

        cout << "Ingin memasukkan ulang nilai array?(y/n) : ";
        cin >> repeat; // Memasukkan value dari inputan user kedalam variable repeat  yang nantinya akan di validasi di while().
    } while(repeat == 'y' || repeat == 'Y');

    return 0;
};







// Membuat function displayArr untuk menampilkan index dari inputan kita dan menampung 2 parameter.
void displayValArr(int arr[], int sizeOfArr) {
    // Mendeklarasikan variable nilaiArr dan valArr sebagai acuan pengkondisian.
    int nilaiArr;
    bool valArr = false;

    cout << "Masukkan nilainya : ";
    cin >> nilaiArr;
    
    // Menggunakan do while loop untuk memvalidasi jika user memasukkan nilai yang salah pada inputannya.
    do {
        
        // Melakukan perulangan dan pengecekan jika inputan user ada yang sama dengan nilai array.
        for(int i = 0; i < sizeOfArr; i++ ){
            if(nilaiArr == arr[i]) {
                cout << "Nilai " << nilaiArr << " berada pada index ke-" << i << " pada array yang anda masukkan." << endl;
                valArr = true;
            };
        };
        
        // Jika inputan user tidak sama dengan nilai array, maka akan diminta untuk memasukkan kembali nilainya sampai matching dengan nilai array.
        if(!valArr) {
            cout << "Nilai yang anda masukkan tidak ada pada nilai yang anda masukkan sebelumnya." << endl;
            cout << "Silahkan masukkan kembali : ";
            cin >> nilaiArr;
        };
    } while(!valArr);
};

// Membuat function displayMaxArr untuk menampilkan nilai terbesar dari array yang dikirimkan user.
void displayMaxArr(int sizeOfArr) {

    // Mendeklarasikan array dengan ukuran sesuai dari parameter functionnya.
    int myArr[sizeOfArr];
    char showArr;

    // Menuggkanan for loop untuk meminta user memasukkan nilai array nya sesuai ukuran array yang dikirimkan.
    for(int i = 0; i < sizeOfArr; i++){
        cout << "Masukkan nilai array ke " << i+1 << "\nJawaban : ";
        cin >> myArr[i];
    };

    cout << "Ingin melihat nilai terbesar yang anda inputkan tadi? (y/n) : ";
    cin >> showArr;
   
    // Melakukan operasi untuk mencari angka terbesar dari nilai yang dikirimkan user dan menampilkannya.
    if(showArr == 'y' || showArr == 'Y'){
        int maxArr = myArr[0];
        for(int i = 0; i < sizeOfArr; i++) {
            if(myArr[i] >= maxArr){
                maxArr = myArr[i];
            };
        };
        cout << "Nilai terbesarnya yaitu : " << maxArr << endl;
    };


    cout << "Ingin mengetahui nilai index dari nilai array yang anda masukkan tadi?(y/n) : ";
    cin >> showArr;
    if(showArr == 'y' || showArr == 'Y') {
        // Memanggil function displayValArr dengan mengirimkan 2 buah argumen ke parameternya.
        displayValArr(myArr, sizeOfArr);
    };
};

