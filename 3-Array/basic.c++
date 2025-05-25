#include <iostream>
#include <vector>
#include <set>
using namespace std;

// largest element in an array
int largestElement(vector <int> &array, int n)
{
    int largest = array[0];

    for (int i = 1; i < n; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
    }
    cout << largest;
    return largest;
}

// Second largest element in an array
int secondLargestElement(vector <int> &array, int n)
{
    int largest = array[0];
    int secondlargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > largest)
        {
            secondlargest = largest;
            largest = array[i];
        }
        else if (array[i] < largest && array[i] > secondlargest)
        {
            secondlargest = array[i];
        }
    }
    cout << secondlargest;
    return secondlargest;
}

// Check if array is sorted
int checkArray(vector <int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

// remove duplicates from array
int removeDuplicates(vector <int> &arr, int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

// left rotate array by one element
void leftRotateByOne(vector <int> &arr, int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

// rotate array by d element
void leftRotate(vector <int> &arr, int n, int d)
{
    d = d % n;
    vector<int> temp(d);
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i];
    }
}

vector<int> moveZeroes(vector<int> &arr, int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    if (j == -1)
        return arr;

    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return arr;
}

int linearSearch(vector<int> &arr, int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}

// brute approach
vector<int> unionArray(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();
    set<int> st;
    for (int i = 0; i < n1; i++)
    {
        st.insert(a[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        st.insert(b[i]);
    }
    vector<int> temp;
    for (auto it : st)
    {
        temp.push_back(it);
    }
    return temp;
}

// optimal approach
vector<int> unionArr(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> UnionArr;

    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            if (UnionArr.empty() || UnionArr.back() != a[i])
            {
                UnionArr.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (UnionArr.empty() || UnionArr.back() != b[j])
            {
                UnionArr.push_back(b[j]);
            }
            j++;
        }
    }
    while (j < n2)
    {
        if (UnionArr.empty() || UnionArr.back() != b[j])
        {
            UnionArr.push_back(b[j]);
        }
        j++;
    }
    while (i < n1)
    {
        if (a[i] <= b[j])
        {
            if (UnionArr.empty() || UnionArr.back() != a[i])
            {
                UnionArr.push_back(a[i]);
            }
            i++;
        }
    }
    return UnionArr;
}

int findMissingNumber(vector<int> &arr, int n)
{
    int xor1 = 0, xor2 = 0;

    // XOR all elements in the array
    for (int i = 0; i < n - 1; i++)
    {
        xor1 ^= arr[i];
        xor2 ^= (i + 1);
    }

    xor2 ^= n;

    return xor1 ^ xor2;
}

int maxConsecutiveOnes(vector<int> arr)
{
    int cnt = 0;
    int maxi = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
            maxi = max(maxi, cnt);
        }
        else
        {
            cnt = 0;
        }
    }
    return maxi;
}

int numAppearOnce(vector<int> arr, int n){
    int xorr = 0;
    for(int i = 0; i < n; i++){
        xorr ^= arr[i];
    }
    return xorr;
}

int longestSubarrayWithSumK(vector<int> arr, long long k){
    int left = 0, right = 0;
    long long sum = arr[0];
    int maxLen = 0;
    int n = arr.size();

    while(right < n){
        while(left <= right && sum > k){
            sum -= arr[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if(right < n) sum+= arr[right];
    }
    return maxLen;
}

int main()
{
    int x;
    cout << "Enter the number of elements in your array: ";
    cin >> x;

    vector<int> arr(x);
    for (int i = 0; i < x; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    vector<int> a = {1, 2, 3, 5, 5, 6};
    vector<int> b = {1, 2, 2, 4, 5, 7, 8, 8};

    int y;
    cout << "Enter the number of elements in your array: ";
    cin >> y;

    vector<int> arr1(y);
    for(int i = 0; i < y; i++){
        cout << "Enter element " << i << ": ";
        cin >> arr1[i];
    }

    cout << "The largest element in your array is: ";
    largestElement(arr, x);
    cout << endl;

    cout << "The second largest element in your array is: ";
    secondLargestElement(arr, x);
    cout << endl;

    if (checkArray(arr, x))
    {
        cout << "The array is sorted" << endl;
    }
    else
    {
        cout << "The array is not sorted" << endl;
    }

    int uniqueCount = removeDuplicates(arr, x); // Store the new length

    cout << "The unique elements of the array are: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    leftRotateByOne(arr, x);

    cout << "The array after rotating it to left: ";
    for(int i = 0; i < x; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int d;
    cout << "Enter elements by which you want to rotate: ";
    cin >> d;
    leftRotate(arr, x, d);

    cout << "The array after rotating it to left by " << d << " elements : ";
    for(int i = 0; i < x; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    moveZeroes(arr1, y);
    cout << "Array after moving zeroes at the end: ";
    for(int i = 0; i < y; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;

    int k;
    cout << "Enter the element you want to know the index of: ";
    cin >> k;
    int index = linearSearch(arr, x, k);
    cout << "The index of the element is: " << index;

    vector<int> result = unionArray(a, b);

    cout << "Union of Arrays: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    vector<int> result = unionArr(a, b);

    cout << "Union of Arrays: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    int arr[] = {1, 2, 4, 5, 6}; // Missing number is 3
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Missing number: " << findMissingNumber(arr, n) << endl;

    vector<int> arr1 = {1, 2, 4, 6, 1, 1, 1, 1, 2, 3, 5, 6};
    int n = arr1.size();
    
    cout << maxConsecutiveOnes(arr1);

    vector<int> arr = {1, 1, 2, 2, 3, 4, 4, 5, 5};
    vector<int> arr1 = {1, 1, 2, 3, 3, 4, 4, 5, 5};
    int n = arr.size();
    
    cout << numAppearOnce(arr, n);
    cout << numAppearOnce(arr1, n);

    vector<int> arr = {1, 2, 3};
    cout << longestSubarrayWithSumK(arr, 3);

    return 0;
}
