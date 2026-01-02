#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n]; 
    cout << "Enter " << n << " elements: ";
    // Input array elements
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // Selection Sort Algorithm
    for(int i = 0; i < n - 1; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        //swapping usind temp variable
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
        // Alternatively, swapping using std::swap from <algorithm>
        // std::swap(arr[i], arr[minIndex]);
        
    }
    // Output the sorted array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}