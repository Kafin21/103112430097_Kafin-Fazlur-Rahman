#include <iostream>
#include <iomanip>  
using namespace std;

int arrA[10] = {11, 8, 5, 7, 12, 26, 3, 54, 33, 55};
const int SIZE = 10;  

void tampilkanArray() {
    cout << "\nIsi array: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arrA[i];
        if (i < SIZE - 1) cout << ", ";  
    }
    cout << endl;
}

int cariMaksimum() {
    int max = arrA[0];  
    
    for (int i = 1; i < SIZE; i++) {
        if (arrA[i] > max) {
            max = arrA[i];  
        }
    }
    return max;  
}

int cariMinimum() {
    int min = arrA[0];  
    
    for (int i = 1; i < SIZE; i++) {
        if (arrA[i] < min) {
            min = arrA[i];  
        }
    }
    return min;  
}

void hitungRataRata() {
    int sum = 0;  
    
    for (int i = 0; i < SIZE; i++) {
        sum += arrA[i];
    }
    
    double rataRata = (double)sum / SIZE;
    
    cout << fixed << setprecision(1);  
    cout << "Rata-rata: " << rataRata << endl;
}

int main() {
    int pilihan;  
    
    cout << "--- Menu Program Array ---" << endl;
    cout << "1. Tampilkan isi array" << endl;
    cout << "2. Cari nilai maksimum" << endl;
    cout << "3. Cari nilai minimum" << endl;
    cout << "4. Hitung nilai rata-rata" << endl;
    cout << "0. Keluar" << endl;
    
    do {
        cout << "\nPilih menu (0-4): ";
        cin >> pilihan;
        
        switch (pilihan) {
            case 1:
                tampilkanArray();
                break;
            case 2:
                cout << "Nilai maksimum: " << cariMaksimum() << endl;
                break;
            case 3:
                cout << "Nilai minimum: " << cariMinimum() << endl;
                break;
            case 4:
                hitungRataRata();
                break;
            case 0:
                cout << "Keluar program!" << endl;
                break;
            default:
                cout << "Pilihan salah! Masukin 0-4." << endl;
        }
    } while (pilihan != 0);
    
    return 0;
}
