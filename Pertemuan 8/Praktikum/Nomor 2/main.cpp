#include <iostream>

using namespace std;

void shellsort(int A[], int n); //deklarasi (prosedur)
void selectionsort(int A[], int n);


int main()
{
    //Deklarasi Variabel
    int A[10];
    int n;

    //Judul
    cout << "******************************************\n" << endl;
    cout << "\t\tSorting" << endl;
    cout << "\n******************************************" << endl;

    //Input
    cout << "Inputkan jumlah array yang akan digunakan : ";
    cin >> n;
    for(int i=0; i<n; i++){
        cout << "Inputkan angka ke-" << i << " : ";
        cin >> A[i];
    }
    cout << endl;

    //Cetak Array Awal
    cout << "Element array saat ini (sebelum diurutkan) adalah : ";
    for(int j=0; j<n; j++){
        cout << A[j] << " ";
    }
    cout << endl << endl;

    //proses Shell Sort
    cout << "=============== ShellSort ===============" << endl;
    shellsort(A,n);

    cout << endl;

    //Cetak Array Hasil
    cout << "Element array setelah diurutkan adalah : ";
    for(int x=0; x<n; x++){
        cout << A[x] << " ";
    }
    cout << endl;
    //proses selection Sort
    cout << endl << "===================== Selection Sort =====================" << endl;
    selectionsort(A,n);

    cout << endl;

    //Cetak Array Hasil
    cout << "Elemen arraynya urutnya adalah: ";
    for (int u=0; u<n; u++){
        cout << A[u] << " ";
    }

    cout << endl;

    return 0;
}

void shellsort(int A[], int n)  //deklarasi & deskripsi
{
    for(int a = n/2; a > 0; a=a/2)
    {
        for(int b = a; b < n; b++)
        {
            for(int c = b-a; c >= 0; c-=a)
            {
                //proses swapnya
                if(A[c+a] > A[c])
                {
                    //proses penampungan & swap
                    int x = A[c+a];
                    A[c+a] = A[c];
                    A[c] = x;
                }
            }
        }
    }
}

void selectionsort(int A[], int n){
    for (int a=0; a<n; a++){
        int temp= A[a];
        int pos=a;
        for (int b=a; b<n; b++){
            //proses swap nya
            if (A[b]>temp){
                temp=A[b];
                pos=b;
            }
        }
        A[pos]= A[a];
        A[a]= temp;
    }
}
