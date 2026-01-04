#include <iostream>
using namespace std;

//using my aproach
// each time select first element from the unsorted array Which start from index 0 and ends initially n-1 then first iteration it will be from 0 to n-2 and so on..
// then compare it with all elements of sorted array like let example
//7,4,1,3,5
// first slect 7 from unsorted array(index 0 to 4) and then place it in sprted array initially it is empty like the 7 is stored at last index and all remaining four will be shifted right
// so array becomes4,1,3,5,7 where 7 is in sorted array and remaining are in unsorted array
// then again select first element from unsorted array that is 4 and compare it with sorted array elements from last to first and place it at correct position
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    // Insertion sort with RIGHT side as sorted part
    for(int i = n - 2; i >= 0; i--) {
        int key = arr[i];     // pick from unsorted (left)
        int j = i + 1;

        // shift elements in sorted part (right) to the left
        while(j < n && arr[j] < key) {
            arr[j - 1] = arr[j];
            j++;
        }

        // place key at correct position
        arr[j - 1] = key;
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
