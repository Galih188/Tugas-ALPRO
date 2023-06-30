#include <iostream>

using namespace std;

typedef struct rumus{
    float phi=3.14;
    int luasPersegiPanjang(int panjang, int lebar){
        return panjang*lebar;
    }
    float luasLingkaran(int r){
        return (22*r*r)/7;
    }
    float volKerucut(int r, int t){
        return (phi*r*r*t)/3;
    }
    float volBola(int r){
        return (4*phi*r*r*r)/3;
    }
};
struct rumus menghitung;


int main()
{
    cout << "Luas Persegi Panjang : ";
    cout << menghitung.luasPersegiPanjang(5,6) << endl;

    cout << "Luas Lingkaran : ";
    cout << menghitung.luasLingkaran(9) << endl;

    cout << "Volume Kerucut : ";
    cout << menghitung.volKerucut(4,8) << endl;

    cout << "Volume Bola : ";
    cout << menghitung.volBola(5) << endl;

    return 0;
}
