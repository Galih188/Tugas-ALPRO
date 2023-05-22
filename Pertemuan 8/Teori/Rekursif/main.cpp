#include <iostream>

using namespace std;

//1. Penjumlahan
int penjumlahan(int n){
    if(n == 0){
        return 0;
    }else{
        return n + penjumlahan(n - 1);
    }
}
//2. Pengurangan
int pengurangan(int a, int b){
    if(b == 0){
        return a;
    }else{
        return pengurangan(a - 1, b - 1);
    }
}
//3. Perkalian
int perkalian(int angka, int pengali){
    if(pengali == 0){
        return 0;
    }else{
        return angka + perkalian(angka, pengali - 1);
    }
}
//4. Pembagian
int pembagian(int angka, int pembagi){
    if(angka < pembagi){
        return 0;
    }else{
        return 1 + pembagian(angka - pembagi, pembagi);
    }
}
//5. Pangkat
int pangkat(int angka, int pemangkat){
    if(pemangkat == 0){
        return 1;
    }else{
        return angka * pangkat(angka, pemangkat - 1);
    }
}
//6. Fibonacci
int fibonacci(int n){
    if(n == 0 || n == 1){
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
//7. Faktorial
int faktorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }else{
        return n * faktorial(n-1);
    }
}

int main()
{
    cout << "----------------\n";
    cout << "|  Penjumlahan |\n";
    cout << "----------------\n";

    int input;
    cout << "Inputkan angka : ";
    cin >> input;

    int hasil1 = penjumlahan(input);
    cout << "Hasil penjumlahan " << input << " hingga " << input << " adalah : " << hasil1 << endl;

    cout << endl;

    cout << "----------------\n";
    cout << "|  Pengurangan |\n";
    cout << "----------------\n";

    int x, y;
    cout << "Inputkan angka pertama : ";
    cin >> x;
    cout << "Inputkan angka kedua : ";
    cin >> y;

    int hasil2 =  pengurangan(x, y);
    cout << "Hasil pengurangan dari " << x << " - " << y << " adalah : " << hasil2 << endl;

    cout << endl;

    cout << "----------------\n";
    cout << "|   Perkalian  |\n";
    cout << "----------------\n";

    int kali1, kali2;
    cout << "Inputkan angka pertama : ";
    cin >> kali1;
    cout << "Inputkan angka kedua : ";
    cin >> kali2;

    int hasil3 =  perkalian(kali1, kali2);
    cout << "Hasil perkalian dari " << kali1 << " * " << kali2 << " adalah : " << hasil3 << endl;

    cout << endl;

    cout << "----------------\n";
    cout << "|   Pembagian  |\n";
    cout << "----------------\n";

    int bagi1, bagi2;
    cout << "Inputkan angka pertama : ";
    cin >> bagi1;
    cout << "Inputkan angka kedua : ";
    cin >> bagi2;

    int hasil4 = pembagian(bagi1, bagi2);
    cout << "Hasil pembagian dari " << bagi1 << " / " << bagi2 << " adalah : " << hasil4 << endl;

    cout << endl;

    cout << "----------------\n";
    cout << "|   Pangkat    |\n";
    cout << "----------------\n";

    int angka, pemangkat;
    cout << "Inputkan angka : ";
    cin >> angka;
    cout << "Inputkan pangkat : ";
    cin >> pemangkat;

    int hasil5 = pangkat(angka, pemangkat);
    cout << "Hasil pangkat dari " << angka << " pangkat " << pemangkat << " adalah : " << hasil5 << endl;

    cout << endl;

    cout << "----------------\n";
    cout << "|   Fibonacci  |\n";
    cout << "----------------\n";

    int jumlah, j = 0;
    cout << "Inputkan jumlah angka dalam Fibonacci : ";
    cin >> jumlah;

    cout << "Hasil bilangan fibonacci : \n";
    for(int i=0; i<=jumlah; i++){
        cout << "Fibonacci ke-" << i << " : " << fibonacci(j) << endl;
    j++;
    }

    cout << endl;

    cout << "----------------\n";
    cout << "|   Faktorial  |\n";
    cout << "----------------\n";

    int fak;
    cout << "Inputkan basis faktorial : ";
    cin >> fak;

    int hasil7 = faktorial(fak);
    cout << "Faktorial dari " << fak << " adalah " << hasil7 << endl;
    return 0;
}
