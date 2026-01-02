#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int arr[n];
    //Precomputing using map
    map<int,int> mpp;
    cout << "Enter the elements of array : ";
    for ( int i = 0; i < n; i++){
        cin >> arr[i];
        //Precomputing
        mpp[arr[i]]++;
    }
    //fetching
    for(auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }
}