#include <iostream>
#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

void print(int A[],int n)
{
    for(int i=0; i<n ;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void insertionSort (int arr[], int size, int i = 1)
{
    if (i <= size)
    {
        int j = i;
        while (arr[j - 1] > arr[j] && j > 0)
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
        insertionSort (arr, size, i += 1);
    }
}

int main()
{
    auto start = high_resolution_clock::now();

    int A[] = {9, 4, 2, 5, 3, 6, 2, 1};
    int n = sizeof (A) / sizeof (int);
    print(A,n);
    insertionSort(A,n);
    print(A,n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Waktu yang dibutuhkan : "<< duration.count() << " microseconds" << endl;
    cout<< "Space Complexity = "<<sizeof(A)+sizeof(n)+sizeof(start)+sizeof(stop)+sizeof(duration)+sizeof(insertionSort(A,n))<<" Bytes";
    return 0;
}
