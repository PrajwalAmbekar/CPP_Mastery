#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cout << "Enter the array size : " << endl;
    cin >> n;
    int arr[n];
    // precomuting
    unordered_map<int, int> map;
    cout << "Enter the array elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        map[arr[i]]++;
    }

    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;
    // fetching
    for (auto it : map)
    {
        int element = it.first;
        int count = it.second;

        if (count > maxFreq)
        {
            maxFreq = count;
            maxEle = element;
        }
        if (count < minFreq)
        {
            minFreq = count;
            minEle = element;
        }
    }
    cout << "The highest frequency number/element in array is: " << maxEle << endl;
    cout << "The lowest frequency number/element in array is: " << minEle << endl;
    return 0;
}