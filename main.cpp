#include <iostream>
#include <array>
#include <algorithm> // Library untuk sorting

using namespace std;

int main(){
    system("cls");
    // Deklarasi Array 
    array<int, 10> Angka;
    array<char, 10> Huruf;
    int nomor = 1;

    cout << "1. Sorting Angka" << endl << endl;
    cout << "Masukkan Angka" << endl;
    
    //mengisi data pada array
    for (int &nilai : Angka){
        cout << "Angka ke-" << nomor << " : ";
        cin >> nilai;
        nomor++;
    }
    cout << endl;

    //Sorting
    sort(Angka.begin(), Angka.end()); // Memerlukan Angka Awal dan Akhir

    // Menampilkan
    cout << "Angka yang sudah diurutkan : ";
    for (int &nilai : Angka){
        cout << nilai << ", ";
    }
    cout << endl;
    system("pause");
    system("cls");

    nomor = 1;
    //Mengisi huruf pada array
    for (char &nilai : Huruf){
        cout << "Huruf ke-" << nomor << " : ";
        cin >> nilai;
        nomor++;
    }
    cout << endl;

    //Sorting
    sort(Huruf.begin(), Huruf.end()); // Memerlukan awal dan akhir

    //Menampilkan
    cout << "Huruf yang sudah diurutkan : ";
    for (char &nilai : Huruf){
        cout << nilai << ", ";
    }
    cout << endl;
    system("pause");
    system("cls");
    return 0;
}