#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    int i = l, j = m + 1;
    int temp[20], k = l;

    while (i <= m && j <= r) {
        if (arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= m)
        temp[k++] = arr[i++];

    while (j <= r)
        temp[k++] = arr[j++];

    for (int p = l; p <= r; p++)
        arr[p] = temp[p];
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr2[] = {38, 27, 43, 3, 9, 82, 10};

    int n1 = 6, n2 = 7;

    cout << "Array 1 before sorting: ";
    printArray(arr, n1);
    mergeSort(arr, 0, n1 - 1);
    cout << "Array 1 after sorting:  ";
    printArray(arr, n1);

    cout << "\nArray 2 before sorting: ";
    printArray(arr2, n2);
    mergeSort(arr2, 0, n2 - 1);
    cout << "Array 2 after sorting:  ";
    printArray(arr2, n2);

    return 0;
}

