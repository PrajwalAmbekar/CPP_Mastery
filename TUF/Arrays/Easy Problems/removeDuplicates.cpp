#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements (sorted order): ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }   
    int j = 0; // Pointer for the position of the next unique element
    for(int i = 1; i < n; i++){
        if(arr[i] != arr[j]){
            j++;
            arr[j] = arr[i];
        }
    }
    cout << "Array after removing duplicates: ";
    for(int i = 0; i <= j; i++){
        cout << arr[i] << " ";
    }
    return 0;
}