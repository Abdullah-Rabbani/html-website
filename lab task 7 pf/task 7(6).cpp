#include <iostream>
using namespace std;

int main() {
    int arr[10];
    
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;
    
    cout << "Enter 10 integers:"<<endl;
    for (int i = 0; i < 10; i++) 
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < 10; i++) 
    {
        if (arr[i] > 0) 
        {
            positiveCount++;  
        } else if (arr[i] < 0)
        {
            negativeCount++; 
        } else {
            zeroCount++;  
        }
    }
    
    cout << "Positive numbers: " << positiveCount << endl;
    cout << "Negative numbers: " << negativeCount << endl;
    cout << "Zero numbers: " << zeroCount << endl;
    
  
}