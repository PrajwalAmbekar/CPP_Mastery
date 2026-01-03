#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // Bubble Sort Algorithm
    for(int i = n-1; i > 0; i--){
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)

// what if the array is already sorted? The algorithm will still perform O(n^2) comparisons, making it inefficient for nearly sorted arrays.
// To optimize, we can add a flag to check if any swaps were made during a pass. If no swaps were made, the array is already sorted, and we can terminate early.
//for(int i = n-1; i > 0; i--){
//    bool swapped = false; 
//    for(int j = 0; j < i; j++){
//        if(arr[j] > arr[j+1]){
//            int temp = arr[j];
//            arr[j] = arr[j+1];    
//            arr[j+1] = temp;
//            swapped = true;
//        }
//    }
//    if(!swapped) break; // Array is sorted  ans here break works like return and it won't go to next iteration like i=1,2,3,4,5... etc
//}