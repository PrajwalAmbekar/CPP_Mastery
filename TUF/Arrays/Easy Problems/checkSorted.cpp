#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }   
    bool isSorted = true; //here we use this isSorted becoz in future if we want to send any msg or output cout we can use this boolean variable and send or we can directly return true or false without using this variable like in loop if arr[i]>arr[i+1] then return false; after loop return true;
    //
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i + 1]){
            isSorted = false;
            break;
        }
    }
    if(isSorted){
        cout << "The array is sorted." << endl;
    }
    else{
        cout << "The array is not sorted." << endl;
    }
    return 0;
}

