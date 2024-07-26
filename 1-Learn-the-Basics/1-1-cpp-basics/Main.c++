#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

// int c = 45;

//int main() {
    // int num1, num2;
    // int a = 9, b = 2;
    // cout << "Hello world\n";
    // cout << "\nThe value of a is " << a;
    // cout << "\nThe value of b is " << b;

    // cout << "Enter the value of num1: \n"; //'<<' is called Insertion operator
    // cin >> num1; //'>>' is called Extraction operator

    // cout << "Enter the value of num2: \n"; //'<<' is called Insertion operator
    // cin >> num2; //'>>' is called Extraction operator

    // cout << "The sum is: " << num1 + num2;
    // return 0;
    //}

    // There are 2 types of header files:
    // 1. System header files: comes with the compiler
    // 2. User defined header files: writen by the programmer

    // int a=4, b=5;

    // cout<<"Operators in C++"<<endl; //endl is used to jump to new line
    // cout<<"Following are the operators in C++"<<endl; 
    // //Arithmetic operators
    // cout<<"The value of a+b is: "<<a+b<<endl;
    // cout<<"The value of a-b is: "<<a-b<<endl;
    // cout<<"The value of a*b is: "<<a*b<<endl;
    // cout<<"The value of a/b is: "<<a/b<<endl;
    // cout<<"The value of a++ is: "<<a++<<endl;
    // cout<<"The value of a-- is: "<<a--<<endl;
    // cout<<"The value of ++a is: "<<++a<<endl;
    // cout<<"The value of --a is: "<<--a<<endl;
    // return 0;
    //}

    // //Assignment Operators --> used to assign values of variables
    // int a=3, b=9;
    // char d='d';

   // //Comparision Operators
    // cout<<"Following are the examples of comparision operators: "<<endl;
    // cout<<"The value of a==b is "<<(a==b)<<endl;
    // cout<<"The value of a!=b is "<<(a!=b)<<endl;
    // cout<<"The value of a<=b is "<<(a<=b)<<endl;
    // cout<<"The value of a>=b is "<<(a>=b)<<endl;
    // cout<<"The value of a<b is "<<(a<b)<<endl;
    // cout<<"The value of a>b is "<<(a>b)<<endl;
    // return 0;
    //}


    // //Logical Operators
    // cout<<"Following are the examples of logical operators: "<<endl;
    // cout<<"The value of ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
    // cout<<"The value of ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;
    // cout<<"The value of (!(a<=b)) is "<<(!(a<=b))<<endl;
    // int a, b, c;
    // cout<<"Enter value of a: ";
    // cin>>a;
    // cout<<"Enter value of b: ";
    // cin>>b;
    // c = a+b;
    // cout<<"The value of c is: "<<c<<endl;
    // cout<<"The value of global c is: "<<::c; // :: --> is used to know the value of global varible
    // return 0;
    //}

    // float d = 3.34f;
    // long double e = 3.34l;
    // cout<<"The size of 3.34 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 3.34f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 3.34F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 3.34l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 3.34F is "<<sizeof(34.4L)<<endl;
    // return 0;
    //}

    // //***Refernce variables***
    // float x = 355;
    // float &y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

   // // *******Typecasting******
    // float a = 45.56;
    // int b = 67;

    // cout<<"The value of a is: "<<(int)a<<endl;
    // cout<<"The value of a is: "<<int(a)<<endl;

    // cout<<"The value of b is: "<<(float)b<<endl;
    // cout<<"The value of b is: "<<float(b)<<endl;

    // int c = (int)b;
    // cout<<"The expression is "<<a + b<<endl;
    // cout<<"The expression is "<<int(a) + b<<endl; // --> (int)a = int(a)
    // cout<<"The expression is "<<(int)a + b<<endl;

    // int a = 3;
    // cout<<"The value of a was "<<a<<endl;
    // a = 45;
    // cout<<"The value of a is "<<a<<endl; //This will change the value of a as it is not constant
    // //Constants in C++
    // const int a = 3;
    // cout<<"The value of a was "<<a<<endl;
    // a = 45;
    // cout<<"The value of a is "<<a<<endl; //This will print error as a is constant
    // return 0;
    //}

    // // Manipulators in C++
    // int a=3, b=14, c=1233;
    // cout<<"The value without setw is "<<a<<endl;
    // cout<<"The value without setw is "<<b<<endl;
    // cout<<"The value without setw is "<<c<<endl;

    // cout<<"The value with setw is "<<setw(4)<<a<<endl; // setw prints the charcter after the desired spaces for eg: a will be ...3, b will be ..14
    // cout<<"The value with setw is "<<setw(4)<<b<<endl;
    // cout<<"The value with setw is "<<setw(4)<<c<<endl;
    // return 0;
    //}

    // // Selection control structure: If-else ladder
    // int age;
    // cout<<"Tell me your age ";
    // cin>>age;
    // if((age<18) && (age>0)){
    //     cout<<"You cannot vote!";
    // }
    // else if(age<1){
    //     cout<<"You are not yet born!!";
    // }
    // else{
    //     cout<<"You can vote!";
    // }
    // return 0;
    //}

    // // Selection control structure: Switch Case statement
    // switch(age){
    //     case 18:
    //         cout<<"You are 18"<<endl;
    //         break;
    //     case 22:
    //         cout<<"You are 22"<<endl;
    //         break;
    //     default:
    //         cout<<"No special cases"<<endl;
    //         break;
    // }
    // return 0;
    //}

    // // Loops in C++
    /*1. For loop: syntax  
    for(intialization; condition; updation){
        loop body(C++ code);
    }*/

//    for(int i=0; i<=40; i++){
//     cout<<i<<endl;
//    }
//    return 0;
//    }

/*2.syntax of while loop
while(condition){
    code
}*/
// int i = 0;
//     while(i < 99){
//         i++;
//         cout<<i<<endl;
//     }
//      return 0;
//      }

// // do-while loop
    // int i = 0;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(false); //even after writing false the loop will run one time

    // int number;
    // cout<<"Enter a number: ";
    // cin>>number;

    // for (int i=1; i<=10; i++){
    //     cout<<number<<" * "<< i <<" = "<< number * i<<endl;
    // // }

    // for(int i=1; i<=10; i++){
    //     if(i == 3){
    //     //break; //--> breaks the loop at 3
    //     continue; //--> skips 3 and continues the loop
    //     }
    //     cout<<i<<endl;
    // }
    // return 0;
    //}

//POINTERS
    //what is pointer? --> data type that holds the value of another data type
// int main(){
    // int a =3;
    // int* b=&a;
    // cout<<"The address of a is "<<b<<endl;
    // cout<<"The address of a is "<<&a<<endl;
    // // & ---> (Address of) Operator

    // cout<<"The value at address b is "<<*b<<endl;
    // // * ---> (value at) Dereference operator

    // //pointer to pointer
    // int** c=&b;
    // cout<<"The value of b is "<<&b<<endl;
    // cout<<"The value of b is "<<c<<endl;
    // cout<<"The value at address c is "<<*c<<endl;
    // cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;
    // return 0;
    //}

// //ARRAYS
// int main(){
    // int marks[4] = {24, 45, 67, 68};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

// //Can be written like this too
    // int marks[4];
    // marks[0] = 45;
    // marks[1] = 35;
    // marks[2] = 39;
    // marks[3] = 78;

//cout<<marks[0]<<endl;
//     marks[1] = 345; //can be changed too
//     cout<<marks[1]<<endl;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;

    // for(int i=0; i<4; i++){
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    // }

    // int* p = marks;
    // cout<<*(p++)<<endl;
    // cout<<*(++p)<<endl;

    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p + 1) is "<<*(p + 1)<<endl;
    // cout<<"The value of *(p + 2) is "<<*(p + 2)<<endl;
    // cout<<"The value of *(p + 3) is "<<*(p + 3)<<endl;

// //STRUCTURE
    // typedef struct employee{
    //     int ID;
    //     char name[50];
    //     float salary;
    // } ep;

// int main(){
    // ep abc;
    // abc.ID = 657484;
    // strcpy(abc.name, "abc");
    // abc.salary = 37839.09;

    // cout<<abc.ID<<endl<<abc.name<<endl<<abc.salary;

// //UNION
    // union money{
    //     int rice;
    //     char car;
    //     float pounds;
    // };
//int main(){
    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // // cout<<m1.rice<<endl; // This will give output 99 because union can only store one value at a time and since we have written m1.car after m1.rice, it will choose the m1.car and then print it's ASCII value.
    // cout<<m1.car;

// //ENUM --> assigns an integer to the names or values written in it; for the below example, breakfast=0, lunch=1 and dinner=2
// int main(){
    // enum Meal{breakfast, lunch, dinner};
    // Meal m1 = dinner;
    // cout<<(m1==0); //--> this will print 0 because it is false as the value of m1 is 0
    // // cout<<m1;// Can be written like this too
    // // cout<<breakfast<<endl;
    // // cout<<lunch<<endl;
    // // cout<<dinner<<endl;

// // STRING
// // string initialization
// int main(){
    // string str1 = "Hello";
    // string str2 = "World";
    // cout << str1 + " " + str2 << endl;
    // cout << str1 << " " << str2 << endl;

// // string input output
// int main(){
//     string str;
//     cout<<"Enter a string: ";
//     // cin>>str; //--> prints only one word
//     getline(cin, str); //--> prints more than one word
//     cout<<str<<endl;
//     return 0;
// }

// // string length, concatanation, comparision
// int main(){
    // //length
    // string str = "Hello world";
    // cout<< "Length of string: "<<str.length()<<endl;

    // //concatenation
    // string str1 = "hello";
    // string str2 = "world";
    // cout<<str1 + " " + str2<<endl;
    // cout<<str1.append(" everyone")<<endl;

    // comparision
    // string str3 = "Hello";
    // string str4 = "World";
    // if(str3 == str4){
    //     cout<<"strings are equal"<<endl;
    // }
    // else{
    //     cout<<"Strings are not equal"<<endl;
    //}

    // // int result = str3.compare("Hello"); // answer would be zero as hello = hello
    // int result = str3.compare(str4); //subtracts the (str) from str at the beginning and in this case the answer would be -1 as w is greater than h
    // cout<<"Comparision result: "<<result<<endl;

// // acces characters in string
// int main(){
//     string str = "Hello";
//     str[0] = 'c'; // changes the character that we want
//     cout<<str;
//     return 0;
// }

// //string modification
// int main(){
//     string str = "Hello world";

//     //insert
//     str.insert(6, "Beautiful ");
//     cout<<"After insert: "<< str << endl;//-->adds a word at the desired position

//     //erase
//     str.erase(6, 10);
//     cout<<"After Erase: "<<str<<endl;//-->erases the word from the mentioned position (starting of word) to mentioned position(end of word)

//     //replace
//     str.replace(6, 5, "Everyone");
//     cout<<"After replace: "<<str<<endl;//-->replaces the word: 6--> starting the position; 5--> number of characters after 6 which needs to be replaced; everyone--> word we need it to replce with
//     return 0;
// }

// //FUNCTION

// int sum(int a, int b){ // int sum(int a, b) --> not acceptable; int sum(int, int)-->acceptable
//     int c = a + b;
//     return c;
// }

// int main(){
//     int num1, num2;
//     cout<<"Enter first number: ";
//     cin>>num1;
//     cout<<"Enter second number: ";
//     cin>>num2;
//     cout<<"The sum is "<<sum(num1, num2);

//This will not swap a and b
// void swap(int a, int b){ //temp a b
//     int temp = a;        //4    4 5
//     a = b;               //4    5 5
//     b = temp;            //4    5 4
// }

// //Call by reference using pointer
// void swapPointer(int* a, int* b){ 
//     int temp = *a;        
//     *a = *b;               
//     *b = temp;           
// }

// void swapReferenceVar(int &a, int &b){ 
//     int temp = a;        
//     a = b;               
//     b = temp;           
// }

// int main(){
//     int x = 4, y = 5;
//     cout<<"The value of x is "<<x<<endl<<"The value of y is "<<y<<endl;
//     // swapPointer(&x, &y); //This will swap the value using pointer reference
//     swapReferenceVar(x, y); //This will swap the value using reference variable
//     cout<<"The value of x is "<<x<<endl<<"The value of y is "<<y<<endl;
// return 0;
// }


// float moneyReceived(int currentmoney, float factor=1.04){
//     return currentmoney * factor;
// }

// int main(){
//     int money = 10000;
//     cout << "If you have " << money << " in your bank account, you will receive " << moneyReceived(money) << "Rs after 1 year." << endl; //--> here as we have not mentioned any value for factor, it will take the default value of 1.04 as mentioned in the function above
//     cout << "For VIP: If you have " << money << " in your bank account, you will receive " << moneyReceived(money, 1.1) << "Rs after 1 year.";

//     return 0;
// }

// int factorial(int n){
//     if (n <= 1){
//         return 1;
//     }
//     return n * factorial(n-1);
// }

// int main(){
//     int fact, n;
//     cout << "Enter a number: ";
//     cin >> n;
//     fact = factorial(n);
//     cout << "The factorial of " << n << " is " << fact;
//     return 0;
// }


// FUNCTION OVERLOADING
int sum(float a, int b){
    cout << "using function with 2 arguments" << endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout << "using function with 3 arguments" << endl;
    return a+b+c;
}

int volume(double r, int h){
    return (3.14 * r * r * h);
}

int volume(int a){
    return (a * a * a);
}

int volume(int l, int b, int h){
    return (l * b * h);
}

int main(){
    cout << "The sum of 3 and 6 is " << sum(3, 6) << endl;
    cout << "The sum of 3, 4 and 6 is " << sum(3, 4, 6) << endl;
    cout << "The volume of cube of side 3 is " << volume(3) << endl;
    cout << "The volume of cuboid of length 4, breadth 5, height 6 is " << volume(4, 5, 6) << endl;
    cout << "The volume of cylinder of radius 4.5 and height 6 is " << volume(4.5, 6) << endl;
    return 0;
}

