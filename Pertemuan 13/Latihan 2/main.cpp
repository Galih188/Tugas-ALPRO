#include <iostream>

using namespace std;

struct sepeda{
    string merk = "Polygon";
    string type = "Sepeda Gunung";
    int tahun = 2013;
    string harga = "2.000.000";
};

int main()
{
    sepeda bagian;

    cout << "Merk Speda : ";
    cout << bagian.merk << endl;

    cout << "Tipe Sepeda : ";
    cout << bagian.type << endl;

    cout << "Tahun Sepeda : ";
    cout << bagian.tahun << endl;

    cout << "Harga Sepeda : ";
    cout << bagian.harga << endl;

    return 0;
}
