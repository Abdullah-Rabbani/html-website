#include<iostream>
using namespace std;
int main()
{
  int num;

    
    do {
        cout << "Enter a number between 1 and 10: ";
        cin >> num;
        if (num < 1 || num > 10)
        {
            cout << "Invalid input. Please try again." << endl;
        }
    } while (num < 1 || num > 10);

    cout << "Multiplication table for " << num << endl;
    for (int i = 1; i <= 10; i++) 
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }

}

