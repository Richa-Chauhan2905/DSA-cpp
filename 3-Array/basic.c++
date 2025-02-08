#include <bits/stdc++.h>

using namespace std;

// largest element in an array
int largestElement(int array[], int n)
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
int secondLargestElement(int array[], int n)
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
int checkArray(int arr[], int n)
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

//remove duplicates from array
int removeDuplicates(int arr[], int n){
    int i = 0;
    for(int j = 1; j < n; j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

//left rotate array by one element
void leftRotateByOne(int arr[], int n){
    int temp = arr[0];
    for(int i = 1; i < n; i++){
        arr[i - 1] = arr[i]; 
    }
    arr[n - 1] = temp;
}

//rotate array by d element
void leftRotate(int arr[], int n, int d){
    d = d % n;
    vector<int> temp(d);
    for(int i = 0; i < d; i++){
        temp[i] = arr[i];
    }
    for(int i = d; i < n; i++){
        arr[i - d] = arr[i];
    }
    for(int i = 0; i < d; i++){
        arr[n - d + i] = temp[i];
    }
}

vector<int> moveZeroes(vector<int> &arr, int n){
    int j = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    if(j == -1) return arr;

    for(int i = j+1; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return arr;
}

int linearSearch(int arr[], int n, int num){
    for(int i = 0; i < n; i++){
        if(arr[i] == num){
            return i;
        }
    }
    return -1;
}

int main()
{
    int x;
    cout << "Enter the number of elements in your array: ";
    cin >> x;

    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }

    // int y;
    // cout << "Enter the number of elements in your array: ";
    // cin >> y;

    // vector<int> arr1(y);
    // for(int i = 0; i < y; i++){
    //     cout << "Enter element " << i << ": ";
    //     cin >> arr1[i];
    // }

    // cout << "The largest element in your array is: ";
    // largestElement(arr, x);
    // cout << endl;

    // cout << "The second largest element in your array is: ";
    // secondLargestElement(arr, x);
    // cout << endl;

    // if (checkArray(arr, x))
    // {
    //     cout << "The array is sorted" << endl;
    // }
    // else
    // {
    //     cout << "The array is not sorted" << endl;
    // }

    // int uniqueCount = removeDuplicates(arr, x); // Store the new length

    // cout << "The unique elements of the array are: ";
    // for (int i = 0; i < uniqueCount; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // leftRotateByOne(arr, x);

    // cout << "The array after rotating it to left: ";
    // for(int i = 0; i < x; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // int d;
    // cout << "Enter elements by which you want to rotate: ";
    // cin >> d;
    // leftRotate(arr, x, d);

    // cout << "The array after rotating it to left by " << d << " elements : ";
    // for(int i = 0; i < x; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    
    // moveZeroes(arr1, y);
    // cout << "Array after moving zeroes at the end: ";
    // for(int i = 0; i < y; i++){
    //     cout << arr1[i] << " ";
    // }
    // cout << endl;

    int k;
    cout << "Enter the element you want to know the index of: ";
    cin >> k;
    int index = linearSearch(arr, x, k);
    cout << "The index of the element is: " << index;

    
    return 0;
}
