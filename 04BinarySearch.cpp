#include <iostream>
using namespace std;
// Driver Code
int BinarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
};
int main()
{
    int arr[] = {1,2,5,8,9,10,16,19,22,26,29,35,40};
    int n = sizeof(arr) / sizeof(int);
    int key;
    cout << "Enter the key no \n";
    cin >> key;
    int index = BinarySearch(arr, n, key);
    if (index != -1)
    {
        cout << key << " is present at index " << index;
    }
    else
    {
        cout << key << " is not present in arr";
    }
    return 0;
}