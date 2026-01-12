#include <iostream>
using namespace std;
#include <vector>

int main(){
    // int n,k;
    // cout << "Enter the number of elements in the array: ";
    // cin >> n;
    // int arr[n];
    // cout << "Enter the elements of the array: ";
    // for(int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    // cout << "Enter the number of times to rotate the array: ";
    // cin >> k;
    // while(k > 0){
    //     int last =arr[n-1];
    //     for(int i = n-1; i > 0; i--){
    //         arr[i] = arr[i-1];
    //     }
    //     arr[0] = last;
    //     k--;
    // }
    //using vector
    int n,k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter the number of times to rotate the array: ";
    cin >> k;
    while(k > 0){
        int last =arr[n-1];
        for(int i = arr.size()-1; i > 0; i--){
            arr[i] = arr[i-1];
        }
        arr[0] = last;
        k--;
    }
    cout << "Array after rotation: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
//optimized version
// #include <iostream>
// #include <vector>
// using namespace std;

//int reverse(vector<int>& arr, int start, int end) {
//    while (start < end) { 
//        swap(arr[start], arr[end]);
//        start++;
//        end--;
//    }
//    return 0;
//}
// int main() {
//     int n, k;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)  
//         cin >> arr[i];
//     cin >> k;
//     k = k % n; // in case k is greater than n
//     reverse(arr, 0, n - 1);
//     reverse(arr, 0, k - 1);
//     reverse(arr, k, n - 1);
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }