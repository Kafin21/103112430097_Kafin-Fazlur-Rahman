#include <iostream>
using namespace std;

void tukarMenggunakanPointer(int *ptrA, int *ptrB, int *ptrC) {
    int variabelSementara;
    
    variabelSementara = *ptrA;
    *ptrA = *ptrB;
    *ptrB = *ptrC;
    *ptrC = variabelSementara;
    
    cout << "Proses pertukaran menggunakan pointer telah selesai." << endl;
}

void tukarMenggunakanReference(int &refA, int &refB, int &refC) {
    int variabelSementara;
    
    variabelSementara = refA;
    refA = refB;
    refB = refC;
    refC = variabelSementara;
    
    cout << "Proses pertukaran menggunakan reference telah selesai." << endl;
}

int main() {
    int variabelA, variabelB, variabelC;
    
    cout << "Program Demonstrasi Pertukaran Nilai Menggunakan Pointer dan Reference." << endl;
    cout << "Masukkan tiga nilai integer untuk variabel A, B, dan C: ";
    cin >> variabelA >> variabelB >> variabelC;
    
    cout << "\nPointer - Sebelum pertukaran: A = " << variabelA << ", B = " << variabelB << ", C = " << variabelC << endl;
    tukarMenggunakanPointer(&variabelA, &variabelB, &variabelC);
    cout << "Pointer - Sesudah pertukaran: A = " << variabelA << ", B = " << variabelB << ", C = " << variabelC << endl;
    
    cout << "\nMasukkan tiga nilai integer baru untuk reference: ";
    cin >> variabelA >> variabelB >> variabelC;
    
    cout << "Reference - Sebelum pertukaran: A = " << variabelA << ", B = " << variabelB << ", C = " << variabelC << endl;
    tukarMenggunakanReference(variabelA, variabelB, variabelC);
    cout << "Reference - Sesudah pertukaran: A = " << variabelA << ", B = " << variabelB << ", C = " << variabelC << endl;
    
    return 0;
}
