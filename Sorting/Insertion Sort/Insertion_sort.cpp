#include <iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
    int key;
    
    for(int i=0; i<n; i++)
    {
        key = arr[i];

        int j;

        for(j=i-1; j>=0 && arr[j]>key; j--)
        {
            arr[j+1] = arr[j];
        }

        arr[j+1] = key;

    }
}

void printArray(int arr[], int n)
{
    for (int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    cout << "Sorted array : \n";
    printArray(arr, n);
}