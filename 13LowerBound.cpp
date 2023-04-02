#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> arr, int target) {
    // your code goes here
    int s = 0;
    int n = arr.size();
    int e = n - 1;
    int ans = -1;
    while(s<=e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] <= target)
        {
            ans= arr[mid];
            s=mid+1;
        }
        else 
        {
            e = mid - 1;
        }
        
    }
    return ans;
    
}