#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
// Driver Code
vector<int> arr={1 ,-2, 3 ,4, 4, -2};// Array 1
// vector<int> arr={5, 0, -1, 0, 1, 2, -1}; // Array 2
int main()
{
    int cs =0;
    int logest =0;
    for(auto x: arr){
        cs = max( x,cs+x);
        logest = max(logest,cs);
    }
    cout<<logest;
     return 0;
}