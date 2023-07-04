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
void selectionSort (int arr[], int size, int i = 0)
{
    if (i < size)
    {
        int min = i;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
        selectionSort (arr, size, i += 1);
    }
}
int main()
{
    auto start = high_resolution_clock::now();

    int A[] = {3, 1, 7, 3, 6, 8};
    int n = sizeof(A)/sizeof(int);
    print(A,n);
    selectionSort(A,n);
    print(A,n);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Waktu yang dibutuhkan : "<< duration.count() << " microseconds" << endl;
    cout<< "Space Complexity = "<<sizeof(A)+sizeof(n)+sizeof(start)+sizeof(stop)+sizeof(duration)+sizeof(selectionSort(A,n))<<" Bytes";
    return 0;
}
