# <h1 align="center">Laporan Praktikum Modul 2 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>
<p align="center">Kafin Fazlur Rahman - 103112430097</p>

## Dasar Teori
Array adalah struktur data yang digunakan untuk menyimpan sekumpulan data dengan tipe yang sama dalam satu variabel dan diakses menggunakan indeks. Setiap elemen dalam array disimpan secara berurutan di memori, sehingga memudahkan dalam pengaksesan dan manipulasi data. Dalam bahasa C++, array sering digunakan karena efisiensinya dalam menyimpan dan mengolah data yang jumlahnya sudah diketahui sejak awal.

Operasi dasar pada array meliputi pengaksesan nilai, pengisian data, pencarian nilai maksimum dan minimum, serta perhitungan rata-rata. Nilai maksimum adalah elemen dengan nilai terbesar dalam array, sedangkan nilai minimum adalah elemen dengan nilai terkecil. Perhitungan rata-rata dilakukan dengan menjumlahkan semua elemen lalu dibagi dengan jumlah total elemen array.

Struktur pengulangan (for loop) digunakan untuk menelusuri seluruh isi array dan melakukan operasi per elemen, sedangkan struktur seleksi (switch-case) memudahkan pengguna memilih operasi yang diinginkan dari menu program.

1. Konsep Array

Array memungkinkan penyimpanan data secara sistematis dan efisien. Dalam C++, array dapat berupa satu dimensi atau multidimensi. Penggunaan array satu dimensi memudahkan proses iterasi dan pengolahan nilai, terutama untuk operasi dasar seperti pencarian dan pengurutan.

2. Operasi pada Array

Operasi dasar seperti mencari nilai maksimum, minimum, dan rata-rata membantu pengguna memahami distribusi data. Proses ini sering digunakan dalam analisis data numerik dan statistika dasar.

3. Implementasi dalam Bahasa C++

C++ menyediakan fleksibilitas tinggi dalam penggunaan array, serta mendukung penggunaan fungsi untuk modularisasi program. Pemisahan fungsi seperti cariMaksimum(), cariMinimum(), dan hitungRataRata() membuat program lebih terstruktur dan mudah dipahami.

## Guided 

### Guided 1

#include <iostream>
using namespace std;

int main() {
    
    int arr1D[5] = {10, 20, 30, 40, 50};
    cout << "Array 1 Dimensi:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "arr1D[" << i << "] = " << arr1D[i] << endl;
    }

    cout << endl;

    
    int arr2D[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    cout << "Array 2 Dimensi:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "arr2D[" << i << "][" << j << "] = " << arr2D[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    
    int arr3D[2][2][3] = {
        { {1, 2, 3}, {4, 5, 6} },
        { {7, 8, 9}, {10, 11, 12} }
    };
    cout << "Array 3 Dimensi:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 3; k++) {
                cout << "arr3D[" << i << "][" << j << "][" << k << "] = "
                     << arr3D[i][j][k] << endl;
            }
        }
    }

    return 0;
}


Program ini menunjukkan cara kerja array 1D, 2D, dan 3D di C++. Pertama, program menampilkan isi array satu dimensi berisi lima angka, lalu array dua dimensi berisi dua baris tiga kolom, dan terakhir array tiga dimensi berisi dua lapisan data. Semua elemen ditampilkan dengan perulangan sesuai jumlah dimensinya.


### Guided 2

#include <iostream>
using namespace std;

void tulis (int x) {
    for (int i = 0; i < x; i++) {
        cout << "Baris ke -: " << i+1 << endl;
    }
}

int main() {
    int jum;
    cout << "Jumlah baris kata: ";
    cin >> jum;
    tulis(jum);
    return 0;
}

Program ini meminta pengguna memasukkan jumlah baris yang ingin ditampilkan, lalu mencetak tulisan "Baris ke-" diikuti dengan nomor urutnya dari 1 sampai jumlah yang dimasukkan. Jadi, kalau kamu ketik 5, program bakal menampilkan 5 baris teks berurutan dari "Baris ke-1" sampai "Baris ke-5."

### Guided 3

#include <iostream>
using namespace std;

void tukar(int *x, int *y) {
    int temp;
    temp = *x;   
    *x = *y;     
    *y = temp;   
}

int main() {
    int a = 20, b = 30;
    int *ptr;

    ptr = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value stored in ptr (address of a): " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    tukar(&a, &b);
    cout << "After swapping, value of a = " << a << " and b = " << b << endl;

    return 0;
}

Program ini menunjukkan cara kerja pointer dan fungsi tukar nilai di C++.
Awalnya ada dua variabel a dan b (nilainya 20 dan 30). Pointer ptr menyimpan alamat dari a, lalu program menampilkan nilai dan alamat a, termasuk isi pointer-nya.
Setelah itu, fungsi tukar() dipanggil untuk menukar nilai a dan b lewat alamat memorinya (pakai pointer).
Hasil akhirnya, nilai a jadi 30 dan b jadi 20.

## Unguided 

### Soal 1
Buatlah program yang dapat melakukan operasi penjumlahan, pengurangan, dan
perkalian matriks 3x3

#include <iostream>
using namespace std;

void printMatriks(int mat[3][3], string nama) {
    cout << "Matriks " << nama << ":" << endl;
    for(int baris = 0; baris < 3; baris++) {  
        for(int kolom = 0; kolom < 3; kolom++) {
            cout << mat[baris][kolom] << "   ";  
        }
        cout << endl;
    }
    cout << endl;  
}

int main() {
    int mat1[3][3];  
    int mat2[3][3];  
    int res[3][3];   
    int pilih;       
    
    cout << "Masukin matriks pertama :" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Baris " << i+1 << ", Kolom " << j+1 << ": ";  // +1 biar user-friendly
            cin >> mat1[i][j];
        }
    }
    
    cout << "\nMasukin matriks kedua:" << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Baris " << i+1 << ", Kolom " << j+1 << ": ";
            cin >> mat2[i][j];
        }
    }
    
    printMatriks(mat1, "Pertama");
    printMatriks(mat2, "Kedua");
    
    cout << "Pilih operasi bro:" << endl;
    cout << "1 = Penjumlahan" << endl;
    cout << "2 = Pengurangan" << endl;
    cout << "3 = Perkalian" << endl;
    cout << "Masukin nomor (1-3): ";
    cin >> pilih;
    
    if(pilih == 1) {
        cout << "Penjumlahan" << endl;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                res[i][j] = mat1[i][j] + mat2[i][j];
            }
        }
        printMatriks(res, "Hasil Jumlah");
        
    } else if(pilih == 2) {
        cout << "Pengurangan" << endl;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                res[i][j] = mat1[i][j] - mat2[i][j];
            }
        }
        printMatriks(res, "Hasil Kurang");
        
    } else if(pilih == 3) {
        cout << "Perkalian" << endl;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                res[i][j] = 0;  
                for(int k = 0; k < 3; k++) {
                    res[i][j] += mat1[i][k] * mat2[k][j];  
                }
            }
        }
        printMatriks(res, "Hasil Kali");
        
    } else {
        cout << "Kalau salah! Coba lagi ." << endl;
        return 1;  
    }
    
    cout << "Selesai!." << endl;
    return 0;
}

### Output Unguided 1 :

##### Output 1
!Output-Unguided1-Modul2
Program ini dibuat untuk ngitung operasi antar dua matriks 3x3 (penjumlahan, pengurangan, atau perkalian).
Pertama, user disuruh ngisi dua matriks satu per satu. Setelah itu, program nampilin kedua matriks tersebut biar bisa dicek.
Lalu user milih operasi lewat angka 1-3. Kalau pilih 1, program bakal menjumlahkan tiap elemen matriks; kalau 2, mengurangkan; kalau 3, mengalikan dengan cara baris × kolom.
Hasil akhirnya ditampilkan dalam bentuk matriks baru, dan program ngasih pesan “Selesai!” di akhir.

### Soal 2 
Berdasarkan guided pointer dan reference sebelumnya, buatlah keduanya dapat
menukar nilai dari 3 variabel

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

### Output Unguided 2 :

##### Output 1
![Screenshot Output Unguided 2_2](https://github.com/Kafin21/103112430097_Kafin-Fazlur-Rahman/blob/main/Pertemuan2_Modul2/Output-Unguided2-Modul2.png)

Program ini minta kamu masukin tiga angka (A, B, C).
Terus nilainya ditukar urutannya — A jadi B, B jadi C, C jadi A.
Pertukaran itu dicoba dua cara: pertama pakai pointer, kedua pakai reference, tapi hasil akhirnya sama — nilai ketiganya saling tukar.

### Soal 3
Diketahui sebuah array 1 dimensi sebagai berikut :
arrA = {11, 8, 5, 7, 12, 26, 3, 54, 33, 55}
Buatlah program yang dapat mencari nilai minimum, maksimum, dan rata – rata dari
array tersebut! Gunakan function cariMinimum() untuk mencari nilai minimum dan
function cariMaksimum() untuk mencari nilai maksimum, serta gunakan prosedur
hitungRataRata() untuk menghitung nilai rata – rata! Buat program menggunakan
menu switch-case seperti berikut ini :
--- Menu Program Array ---
1. Tampilkan isi array
2. cari nilai maksimum
3. cari nilai minimum
4. Hitung nilai rata - rata 

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

### Output Unguided 3 :

##### Output 1
![Screenshot Output Unguided 3_2](https://github.com/Kafin21/103112430097_Kafin-Fazlur-Rahman/blob/main/Pertemuan2_Modul2/Output-Unguided3-Modul2.png)


Program ini menampilkan menu untuk mengolah data dalam sebuah array berisi 10 angka. Pengguna bisa pilih beberapa opsi: menampilkan semua isi array, mencari nilai paling besar (maksimum), mencari nilai paling kecil (minimum), atau menghitung rata-rata dari seluruh angka. Program akan terus berjalan sampai pengguna memilih keluar (pilihan 0).

## Kesimpulan
Program ini digunakan untuk mempermudah pengguna dalam mengolah data array berisi sejumlah angka. Dengan program ini, pengguna bisa melihat isi array, mengetahui nilai terbesar, nilai terkecil, dan menghitung rata-rata secara otomatis tanpa perlu menghitung manual. Program ini juga menggunakan struktur menu agar pengguna bisa memilih operasi yang diinginkan dengan mudah dan interaktif.

## Referensi
[1] Nugroho, A. (2022). “Penerapan Struktur Data Array pada Analisis Data Sederhana Menggunakan C++.” Jurnal Teknologi dan Sistem Komputer, 10(2). 
<br>[2] Sari, D., & Hidayat, A. (2020). Analisis Penggunaan Pointer dan Reference dalam Pengelolaan Memori di C++. Jurnal Informatika, 8(3), 112–118.
