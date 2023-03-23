#include <iostream>
using namespace std;
// Driver Code

//This approch will take O(N^3)
int PrintSubArrat1(int arr[] ,int n){
    int result=0;
    for(int i =0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
           
            for(int k=i;k<=j;k++){
                
                sum  += arr[k];
                
            }
            result =max(result,sum);
            
        }
        return result;
    }
}
//PrefixSum Approch  for O(N^2)
int PrintSubArrat2(int arr[] ,int n){
    int prefix[100]={0};
    prefix[0]=arr[0];
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }
    int result=0;
    for(int i =0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            sum = (i>0) ? prefix[j] - prefix[i-1] : prefix[j];
            
            result =max(result,sum);
            
        }
        return result;
    }
}

int main()
{
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);
    cout<<PrintSubArrat1(arr ,n)<<endl;
    cout<<PrintSubArrat2(arr ,n);
    return 0;
}