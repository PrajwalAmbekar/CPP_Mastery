#include <iostream>
using namespace std;

int main(){
    //string str input from user str="helloworld" only lowercase letters
    string str;
    cout << "Enter the string: ";
    cin >> str;
    //hashing logic to find frequency of characters
    const int size = 26;
    int hashTable[size] = {0}; // initialize hash table with 0
    cout << "Before hashing, the hashTable is: "<< hashTable << endl;
    for (char c : str)
    {
        hashTable[c - 'a']++;
    }
    cout << "After hashing, the hashTable is: "<< hashTable << endl;
    //query input from user
    int m;
    cout << "Enter the number of query characters: ";
    cin >> m; //input m
    char q[m];
    cout << "Enter the query characters: ";
    for (int i = 0; i < m; i++)
    {
        cin >> q[i];
    }
    //output the frequency of query characters
    for (int i = 0; i < m; i++)
    {
        cout << "Frequency of " << q[i] << " is: " << hashTable[q[i] - 'a'] << endl;
    }
    return 0;

}

//   //for all 256 ASCII characters
//     cout << "Frequencies of all ASCII characters:" << endl;
//     const int ascii_size = 256;
//     int asciiHashTable[ascii_size] = {0}; // initialize hash table with 0
//     for (char c : str)
//     {
//         asciiHashTable[(unsigned char)c]++;//cast to unsigned char to avoid negative index
//     }
    
//     //query input from user
//     int n;
//     cout << "Enter the number of query characters: ";
//     cin >> n; //input n
//     char p[n];
//     cout << "Enter the query characters: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> p[i];
//     }
//     //output the frequency of query characters
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Frequency of " << p[i] << " is: " << asciiHashTable[(unsigned char)p[i]] << endl;
//     }