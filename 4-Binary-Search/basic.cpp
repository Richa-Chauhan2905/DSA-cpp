#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> &arr, int target)
{
    int n = arr.size();
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 4, 6, 8, 10, 14};
    int result = binarySearch(arr, 1);
    cout << "Target found at index: " << result;
}

// lower bound(stl version)
int main()
{
    vector<int> arr = {1, 2, 4, 4, 5, 7, 9};
    int x = 4;
    auto it = lower_bound(arr.begin(), arr.end(), x);
    cout << "Index: " << (it - arr.begin()) << endl;
}

// lower bound
int lowerBound(vector<int> &arr, int x)
{
    int n = arr.size();
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
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

// upper bound
int upperBound(vector<int> &arr, int x)
{
    int n = arr.size();
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] > x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}

int main()
{
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

// first and last occurrence
vector<int> searchRange(vector<int> &nums, int target)
{
    int n = nums.size();
    int lb = lowerBound(nums, target);
    if (lb == n || nums[lb] != target)
        return {-1, -1};
    return {lb, upperBound(nums, target) - 1};
}

//first and last occurrence without using lowerBound and upperBound
int firstOccurrence(vector<int> &arr, int target)
{
    int low = 0, high = arr.size() - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int lastOccurrence(vector<int> &arr, int target)
{
    int low = 0, high = arr.size() - 1;
    int ans = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

pair<int, int> firstAndLastOccurence(vector<int> &arr, int target){
    int first = firstOccurrence(arr, target);
    if (first == -1) return {-1, -1};
    int last = lastOccurrence(arr, target);
    return {first, last};
}

int main()
{
    vector<int> arr = {1, 2, 4, 4, 5, 7, 9};
    int target;

    cout << "Enter the number to find first and last occurrence: ";
    cin >> target;

    pair<int, int> result = firstAndLastOccurence(arr, target);

    if (result.first != -1)
        cout << "First occurrence of " << target << " is at index " << result.first
             << " and last occurrence is at index " << result.second << endl;
    else
        cout << target << " not found in the array." << endl;

    return 0;
}
