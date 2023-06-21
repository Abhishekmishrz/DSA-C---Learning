#include<iostream>
using namespace std;
void printArray(int arr[6]){
    cout <<"In Function this "<<sizeof(arr) <<endl;
    // int n = sizeof(arr)/sizeof(int);
    // for(int i =0;i<n;i++){
    //     cout<<arr[i]<<endl;
    // };
};
int main(){
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    printArray(arr);

	
	cout <<"In Main "<<sizeof(arr) <<endl;
    return 0;
}