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
