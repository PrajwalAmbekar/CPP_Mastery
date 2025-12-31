#include <iostream>
using namespace std;

int main()
{
    //arr[] input from user arr[]=[1,3,2,1,3]
    int n;
    cout << "Enter the number of elements: ";   
    cin >> n;
    int arr[n];
    cout << "Enter the elements: "; 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //hashing logic to find duplicates
    const int size = 100; // assuming the range of input numbers is within 0 to 99
    int hashTable[size] = {0}; // initialize hash table with 0
    cout << "Before hashing, the hashTable is: "<< hashTable << endl;
    for (int i = 0; i < n; i++)
    {
        hashTable[arr[i]]++;
    }   
    cout << "After hashing, the hashTable is: "<< hashTable << endl;  
    //query input from user
    int m;
    cout << "Enter the number of query elements: ";
    cin >> m; //input m
    int q[m];
    cout << "Enter the query elements: ";
    for (int i = 0; i < m; i++)
    {
        cin >> q[i];
    }
    //output the frequency of query elements
    for (int i = 0; i < m; i++)
    {
        cout << "Frequency of " << q[i] << " is: " << hashTable[q[i]] << endl;
    }
    return 0;
}