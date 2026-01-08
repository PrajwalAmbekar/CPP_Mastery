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
    int largest = INT_MIN; // value of largest initialized to minimum integer value which is -2147483648
    int secondLargest = INT_MIN; // value of second largest initialized to minimum integer value which is -2147483648   why this because if we have all negative values in array then this will work fine otherwise if we initialize second largest to 0 and all values are negative then it will print 0 as second largest which is incorrect                            
    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];
        }
    }

    if(secondLargest == INT_MIN){
        cout << "No second largest element" << endl;
    } else {
        cout << secondLargest << endl;
    }
    return 0;
}

// my initial logic find largest element from array in one loop and save the largest element in max after the end of the loop
// in separate loop find second largest element from array by checking this condition like second largest<i<max if true then update second largest = i
// but this logic take two loops to find largest and second largest element
// so to optimize this we can find both largest and second largest element in single loop by checking   
