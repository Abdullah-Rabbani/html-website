#include<iostream>
using namespace std;
int main()
{
    int i;
    int arr[5]={1,2,3,4,5};
    int sum=0;
    i=0;
    do
    {
        sum+=arr[i];
        i++;
    }
     while (i<5);
     {
        cout<<"sum"<<sum;
     }
    
    
}