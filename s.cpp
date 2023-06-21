#include <iostream>

using namespace std;

int main()
{
    int arr[6][5] = {
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5},
        {1,2,3,4,5}
    };
    int arr1 [] = {1,2,3,4,5};
    int n1 = arr1.length();
    cout<<n1;
    int rows = sizeof(arr)/sizeof(arr[0]);
    int cols = sizeof(arr[0])/sizeof(arr[0][0]);
    cout<<rows<<" "<<cols<<endl;

    return 0;
}