#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;
// int compare(int a,int b){
//     return a<b;
// }
// Driver Code
void bubble_sort(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        bool flag = false;
        for(int j=0;j<= n-i-1;j++){
            if(arr[j]> arr[j+1]){
                flag= true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(flag== false){
            break;
        }

}
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    bubble_sort(arr,n);
    for(auto x:arr){
        cout<<x<< ",";
    }
    return 0;
}
