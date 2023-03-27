#include <iostream>

using namespace std;

bool isEven(int x);
bool isOdd(int x);
bool isFactor(int x, int y);
bool maxN(int a, int b);
bool minN(int a, int b);
int maxArray(int A[], int c);
int minArray(int A[], int c);
bool isFound(int x, int A[]);
void swapN(int x, int y);

int main()
{
    cout << "\t===== isEven =====" << endl;
    isEven(4);
    cout << endl;

    cout << endl << "\t===== isOdd =====" << endl;
    isOdd(5);
    cout << endl;

    cout << endl << "\t===== isFactor =====" << endl;
    isFactor(4,5);
    cout << endl;

    cout << endl << "\t===== MaxN =====" << endl;
    maxN(4,6);
    cout << endl;

    cout << endl << "\t===== MinN =====" << endl;
    minN(1,5);
    cout << endl;

    cout << endl << "\t===== swapN =====" << endl;
    swapN(4,1);
    cout << endl;

    cout << endl << "\t===== Max & Min Array =====" << endl;
    cout << "Inputkan Jumlah Array : ";
    int c;
    cin >> c;
    int A[c];
    for(int i=0; i<c; i++){
        cout << "Inputkan Nilai Array ke - " << i+1 << " : ";
        cin >> A[i];
    }
    cout << endl << "Nilai maxsimalnya adalah : " << maxArray(A,c) << endl;
    cout << "Nilai minimalnya adalah : " << minArray(A,c) << endl;

    cout << endl << "\t===== isFound =====" << endl;
    cout << "Inputkan angka yang akan dicari dalam array : ";
    int p;
    cin >> p;
    cout << "Ya = 1 dan Tidak = 0" << endl;
    cout << "Apakah nilai " << p << " terdapat pada array di atas? Jawabnya : " << isFound(p,A) << endl;
    cout << endl;

    return 0;
}

bool isEven(int x){
    if(x % 2 == 0){
        cout << x << " adalah bilangan genap";
        return true; //untuk bilangan genap
    } else {
        cout << x << " adalah bukan bilangan genap";
        return false; //untuk bukan bilangan genap
    }
}

bool isOdd(int x){
    if(x % 2 != 0){
        cout << x << " adalah bilangan ganjil";
        return true; //untuk bilangan genap
    } else {
        cout << x << " adalah bukan bilangan ganjil";
        return false; //untuk bukan bilangan ganjil
    }
}

bool isFactor(int x, int y){
    //apakah y = 0?
    if(y == 0){
        //jika y = 0, return false karena pembagian dengan 0 tidak terdfinisi
        cout << y << " tidak terdefinisikan";
        return false;
    }
    //apakah x dapat dibagi dengan y tanpa tersisa?
    if(x % y == 0){
        //jika ya, maka y adalah faktor dari x
        cout << y << " adalah faktor dari " << x;
        return true;
    } else {
        //jika tidak, maka y bukan faktor dari x
        cout << y << " bukan faktor dari " << x;
        return false;
    }
}


bool maxN(int a, int b){
    if(a > b){
        cout << a << " adalah nilai maksimal dari " << a << " & " <<  b;
        return true;
    } else {
        cout << a << " bukanlah nilai maksimal dari " << a << " & " <<  b;
        return false;
    }
}

bool minN(int a, int b){
    if(a < b){
        cout << a << " adalah nilai minimal dari " << a << " & " <<  b;
        return true;
    } else {
        cout << a << " bukanlah nilai minimal dari " << a << " & " <<  b;
        return false;
    }
}

int maxArray(int A[], int c){
    int temp = A[0];
    for(int i=0; i<c; i++){
        if(A[i] > temp){
            temp = A[i];
        }
    }
    return temp;
}

int minArray(int A[], int c){
    int temp = A[0];
    for(int i=0; i<c; i++){
        if(A[i] < temp){
            temp = A[i];
        }
    }
    return temp;
}

bool isFound(int x, int A[]){
    int p;
    for(int i=0; i<p; i++){
        if(A[i] == x){
            return true;
        }
    }
    return false;
}

void swapN(int x, int y){
    cout << "Hasil swap dari X = " << x << " & Y = " << y << " adalah ";
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "X = " << x << " & Y = " << y;
}
