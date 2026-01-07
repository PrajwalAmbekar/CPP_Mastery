#include <iostream>
using namespace std;

int partition(int arr[], int start, int end) {
    int pivot = arr[end];     // pivot = last element
    int i = start;            // this is the "void index"

    for (int j = start; j < end; j++) {
        if (arr[j] < pivot) {
            swap(arr[i], arr[j]);
            i++;              // move void forward
        }
    }

    // place pivot in its correct position
    swap(arr[i], arr[end]);
    return i;                 // pivot index
}

void quickSort(int arr[], int start, int end) {
    if (start >= end) return;

    int p = partition(arr, start, end);
    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}

int main() {
    int arr[] = {9, 4, 7, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
