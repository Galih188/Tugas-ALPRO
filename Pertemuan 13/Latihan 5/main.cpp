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
    sepeda *bgn;
    bgn = &bagian;

    cout << "Merk Speda : ";
    cout << bgn->merk << endl;

    cout << "Tipe Sepeda : ";
    cout << bgn->type << endl;

    cout << "Tahun Sepeda : ";
    cout << bgn->tahun << endl;

    cout << "Harga Sepeda : ";
    cout << bgn->harga << endl;

    return 0;
}
