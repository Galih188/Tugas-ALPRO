#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

void print(int A[],int n)
{
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}
void bubble(int A[],int n){
    if(n>1){
        for(int i=0;i<n-1;i++){
            if(A[i]>A[i-1]){
                swap(A[i],A[i+1]);
            }
        }
        bubble(A,n-1);
    }
}

int main()
{
    auto start = high_resolution_clock::now();
    int A[]={3, 4, 0, 22, 1};
    int n=sizeof(A)/sizeof(int);
    print(A,n);
    cout<<endl;
    bubble(A,n);
    print(A,n);
    cout<<endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Waktu yang dibutuhkan : "<< duration.count() << " microseconds" << endl;
    cout<< "Space Complexity = "<<sizeof(A)+sizeof(n)+sizeof(start)+sizeof(stop)+sizeof(duration)+sizeof(bubble(A,n))<<" Bytes";
    return 0;
}
