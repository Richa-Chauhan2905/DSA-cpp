#include <bits/stdc++.h>
// #include <iostream>
// #include <math.h>
// #include <vector>
// #include <algorithm>

using namespace std;

//DIGIT CONCEPT
void count_digit(int N){
    int num, count = 0;
    while(N > 0){
        num = N % 10;
        count += 1;
        N /= 10;
    }
    cout << count << endl;
}

int main(){
  int num;
  cout << "Enter a number having digits between 1 to 10: ";
  cin >> num;

  cout << "The no. of digits is ";
  count_digit(num);
}

// void count_digit(int N){
//     cout << int(log10(N) + 1) << endl;--->>???
// }

//REVERSE NUMBER

void Reverse_no(int N){
    int num, revNo = 0;
    while(N > 0){
        num = N % 10;
        revNo = (revNo * 10) + num;
        N /= 10;
    }
    cout << revNo << endl;
}

int main(){
  int N;
  cout << "Enter a number: ";
  cin >> N;

  cout << "The reversed number is ";
  Reverse_no(N);
}

//PALINDROME NUMBER
int palindrome(int N){
    int num, revNo = 0;
    while(N > 0){
        num = N % 10;
        revNo = (revNo * 10) + num;
        N /= 10;
    }
    cout << revNo << endl;
    if(revNo == N){
        return 1; //cout << "The number is palindrome" << endl;
    }
    else 
        return 0; //cout << "The number is not palindrome" << endl;
}

int main(){
  int N;
  cout << "Enter a number: ";
  cin >> N;

  palindrome(N);
}


//ARMSTRONG NUMBER for a 3 digit number 
int armstrong(int N){
    int ognum = N;
    int num, sum = 0;
    while(N > 0){
        num = N % 10;
        sum = sum + (num*num*num);
        N /= 10;
    }
    cout << sum << endl;
    if(sum == ognum){
        cout << "The number is armstrong" << endl;
    }
    else 
        cout << "The number is not armstrong" << endl;
}

int main(){
  int N;
  cout << "Enter a number: ";
  cin >> N;

  armstrong(N);
}

//DIVISORS
void divisors(int n){
    int i;
    for(i = 1; i <= n; i++){
    if(n % i == 0){
        cout << i << " ";
        }
    }
}

int main(){
    int N;
    cout << "Enter a number: ";
    cin >> N; 

    cout <<  "The numbers are: ";
    divisors(N);
}


//DIVISORS(time effective)
void divisors(int n){
    vector <int> ls;
    int i;
    for(i = 1; i <= sqrt(n); i++){
    if(n % i == 0){
        ls.push_back(i);
    if((n/i) != i){
        ls.push_back(n/i);
        }
    } 
  }
    sort(ls.begin(), ls.end());
    for(auto it : ls) cout << it << " ";
}

int main(){
    int N;
    cout << "Enter a number: ";
    cin >> N; 

    cout <<  "The numbers by which " << N << " is divided are: ";
    divisors(N);
}

//PRIME NUMBERS
void ISprime(int N){
    int cnt = 0;
    for(int i = 1; i*i <= N; i++){
        if(N % i == 0){
            cnt++;
        }
        if(N % i != i){
            cnt++;
        }
    }
        if(cnt == 2){
            cout << "The number is prime.";
        }
        else
            cout << "The number is not prime.";
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    ISprime(n);
}

//GCD/HCF

void GCD(){
    int n1 = 9, n2 = 12;
    int gcd = 1;
    for(int i = 1; i <= n1; i++){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }
    cout << gcd;
}

int main(){
    GCD();
}


//GCD/HCF (2 integers from the user)

    void gcd(int n1, int n2){
        int gcd = 1;
        for(int i = 1; i <= min(n1, n2); i++){
            if(n1 % i == 0 && n2 % i == 0){
                gcd = i;
            }
        }
        cout << gcd;
    }

    int main(){
        int N1, N2;
        cout << "Enter first integr: ";
        cin >> N1;
        cout << "Enter second integr: ";
        cin >> N2;

        cout << "The gcd is ";
        gcd(N1, N2);
    }

//hcf(a, b) = hcf(a-b, b)
void HCF(int num1, int num2){
    while(num1 > 0 && num2 > 0){
        if (num1 > num2) num1 = num1 % num2;
        else num2 = num2 % num1;
    }

    if(num1 == 0) cout << num2 << endl;
    else cout << num1 << endl;
}

int main(){
    int a = 52, b = 10;
    HCF(a, b);
}