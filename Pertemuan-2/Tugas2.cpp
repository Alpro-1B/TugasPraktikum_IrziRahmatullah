#include <iostream>

using namespace std;

int main () {
    // TUGAS NOMOR 2

    int jumlahBebek, jumlahTeman, jumlahDiberikan, sisaBebek;
    cout << "Masukkan jumlah bebek yang dimiliki Pak Tatang : ";
    cin >> jumlahBebek;
    cout << "Masukkan jumlah teman Pak tatang(Tidak boleh melebihi jumlah bebek) : ";
    cin >> jumlahTeman;

    // Operasi untuk menentukan hasil bagi dan hasil sisa bagi.
    jumlahDiberikan = jumlahBebek / jumlahTeman;
    sisaBebek = jumlahBebek % jumlahTeman;

    cout << "\nPak Tatang harus memberikan " << jumlahDiberikan << " ekor bebek kepada masing masing temannya." << endl;
    cout << "Dan sisa bebek Pak Tatang ada " << sisaBebek << " ekor bebek setelah diberikan kepada temannya."; 
   
   return 0;
}