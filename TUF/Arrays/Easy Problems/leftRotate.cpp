#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the numbers of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n-1; i++){
        int temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;
    }
    cout << "Array after left rotation: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
//optimized version
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     if (n <= 1) return 0;

//     int arr[n]; // okay for learning, not interview
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];

//     int temp = arr[0];
//     for(int i = 1; i < n; i++)
//         arr[i-1] = arr[i];
//     arr[n-1] = temp;

//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }
