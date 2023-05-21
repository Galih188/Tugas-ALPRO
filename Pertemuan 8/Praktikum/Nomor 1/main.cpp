#include <iostream>

using namespace std;

bool ganjil(int x){
    if(x % 2 == 1){
        return true;
    } else {
        return false;
    }
}
bool genap(int x){
    return x % 2 == 0;
}
void minGenap(int arr[], int n){
    int min = arr[0];
    int index;
    for(int i=0; i<n; i++){
        if(!ganjil(arr[i])){
            min = arr[i];
            index = i;
        }
    }
    cout << "Genap terkecil adalah : " << min << endl;
    cout << "Index ke : " << index;
}

int main()
{
    int arr[5] = {6,7,4,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    minGenap(arr,n);
    return 0;
}
