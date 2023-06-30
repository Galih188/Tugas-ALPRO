#include <iostream>

using namespace std;

typedef struct mahasiswa1{
    string nim;
    string nama;
    string jurusan;
    int tahun;
}mhs1;
typedef struct mahasiswa2{
    string nim;
    string nama;
    string jurusan;
    int tahun;
}mhs2;

int main()
{
    int x;

    mhs1 data[4];
    data[0].nim = "A11.2020.01234";
    data[0].nama = "\tAndi";
    data[0].jurusan = "\tBroadcasting\t";
    data[0].tahun = 2023;
    data[1].nim = "A11.2010.01234";
    data[1].nama = "\tBudi";
    data[1].jurusan = "\tSistem Informasi";
    data[1].tahun = 2013;
    data[2].nim = "A11.2000.01234";
    data[2].nama = "\tAli";
    data[2].jurusan = "\tDKV\t\t";
    data[2].tahun = 2003;
    data[3].nim = "A11.1990.01234";
    data[3].nama = "\tSiti";
    data[3].jurusan = "\tKesehatan\t";
    data[3].tahun = 1993;

    cout << "**********Statis**********" << endl;
    cout << "\tNIM\t\t\Nama\t\tJurusan\t\t\tTahun Lulus" << endl;
    for (int i=0; i<4; i++){
        cout << data[i].nim << "\t" << data[i].nama << "\t" << data[i].jurusan << "\t" << data[i].tahun << "\t" << endl;
    }

    cout  << endl << "**********Dinamis**********" << endl;
    cout << "Masukkan jumlah data : ";
    cin >> x;
    mhs2 data2[x];
    for(int i=0; i<x; i++){
        cout << "NIM : ";
        cin >> data2[i].nim;
        cout << "Nama : ";
        cin >> data2[i].nama;
        cout << "Jurusan : ";
        cin >> data2[i].jurusan;
        cout << "Tahun Lulus : ";
        cin >> data2[i].tahun;

        cout << endl;
    }
    cout << endl << "\tNIM\t\tNama\t\tJurusan\t\t\tTahun Lulus" << endl;
    for(int i=0; i<x; i++){
        cout << data2[i].nim << "\t\t" << data2[i].nama << "\t\t" << data2[i].jurusan << "\t\t" << data2[i].tahun << "\t" << endl;
    }

    return 0;
}
