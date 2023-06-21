#include <iostream>
using namespace std;
// Driver Code
int PrintPair(int arr[],int n){
    for(int i=0;i<n;i++){
        int x = arr[i];
        for(int j=i+1;j<n;j++){
            int y = arr[j];
            cout<<"("<< x <<", "<< y<<")" << endl;
        }
        cout<<endl;

        
    }
}
int main()
{
    int arr[] ={ 1,2,5,8,25,10,16,19};
    int n = sizeof(arr)/sizeof(int);
    PrintPair(arr, n);
    // for(int x: arr){
    //     cout<<x<<endl;
    // }
    
    return 0;
}