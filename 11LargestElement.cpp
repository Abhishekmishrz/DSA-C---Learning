#include <iostream>
#include <vector>
using namespace std;
// Driver Code
// vector<int> arr={-3, 4 ,1, 2, 3};// Array 1
vector<int> arr={-1, -2, -3, -3, 8}; // Array 2

int main()
{
    int n = arr.size();
    int str = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(str<arr[i]){
            str= arr[i];
        }
    }
    cout<<str<<endl;
    
     return 0;
}