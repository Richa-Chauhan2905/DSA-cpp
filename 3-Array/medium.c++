#include <bits/stdc++.h>

using namespace std;

string twoSum(int n, vector<int> &arr, int target){
    int left = 0, right = n-1;
    sort(arr.begin(), arr.end());
    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == target) return "YES";
        else if(sum < target) left++;
        else right--;
    }
    return "NO";
}

void sortedArray(vector<int>& arr, int n){
    int low = 0, mid = 0, high = n-1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++; 
        }
        else if (arr[mid] == 1) mid++;
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int majorityElement(vector<int> arr){
    int n = arr.size();
    int cnt = 0;
    int el;
    for(int i = 0; i < n; i++){
        if(cnt == 0){ //--> If count is 0 then switch el to next element (check notes)
            cnt = 1;
            el = arr[i];
        }
        else if(arr[i] == el){
            cnt++;
        }
        else cnt--;
    }
    int cnt1 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == el) cnt1++;
    }
    if(cnt1 > (n/2)) return el;
    return -1;
}

int main(){
    // vector<int> arr = {2,6,5,8,11};
    // int n = arr.size();
    // cout << twoSum(n, arr, 14);

    // vector<int> arr1 = {0,1,2,0,1,2,1,2,0,0,0,1};
    // sortedArray(arr1, arr1.size());

    // for(int num : arr1){
    //     cout << num << " ";
    // }

    vector<int> arr2= {7,7,5,7,1,5,7,7,7,7,5,5,5,1};
    cout << majorityElement(arr2);
}