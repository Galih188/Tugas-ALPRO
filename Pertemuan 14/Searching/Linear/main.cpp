#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

void print(int A[],int n)
{
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int linear(int A[],int n,int key)
{
    if(n==0){
        return -1;
    }
    if(A[n-1]==key){
        return n-1;
    }
    return linear(A,n-1,key);
}
int main()
{
    auto start = high_resolution_clock::now();

    int A[] = {2, 1, 7, 7, 9, 4, 5, 3};
    int n = sizeof (A) / sizeof (int);
    print(A,n);
    int key = linear(A,n,9);
    if(key <0){
        cout<<"Tidak ada didalam Array"<<endl;
    }else if(key >= 0){
        cout<<"Ada didalam Array"<<endl;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Waktu yang dibutuhkan : "<< duration.count() << " microseconds" << endl;
    cout<< "Space Complexity = "<<sizeof(A)+sizeof(n)+sizeof(start)+sizeof(stop)+sizeof(duration)+sizeof(linear(A,n,key))+sizeof(key)<<" Bytes";
    return 0;
}
