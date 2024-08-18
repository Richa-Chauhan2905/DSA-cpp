#include <bits/stdc++.h>

using namespace std;

//Count number of times a number appear in an array
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter " << i + 1 << " : ";
        cin >> arr[i];
    }

    //precompute
    int hash[13] = {0};
    for(int i = 0; i < n; i++){
        hash[arr[i]]++;
    }

    int q;
    cout << "Frequencies of how many numbers do you want to find? ";         
    cin >> q;

    while(q--){
        int number;
        cout << "Enter number you want to know frequency of: ";
        cin >> number;

        cout <<"Frequency is: " << hash[number] << endl;
    }
 return 0;
}


//Count number of times a character appear in an array
int main(){
    int s;
    cout << "Enter number of elements: ";
    cin >> s;

    vector<char> arr(s);
    for(int i = 0; i < s; i++){
        cout << "Enter " << i + 1 << " element: ";
        cin >> arr[i];
    }

    int hash[25] = {0};
    for(int i = 0; i < s; i++){
        if(arr[i] >= 'a' && arr[i] <= 'z'){
            hash[arr[i] - 'a']++;
        }
    }

    int q;
    cout << "Frequencies of how many characters do you want to find? ";         
    cin >> q;

    while(q--){
        char character;
        cout << "Enter character you want to know frequency of: ";
        cin >> character;

        if(character >= 'a' && character <= 'z'){
            cout << "Frequency is: " << hash[character - 'a'] <<endl;
        }
        else{
            cout << "Invalid input!! Enter a lowecase character.";
        }
    }
 return 0;
}


// now if we need to hash values mores than 10^6 or 7 then?
// we will use map and unordered map for the same
// syntax: map<int, int> ---> (key, value)
// map ---> stores the sorted array by default
// unordered map ---> stores the array in a random manner, not sorted

// in array hashing you have to declare a 13 size array if the input is 1,2,3 and 12, more space stored which is unnecessary
// map won't store unnecessary space, only the number or character present inside the array, it'll store in it.
// space complexity reduced


// Counting frequencies of array elements (number hashing using map ordered map)
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    //pre-compute
    map<int, int> mpp;
    for(int i = 0; i < n; i++){
        cout << "Enter " << i + 1 << " element: ";
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    int q;
    cout << "Frequencies of how many characters do you want to find? ";         
    cin >> q;

    while(q--){
        int number;
        cout << "Enter character you want to know frequency of: ";
        cin >> number;
        
        cout << "Frequency is: " << mpp[number] <<endl;
    }
 return 0;
}


// Counting frequencies of array elements (number hashing using map unordered map)
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    //pre-compute
    unordered_map<int, int> mpp;
    for(int i = 0; i < n; i++){
        cout << "Enter " << i + 1 << " element: ";
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    for(auto iter : mpp){
        cout << iter.first << " --> " << iter.second << endl;
        // iter.first refers to the key
        // iter.second refers to the value (frequency in this case)   
    }

    int q;
    cout << "Frequencies of how many characters do you want to find? ";         
    cin >> q;

    while(q--){
        int number;
        cout << "Enter character you want to know frequency of: ";
        cin >> number;
        
        cout << "Frequency is: " << mpp[number] <<endl;
    }
 return 0;
}


// Counting frequencies of array elements (character hashing using map and unordered map)
int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;

    unordered_map<char, int> mpp;
    for(int i = 0; i < s.size() ; i++){
        mpp[s[i]]++;
    }

    for(auto iter : mpp){
        cout << iter.first << " --> " << iter.second << endl;
    }

    int q;
    cout << "Frequencies of how many characters do you want to find? ";
    cin >> q;

    while(q--){
        char character;
        cout << "Enter character you want to know frequency of: ";
        cin >> character;

        cout << "Frequency is: " << mpp[character];
    }
    return 0;
}


// Finding highest/lowest frequency element(number)
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    //pre-compute
    unordered_map<int, int> mpp;
    for(int i = 0; i < n; i++){
        cout << "Enter " << i + 1 << " element: ";
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    int maxFreq = INT_MIN; // Initialize to the smallest possible integer
    int minFreq = INT_MAX; // Initialize to the largest possible integer
    int maxFreqElement, minFreqElement;

    for(auto iter : mpp){
        if(iter.second > maxFreq){
            maxFreq = iter.second;
            maxFreqElement = iter.first;
        }
        if(iter.second < minFreq){
            minFreq = iter.second;
            minFreqElement = iter.first;
        }

    }
    cout << "The maximum frequency element is " << maxFreqElement << "(Frequency --> " << maxFreq << ")" << endl;
    cout << "The minimum frequency element is " << minFreqElement << "(Frequency --> " << minFreq << ")" << endl;
return 0;
}


// Finding highest/lowest frequency element(character)
int main(){
    string s;
    cout << "Enter string: ";
    cin >> s;

    //pre-compute
    unordered_map<char, int> mpp;
    for(int i = 0; i < s.size(); i++){
        mpp[s[i]]++;
    }

    int maxFreq = INT_MIN; // Initialize to the smallest possible integer
    int minFreq = INT_MAX; // Initialize to the largest possible integer
    int maxFreqElement, minFreqElement;

    for(auto iter : mpp){
        if(iter.second > maxFreq){
            maxFreq = iter.second;
            maxFreqElement = iter.first;
        }
        if(iter.second < minFreq){
            minFreq = iter.second;
            minFreqElement = iter.first;
        }

    }
    cout << "The maximum frequency element is " << char(maxFreqElement) << "(Frequency --> " << maxFreq << ")" << endl;
    cout << "The minimum frequency element is " << char(minFreqElement) << "(Frequency --> " << minFreq << ")" << endl;
    
return 0;
}