#include <iostream>
using namespace std;

int main() {
    int arr[10] = {12, 13, 99, 78, 34, 22, 77, 33, 30, 45};

    for (int i = 0; i < 10; i++) 
    {
        if (arr[i] % 2 == 0) 
        {
            cout << arr[i] << " is even." << endl; 
        } else 
        {
            cout << arr[i] << " is odd." << endl;   
        }
    }

   
}
