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

int longestSubarray(vector<int> arr, int &ansStart, int &ansEnd){
    int sum = 0;
    int n = arr.size();
    int maxi = INT_MIN;
    int start = 0;
    ansStart = -1, ansEnd = -1;
    for(int i = 0; i < n; i++){
        if(sum == 0) start = i;
        sum += arr[i];
        if(sum > maxi){
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }
        if(maxi < 0) maxi = 0;
        if(sum < 0) sum = 0;
    }
    return maxi;
}

int buyAndSellStocks(vector<int> &prices){
    int n = prices.size();
    int mini = prices[0];
    int maxProfit = 0;

    for(int i = 0;i < n; i++){
        int cost = prices[i] - mini;
        maxProfit = max(maxProfit, cost);
        mini = min(mini, prices[i]);
    }
    return maxProfit;
}

vector<int> rearrangeElementsBySign(vector<int> &arr){
    int n = arr.size();
    int posIndex = 0, negIndex = 1;
    vector<int> ans(n, 0);
    for(int i = 0; i < n; i++){
        if(arr[i] < 0){
            ans[negIndex] = arr[i];
            negIndex += 2;
        }
        else{
            ans[posIndex] = arr[i];
            posIndex += 2;
        }
    }
    return ans;
}

void printVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
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

    // vector<int> arr2= {7,7,5,7,1,5,7,7,7,7,5,5,5,1};
    // cout << majorityElement(arr2);

    // // vector<int> arr3 = {-2, -3, 4, -1, -2, 1, 5, -3};
    // vector<int> arr3 = {-4,-3, -2, -1};
    // int startIndex, endIndex;
    // int result = longestSubarray(arr3, startIndex, endIndex);
    // cout << result << endl;
    // cout << "Subarray: ";
    // for (int i = startIndex; i <= endIndex; i++)
    // {   
    //     cout << "[" << arr3[i] << " " << "]";
    // }
    // cout << endl;
    
    // vector<int> arr4 = {1, 2, 3, 4};
    // cout << "Max Profit: " << buyAndSellStocks(arr4);

    vector<int> arr5 = {3, 1, -2, -5, 2, -4};
    cout << "Rearranged array: "; 
    printVector(rearrangeElementsBySign(arr5));
}