#include <iostream>
using namespace std;

void merge(int a[], int l, int m, int r) 
{
    int i = l, j = m + 1, k = l;
    int temp[100];

    while (i <= m && j <= r) {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= m) temp[k++] = a[i++];
    while (j <= r) temp[k++] = a[j++];

    for (i = l; i <= r; i++)
        a[i] = temp[i];
}

void mergeSort(int a[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr2[] = {38, 27, 43, 3, 9, 82, 10};

    int n1 = 6, n2 = 7;

    mergeSort(arr, 0, n1 - 1);
    mergeSort(arr2, 0, n2 - 1);

    cout << "Array 1: ";
    for (int i = 0; i < n1; i++) cout << arr[i] << " ";

    cout << "\nArray 2: ";
    for (int i = 0; i < n2; i++) cout << arr2[i] << " ";
}

