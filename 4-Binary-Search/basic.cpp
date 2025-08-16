#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> &arr, int target){
    int n = arr.size();
    int low = 0;
    int high = n-1;

    while (low <= high)
    {
        int mid = (low + high)/2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {1, 2, 4, 6, 8, 10, 14};
    int result = binarySearch(arr, 1);
    cout << "Target found at index: " << result;
}

//lower bound(stl version)
int main() {
    vector<int> arr = {1, 2, 4, 4, 5, 7, 9};
    int x = 4;
    auto it = lower_bound(arr.begin(), arr.end(), x);
    cout << "Index: " << (it - arr.begin()) << endl;
}

//lower bound
int lowerBound(vector<int>& arr, int x) {
    int n = arr.size();
    int low = 0, high = n-1; 
    int ans = n;
    
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] <= x) {
            low = mid + 1;  
        } else {
            high = mid - 1;    
        }
    }
    return low;
}

int main() {
    vector<int> arr = {1, 2, 4, 4, 5, 7, 9};
    int x;

    cout << "Enter the number to find lower bound: ";
    cin >> x;

    int index = lowerBound(arr, x);

    if (index < arr.size())
        cout << "Lower bound of " << x << " is at index " << index 
             << " with value " << arr[index] << endl;
    else
        cout << "Lower bound of " << x << " is beyond the array (index = " << index << ")" << endl;

    return 0;
}

//upper bound
int upperBound(vector<int>& arr, int x) {
    int n = arr.size();
    int low = 0, high = n-1; 
    int ans = n;
    
    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] < x) {
            low = mid + 1;  
        } else {
            high = mid - 1;    
        }
    }
    return low;
}

int main() {
    vector<int> arr = {1, 2, 4, 4, 5, 7, 9};
    int x;

    cout << "Enter the number to find Upper bound: ";
    cin >> x;

    int index = upperBound(arr, x);

    if (index < arr.size())
        cout << "Upper bound of " << x << " is at index " << index 
             << " with value " << arr[index] << endl;
    else
        cout << "Upper bound of " << x << " is beyond the array (index = " << index << ")" << endl;

    return 0;
}
