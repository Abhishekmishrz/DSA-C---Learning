#include <iostream>
#include <vector>
using namespace std;
// Driver Code
int main()
{
    // vector<int> arr={1,2,3,10,45,11};

    // Fill constructor
    vector<int> arr(10,1);

    
    // pop element in array
    arr.pop_back();

    // push element in array
    arr.push_back(16);

    //print all elements in array
    int n= arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

   /*/ //size of the vector
    cout<<arr.size()<<endl;
    //capacity of tha vector
    cout<<arr.capacity();*/
    return 0;
}