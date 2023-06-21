#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

void print( int arr[100][100], int n, int m){

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {

    int n,m;
    int arr[1000][100];
    cout<<"please enter thr array" <<endl;
    cin>>n>>m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    print(arr,n,m);
    return 0;
}
