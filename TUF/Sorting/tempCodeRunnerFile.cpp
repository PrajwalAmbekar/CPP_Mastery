#include <iostream>
using namespace std

// steps to quick sort
//1. choose pivot as last element
/2. check  for the element greater than pivot 
//3. create a void by shifting the element greater than pivot to the end
//4. if u found again an element greater than pivot repeat step 3 
//5. if u found the smaller element than save that small element in variable like this shift element upto the  first index found
//6. and if u found the greater element after saving the smaller element then in void already created at that index place that greater element and after end of loop place the small element created in void and place of old small position place the pivot
//7. now pivot is at its correct position and repeat the same for left and right side of pivot recursively
//8. base condition is when start>=end return


//Quick sort function
void quickSort(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }

    int pivot = arr[end];
    int i = start;

    for (int j = start; j < end; j++) {
        if (arr[j] < pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[end]);

    quickSort(arr, start, i - 1);
    quickSort(arr, i + 1, end);
}

int main() {
    int arr[] = {34, 7, 23, 32, 5, 62};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}