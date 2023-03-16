/*
Program Penjumlahan, Pengurangan, Perkalian, Menghitung Total dan Rata-Rata Element di dalam Array.
Nama    : Galih Sabilah Rosat
NIM     : A11.2022.14290
Kelompok: A11.4207
*/
#include <iostream>

using namespace std;

//1. Penjumlahan
int penjumlahan(int a, int b){
    return a + b;
}
//2. Pengurangan
int pengurangan(int a, int b){
    return a - b;
}
//3. Perkalian
int perkalian(int a, int b){
    return a * b;
}
//4. Total
int total(int Array[], int jumlah){
    int hasil;
    for(int i=0; i < jumlah; i++){
        hasil += Array[i];
    }
    return hasil;
}
void arry(int Array[], int jumlah){
    cout << "[";
    for (int i=0; i<jumlah; i++){
        cout << Array[i];
        if(i < jumlah -1){
            cout << ",";
        } else {
            cout << "";
        }
    }
    cout << "]" << endl;
}
//5. Rata-Rata
float rata(int Array[], int jumlah){
    float hasil;
    for(int i=0; i<jumlah; i++){
        hasil += Array[i];
    }
    return hasil /= jumlah;
}

int main()
{
    //Kamus
    int input, a, b;
    input = 5;
    a = 13;
    b = 11;

    //Algoritma
    cout << "===== Penjumlahan 2 Bilangan =====" << endl;
    cout << "Hasil penjumlahan dari " << a << " + " << b << " = " << penjumlahan(a, b) << endl;
    cout << endl;

    cout << "===== Pengurangan 2 Bilangan =====" << endl;
    cout << "Hasil pengurangan dari " << a << " - " << b << " = " << pengurangan(a, b) << endl;
    cout << endl;

    cout << "===== Perkalian 2 Bilangan =====" << endl;
    cout << "Hasil perkalian dari " << a << " * " << b << " = " << perkalian(a, b) << endl;
    cout << endl;

    cout << "===== Total Element Dalam Array =====" << endl;
    cout << "Inputkan jumlah element array : ";
    cin >> input;
    int Array[input];
    for(int j=0; j<input; j++){
        cout << "Masukkan bilangan ke- " << j << " = ";
        cin >> Array[j];
    }
    arry(Array, input);
    cout << "Total \t : " << total(Array, input) << endl;
    cout << endl;

    cout << "===== Rata - Rata Element Dalam Array =====" << endl;
    cout << "Rata - Rata \t: " << rata(Array, input) << endl;

    return 0;
}
