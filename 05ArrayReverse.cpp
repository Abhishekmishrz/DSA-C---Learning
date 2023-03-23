#include <iostream>
using namespace std;

int arrayReverse(int arr[],int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s += 1;
        e -= 1;
    }

};
int main()
{
    int arr[] = {1,2,5,8,25,10,16,19,22,26,29,35,40};
    int n = sizeof(arr) / sizeof(int);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arrayReverse(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}