#include <iostream>
using namespace std;

int main() {
    
    int arr[8];
    
    
    cout << "Please enter 8 integer values:" << endl;
    for (int i = 0; i < 8; i++)
    {
        
        cin >> arr[i];
    }

    
    int max = arr[0];
    int min = arr[0];

    
    for (int i = 1; i < 8; i++) {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
        if (arr[i] < min) 
        {
            min = arr[i];
        }
    }

    
    cout << "Maximum number you entered is : " << max << endl;
    cout << "Minimum number you entered is : " << min << endl;

    return 0;
}
