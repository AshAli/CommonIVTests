// C++ Program to swap two numbers  without 
// using temporary variable 
#include <iostream>
using namespace std;

int main() 
{ 
    int x = 10, y = 5; 
  
    cout << "Before Swapping: x =" << x << ", y=" << y << endl; 
    x = x + y; // x now becomes 15 
    y = x - y; // y becomes 10 
    x = x - y; // x becomes 5 
    cout << "After Swapping: x =" << x << ", y=" << y; 
    return 0;
} 