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
    int smallest = INT_MAX;// Initialize smallest to maximum integer value which is 2147483647
    int secondSmallest = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] < smallest){
            secondSmallest = smallest;
            smallest =  arr[i];
        }
        else if(arr[i] < secondSmallest && arr[i] != smallest){
            secondSmallest = arr[i];
        }
    }
    cout << "The second smallest element is: " << secondSmallest << endl;
    return 0;
}