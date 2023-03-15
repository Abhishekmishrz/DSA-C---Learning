#include <iostream>
using namespace std;
// Driver Code

int LinearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
};
int main()
{
    int arr[]={12,45,8,9,7,5,6,7,8,22,2,3,5,9};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the key no \n";
    cin>>key;
    int index = LinearSearch(arr,n,key);
    if(index!=-1){
        cout<<key<<" is present at index "<<index;
    }else{
        cout<<key <<" is not present in arr";
    }
    return 0;
}