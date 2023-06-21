#include <iostream>
using namespace std;
int  kadansAlgo(int arr[],int n){
     int cs = 0;
     int logest = 0;
     for(int i=0; i<n;i++){
          cs = cs + arr[i];
          if(cs < 0){
               cs = 0;
          }
          logest = max(logest,cs);
     }
     return logest;
}

int main()
{
    // int arr[] ={-2, 3, 4, -1, 5, -12 , 6, 1, 3};
    int arr[] = {10,20,30,40,50,60};
    
    int n = sizeof(arr)/sizeof(int);
    cout<<kadansAlgo(arr, n);
     return 0;
}