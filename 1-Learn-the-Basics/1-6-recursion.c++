#include <bits/stdc++.h>

using namespace std;
// Recursion-->function calling itself

void f(){
    cout << 2; 
    // f();//-->calls the function until it runs out of memory
}

int main(){
    f();
}

//Printing name N times
int name(int i, int n){
    if(i > n){
        return 0;
    }
    else{
        cout << "ABC" << endl;
        return name(i+1, n);
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    name(1, n);
    return 0;
}


//Printing numbers from 1 to n
int number(int i, int n){
    if(i > n){
        return 0;
    }
    else{
        cout << i << endl;
        return number(i + 1, n);
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    number(1, n);
    return 0;
}

//Printing numbers n to 1
int number(int n, int i){
    if(i > n){
        return 0;
    }
    else{
        cout << n << endl;
        return number(n - 1, i);
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n < 1){
        cout << "Enter a number greater than 1!!";
    }

    number(n, 1);
    return 0;
}

//Printing numbers 1 to n(without using i+1)
int number(int i, int n){
    if(i < 1){
        return 0;
    }
    else{
    number(i-1, n);
    cout << i << endl;
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    number(n, n);//-->start from n
    return 0;
}

//Summation of N numbers
int add(int n, int sum){
    if(n < 1){
        cout << sum;
        return 0;
    }
    add(n - 1, sum + n);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    add(n, 0);//-->start from n
    return 0;
}  

// Factorial of N numbers
int fact(int n){
    if(n==0 || n == 1){
        return 1;
    }
    else{
        return n * fact(n - 1);
    }
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = fact(n);
    cout << result;
    return 0;
}  

//Reverse an array
int rev(int arr[], int n, int l = 0){
    if (l >= n/2) return 0;
    swap(arr[l], arr[n-l-1]);
    rev(arr, n, l+1);
}

int main(){
    int n;
    cout << ">>";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cout << "Enter element: ";
        cin >> arr[i];
    }
    rev(arr, n);

    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}

//Palindrome String 
string rev(string n, int l = 0){
    if (l >= n.length()/2) return n;
    swap(n[l], n[n.length() - l - 1]);
    return rev(n, l + 1);
}

int main(){
    string n, revN;
    cout << "Enter a word: ";
    cin >> n;

    revN = rev(n);

    if(n==revN){
        cout << "The word is palindrome.";
    }
    else{
        cout << "The word is not palindrome.";
    }
    return 0;
}

//Palindrome words
bool isPalindrome(int left, int right, const string& str){
    if(left >= right) return true;
    if(str[left] != str[right]) return false;
    isPalindrome(left + 1, right - 1, str);
    cout << str; 
}

int main(){
    string n, revN;
    cout << "Enter a word: ";
    cin >> n;

    if(isPalindrome(0, n.length() - 1, n)){
        cout << "The word is palindrome.";
    }
    else{
        cout << "The word is not palindrome.";
    }
    return 0;
}

// Fibonacci series
int fibonacci(int n){
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n-2);
}

int main(){
    int n;
    cout << "Enter number of terms: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << fibonacci(i) << " ";
    }
    cout << endl;
}