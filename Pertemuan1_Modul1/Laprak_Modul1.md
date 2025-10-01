# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>
<p align="center">Kafin Fazlur Rahman - 103112430097</p>

## Dasar Teori
Pemrograman dengan bahasa C++ melibatkan beberapa konsep dasar yang penting. Pertama, operasi aritmatika seperti penjumlahan, pengurangan, perkalian, dan pembagian digunakan untuk melakukan perhitungan matematis. Pada kasus tertentu, diperlukan percabangan (if-else) untuk menangani kondisi khusus, misalnya mencegah kesalahan pembagian dengan nol. Selanjutnya, penggunaan array dan string memungkinkan penyimpanan serta pengolahan data berupa teks, seperti pada konversi angka menjadi kata. Terakhir, konsep perulangan (looping), termasuk nested loop, digunakan untuk mengeksekusi instruksi secara berulang dan menghasilkan pola tertentu. Keempat konsep ini merupakan fondasi utama dalam penguasaan logika pemrograman C++.

### A. Code: Blocks IDE <br/>
...
#### 1. Pengertian code: Blocks
#### 2. Fungsi dan Kegunaan
#### 3. Cara Instalasi Singkat

### B. Pengenalan Bahasa C++ <br/>
...
#### 1. Struktur Dasar Program
#### 2. Input dan Output
#### 3. Kompilasi dan Eksekusi Program

## Guided 

### 1. ...

```C++
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Masukkan angka1: ";
    cin >> a;
    cout << "Masukkan angka2: ";
    cin >> b;

    
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;

    
    cout << "a > b  = " << (a > b) << endl;
    cout << "a < b  = " << (a < b) << endl;
    cout << "a >= b = " << (a >= b) << endl;
    cout << "a <= b = " << (a <= b) << endl;
    cout << "a == b = " << (a == b) << endl;
    cout << "a != b = " << (a != b) << endl;

    return 0;
}

```
Program itu minta dua angka dari pengguna, lalu menampilkan hasil operasi matematika dasar (tambah, kurang, kali, bagi, modulus) dan juga hasil perbandingan antara kedua angka tersebut (lebih besar, lebih kecil, sama dengan, atau tidak sama dengan).

### 2. ...

```C++
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    int j = 20;

    while (i <= 10) {
        cout << i << "-";
        i++;
    }

    cout << endl;

    do {
        cout << j << "-";
        j++;
    } while (j <= 10);

    return 0;
}

```
Program ini menggunakan dua variabel, yaitu i yang dimulai dari 0 dan j yang dimulai dari 20. Pada bagian pertama, ada perulangan while yang akan terus berjalan selama nilai i masih kurang dari atau sama dengan 10. Setiap kali perulangan, nilai i ditampilkan di layar diikuti dengan tanda strip, lalu nilainya bertambah satu. Hasilnya, program akan menampilkan angka dari 0 sampai 10 secara berurutan. Setelah itu, program masuk ke bagian do...while yang bekerja dengan cara menjalankan perintah sekali terlebih dahulu sebelum memeriksa kondisi. Karena nilai j sudah bernilai 20 (lebih besar dari 10), perulangan ini hanya akan menampilkan angka 20 sekali saja, kemudian berhenti. Jadi secara keseluruhan, output program menampilkan deretan angka dari 0 sampai 10, kemudian diikuti angka 20 di akhir.
### 3. ...

```C++
#include <iostream>
using namespace std;

int main() {
    int angka1 = 10;
    int angka2 = 20;

    if (angka1 > angka2) {
        cout << "Angka 1 lebih besar dari Angka2" << endl;
    } else if (angka1 < angka2) {
        cout << "Angka 1 lebih kecil dari Angka2" << endl;
    } else {
        cout << "Angka 1 sama dari Angka2" << endl;
    }

    return 0;
    
}

```
Program ini membandingkan dua nilai, yaitu angka1 = 10 dan angka2 = 20. Karena 10 lebih kecil dari 20, maka output yang ditampilkan adalah "Angka 1 lebih kecil dari Angka2". Jika kedua nilainya sama, program akan menampilkan "Angka 1 sama dari Angka2", sedangkan jika angka1 lebih besar, maka akan muncul "Angka 1 lebih besar dari Angka2".

## Unguided 

### 1. Soal Unguided 1
Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.

```C++
#include <iostream>
using namespace std;

int main() {
    float a, b;  
    
    
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;
    
    
    if (b == 0) {
        cout << "Pembagian tidak dapat dilakukan karena pembagi adalah nol!" << endl;
    } else {
        
        cout << "Hasil penjumlahan (" << a << " + " << b << "): " << (a + b) << endl;
        cout << "Hasil pengurangan (" << a << " - " << b << "): " << (a - b) << endl;
        cout << "Hasil perkalian (" << a << " * " << b << "): " << (a * b) << endl;
        cout << "Hasil pembagian (" << a << " / " << b << "): " << (a / b) << endl;
    }
    
    return 0;
}

```
### Output Unguided 1 :

##### Output 1
![Screenshot Output Unguided 1_1](https://github.com/Kafin21/103112430097_Kafin-Fazlur-Rahman/blob/main/Pertemuan1_Modul1/Output-Unguided1_Modul1.png)


##### Output 2
![Screenshot Output Unguided 1_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

Program ini meminta pengguna untuk memasukkan dua bilangan. Setelah itu, program akan mengecek apakah bilangan kedua bernilai nol. Kalau iya, program menampilkan pesan bahwa pembagian tidak bisa dilakukan karena pembaginya nol. Tapi kalau tidak nol, program akan menampilkan hasil penjumlahan, pengurangan, perkalian, dan pembagian dari kedua bilangan tersebut.

### 2. Soal Unguided 2
Buatlah sebuah program yang menerima masukkan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di-input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100  

```C++
#include <iostream>
#include <string>

using namespace std;

string satuan(int n) {
    string kata[] = {"nol", "satu", "dua", "tiga", "empat", "lima",
                     "enam", "tujuh", "delapan", "sembilan"};
    return kata[n];
}

string belasan(int n) {
    string kata[] = {"sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas",
                     "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
    return kata[n - 10];
}

string puluhan(int n) {
    string kata[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh",
                     "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};
    return kata[n];
}

int main() {
    int angka;
    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    if (angka < 0 || angka > 100) {
        cout << "Angka harus antara 0 sampai 100." << endl;
        return 1;
    }

    if (angka == 100) {
        cout << "seratus" << endl;
        return 0;
    }

    if (angka < 10) {
        cout << satuan(angka) << endl;
    } else if (angka < 20) {
        cout << belasan(angka) << endl;
    } else {
        int puluh = angka / 10;
        int satu = angka % 10;
        if (satu == 0) {
            cout << puluhan(puluh) << endl;
        } else {
            cout << puluhan(puluh) << " " << satuan(satu) << endl;
        }
    }

    return 0;
}

```
### Output Unguided 2 :

##### Output 1
![Screenshot Output Unguided 2_1](https://github.com/Kafin21/103112430097_Kafin-Fazlur-Rahman/blob/main/Pertemuan1_Modul1/Output-Unguided2-Modul1.png)

##### Output 2
![Screenshot Output Unguided 2_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

Program ini meminta input angka dari 0 sampai 100 lalu menampilkannya dalam bentuk kata. Angka kecil diproses lewat fungsi satuan atau belasan, sedangkan angka puluhan dibentuk dari kombinasi puluhan dan satuan.

### 3. Soal Unguided 3
Buatlah program yang dapat memberikan input dan output sbb.
input: 3
output: 3 2 1 * 1 2 3
         2 1 * 1 2
           1 * 1
             *

```C++
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan angka: ";
    cin >> n;

    for (int a = n; a >= 1; a--) {
        for (int b = a; b >= 1; b--) {
            cout << b << " ";
        }
        cout << "* ";
        for (int b = 1; b <= a; b++) {
            cout << b << " ";
        }
        cout << endl;
    }

    cout << "*" << endl;
    return 0;
}

```
### Output Unguided 3 :

##### Output 1
![Screenshot Output Unguided 3_1](https://github.com/Kafin21/103112430097_Kafin-Fazlur-Rahman/blob/main/Pertemuan1_Modul/Output-Unguided3-Modul1.png)


##### Output 2
![Screenshot Output Unguided 3_2](https://github.com/(username github kalian)/(nama repository github kalian)/blob/main/(path folder menyimpan screenshot output)/(nama file screenshot output).png)

Program ini meminta pengguna memasukkan sebuah angka, lalu menampilkan pola angka berbentuk segitiga. Di setiap baris, angka ditulis mundur dari nilai a ke 1, kemudian dicetak tanda bintang *, lalu dilanjutkan dengan angka maju dari 1 sampai a. Pola ini terus berulang hingga nilai a turun ke 1, dan di bagian akhir program menambahkan satu baris berisi tanda *.

## Kesimpulan
Dari beberapa program yang telah dipelajari, dapat dilihat bahwa seluruh contoh kode berfungsi sebagai latihan dasar pemrograman C++. Program-program tersebut meliputi perhitungan aritmatika, perbandingan dua nilai, penggunaan percabangan if...else, penerapan perulangan while, do...while, dan for, hingga pembuatan fungsi sederhana untuk mengubah angka menjadi kata. Ada juga latihan membuat pola angka menggunakan perulangan bersarang. Melalui latihan ini, mahasiswa dapat memahami cara kerja input–output, operator, kondisi, perulangan, dan fungsi dalam C++ sebagai bekal untuk mempelajari konsep yang lebih lanjut.

## Referensi
[1] Harnadi, B., Putra, A. E., Bima, W. E., dkk. (2020). Dasar Algoritma dan Pemrograman dengan C++. https://www.unika.ac.id/wp-content/uploads/2025/02/ebook-Berdi-Dasar-Logika-Pemrograman-C.pdf  
<br>