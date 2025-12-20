#include <iostream>
using namespace std;

// Traversing an array using basic for loop and printing elements

class Solution {
public:
    void Traversed_array(int original_array[], int size) {
        cout << "The elements of the array are: ";
        for (int i = 0; i < size; i++) {
            cout << original_array[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Solution obj;
    int my_array[8];

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < 8; i++) {
        cin >> my_array[i];
    }

    obj.Traversed_array(my_array, 8);

    return 0;
}
