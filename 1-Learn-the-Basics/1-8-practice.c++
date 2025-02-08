#include <iostream>
#include <limits.h>
#include <vector>
#include <math.h>

using namespace std;

// Given a number n. Count the number of digits in n which evenly divide n. Return an integer, total number of digits of n which divides n evenly.

int CountDigits(int n){
    int count = 0;
    int original = n;

    while(n > 0){
        int digit = n % 10;
        if(digit != 0 && original % digit == 0){
            count++;
        }
        n /= 10;
    }
    return count;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = CountDigits(num);
    cout << "Total number of digits that evenyl divide " << num << " is " << result;
    }

// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

int Reversenum(int n){
    int revNo = 0;
    
    while(n != 0){
    int num = n % 10;
    if(revNo > INT_MAX / 10 || revNo == INT_MAX / 10 && revNo > 7) return 0;
    //max number for 32-bit integer: 2,147,483,647
    if(revNo < INT_MIN / 10 || revNo == INT_MIN / 10 && revNo < -8) return 0;
    //min number for 32-bit integer: -2,147,483,648

    revNo = revNo * 10 + num;
    n /= 10;
    }
    return revNo;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int reversed = Reversenum(n);
    if(reversed != 0){
        cout << "The reversed number is: " << reversed << endl;
    }
    else{
        cout << "Reversing the number causes an overflow so the result is 0!" << endl;
    }
}


// Given an integer x, return true if x is a palindrome, and false otherwise.
bool isPalindrome(int n){

    if (n < 0) return false;

    int num, revNo = 0;
    int original = n;

    while(n != 0){
        num = n % 10;
        revNo = (revNo * 10) + num;
        n /= 10;
    }
    return revNo == original;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << (isPalindrome(n) ? "True" : "False") << endl;
    return 0;
}


// Given a positive integer N., The task is to find the value of Σi from 1 to N F(i) where function F(i) for the number i is defined as the sum of all divisors of i.
long long sumOfDivisors(int N){
    if(N <= 0){
        cout << "The number should be positive!!";
    }

    long long totalSum = 0;
    for(int i = 1; i <= N; i++){
        totalSum += i * (N/i);
    }
    return totalSum;
}

int minJumps(int arr[], int n){
    
}
