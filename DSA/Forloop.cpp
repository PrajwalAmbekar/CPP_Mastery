#include <iostream>
using namespace std;

int main (){
    for (int i = 1; i <= 10; i++) {
        cout << "Iteration " << i << endl;
    }
    // This loop prints the iteration number from 1 to 10
    // Infinite loop with a break condition
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int i = 1;
    for (;;) {
        if (i > n) {
            break;// Exit the loop when i exceeds n
        }
        cout << "Count: " << i << endl;
        i++;
    }
    return 0;
}
// This program demonstrates the use of for loops in C++, including a standard loop and an infinite loop with a break condition.
// Compile with C++17 standard
// g++ -std=c++17 DSA/Forloop.cpp -o Forloop
// Run the program
// ./Forloop
// Expected Output:
// Iteration 1
// Iteration 2
// ...
// Iteration 10 
// Enter a number: 5
// Count: 1 
// Count: 2
// Count: 3
// Count: 4
// Count: 5
// Note: The actual output will depend on the user input for the number.    