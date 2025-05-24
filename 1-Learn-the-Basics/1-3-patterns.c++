#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

//     //   ***
//     //   ***
//     //   ***
// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for(int i=0; i < n; i++){
//         for(int j=0; j < n; j++){
//         cout << "*";
//         }
//         cout << endl;
//     }
// }

// // *
// // **
// // ***
// // ****
// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for(int i=0; i < n; i++){
//         for(int j=0; j < i+1; j++){
//         cout << "*";
//         }
//         cout << endl;
//     }
// }

// // 1
// // 12
// // 123
// // 1234
// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for(int i=0; i < n; i++){
//         for(int j=0; j < i+1; j++){
//         cout << j + 1;
//         }
//         cout << endl;
//     }
// }

// // 1
// // 22
// // 333
// // 4444
// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for(int i=0; i < n; i++){
//         for(int j=0; j < i+1; j++){
//         cout << i + 1;
//         }
//         cout << endl;
//     }
// }

// // ***
// // **
// // *
// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for(int i=0; i < n; i++){
//         for(int j=0; j < n - i; j++){
//         cout << "*";
//         }
//         cout << endl;
//     }
// }

// // 1234
// // 123
// // 12
// // 1
// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for(int i=0; i < n; i++){
//         for(int j=0; j < n - i; j++){
//         cout << j + 1;
//         }
//         cout << endl;
//     }
// }

//     *
//   *   *
// *   *   *
// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for(int i=0; i < n; i++){
//         for(int j=0; j < n - i + 1; j++){
//         cout << " ";
//         }
//         for(int j=0; j <= i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// // * * *
// //  * *
// //   *
// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for(int i=0; i < n; i++){
//         for(int j=0; j < i; j++){
//         cout << " ";
//         }
//         for(int j=0; j < n - i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// diamond
// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     for(int i=0; i < n; i++){
//         for(int j=0; j < n - i; j++){
//         cout << " ";
//         }
//         for(int j=0; j <= i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
//      for(int i=0; i < n; i++){
//         for(int j=0; j <= i; j++){
//         cout << " ";
//         }
//         for(int j=0; j < n - i; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// // diamond halved vertically
// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     for(int i = 0; i < n; i++){
//         for(int j=0; j < i + 1; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n - i - 1; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// // 1
// // 01
// // 101
// // 0101
// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     for(int i=1; i <= n; i++){
//         for(int j=1; j <= i; j++){
//             if ((i+j) % 2 == 0){
//                 cout << "1 ";
//             }
//             else{
//                 cout << "0 ";
//             }
//         }
//         cout << endl;
//     }
// }

// // 1
// // 23
// // 456
// int main(){
//     int n, num = 1;
//     cout << "Enter a number: ";
//     cin >> n;

//     for(int i=0; i <= n; i++){
//         for(int j=0; j < i + 1; j++){
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
// }

// // A
// // BB
// // CCC
// int main(){
//     int n;

//     cout << "Enter a number: ";
//     cin >> n;

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j<i+1 ; j++){
//             char letter = 'A' + i;
//             cout << letter;
//         }
//         cout << endl;
//     }
// }

// // A
// // AB
// // ABC
// int main(){
//     int n;

//     cout << "Enter a number: ";
//     cin >> n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j < i+1; j++){
//             char letter = 'A' + j;
//             cout << letter;
//         }
//         cout << endl;
//     }
// }

// // ABCDE
// // ABCD
// // ABC
// // AB
// // A
// int main(){
//     int n;

//     cout << "Enter a number: ";
//     cin >> n;

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n - i; j++){
//             char letter = 'A' + j;
//             cout << letter;
//         }
//         cout << endl;
//     }
// }

// // A
// // BC
// // DEF
// int main (){
//     int n;
//     char letter = 'A';

//     cout << "Enter a number: ";
//     cin >> n;

//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < i + 1; j++){
//             cout << letter << " ";
//             letter++;
//         }
//         cout << endl;
//     }
// }

// //   A
// //  ABA
// // ABCBA
// int main(){
//     int n, i;
//     cout << "Enter a number: ";
//     cin >> n;

//     for(i = 0; i < n; i++){
//         cout << setw(n-i);

//     for(int j = 0; j <= i; j++){
//         char letter = 'A' + j;
//         cout << letter;
//     }

//     for(int j = i - 1; j>=0 ; j--){
//         char letter = 'A' + j;
//         cout << letter;
//     }

//     cout << endl;
//   }
// }

// // D
// // CD
// // BCD
// // ABCD
// int main(){
//     int n, i;
//     cout << "Enter a number: ";
//     cin >> n;

//     for(i = 0; i < n; i++){
//             cout << " ";

//     for(int j = n - i - 1; j < n ; j++){
//         char letter = 'A' + j;
//         cout << letter << " ";
//     }
//     cout << endl;
//   }
// }


// // block of stars with a diamond shaped space
// int main()
// {
//     int n = 5, iniS = 0;

//     for (int i = 0; i < n; i++)
//     {
//         // stars
//         for (int j = 1; j <= n - i; j++){
//             cout << "*";
//         }
//         // space
//         for (int j = 0; j < iniS; j++){
//             cout << " ";
//         }
//         // stars
//         for (int j = 1; j <= n - i; j++){
//             cout << "*";
//         }
//         iniS += 2;
//         cout << endl;
//     }

//     iniS = 8;
//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 1; j <= i; j++){
//             cout << "*";
//         }
//         // space
//         for (int j = 0; j < iniS; j++){
//             cout << " ";
//         }
//         // stars
//         for (int j = 1; j <= i; j++){
//             cout << "*";
//         }
//         iniS -= 2;
//         cout << endl;
//     }
// }

// // x using stars
// int main (){
//     int n = 5, iniS = 8;
// // upper half
//     for(int i=0; i<n; i++){
//         // stars
//         for(int j=0; j <= i; j++){
//             cout << "*";
//         }
//         //space
//         for(int j=0; j < iniS; j++){
//             cout << "-";
//         }
//         for(int j=0; j <= i; j++){
//             cout << "*";
//         }
//         iniS -= 2;
//         cout << endl;
//     }

// // lower half
//     for(int i=1; i<n; i++){
//         // stars
//         for(int j=0; j < n - i - 1; j++){
//             cout << "*";
//         }
//         //space
//         for(int j=1; j < iniS; j++){
//             cout << "-";
//         }
//         for(int j=0; j < n - i - 1; j++){
//             cout << "*";
//         }
//         iniS += 2;
//         cout << endl;
//     }
// }