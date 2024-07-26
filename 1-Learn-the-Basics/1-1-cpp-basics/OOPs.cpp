#include<iostream>
using namespace std;


// // PUBLIC AND PRIVATE MODIFIERS
// class Employee
// {
//     private:
//         int a, b, c;
//     public: 
//         int d, e;
//         void setData(int a1, int b1, int c1);
//         void getData(){
//             cout << "The value of a is " << a << endl;
//             cout << "The value of b is " << b << endl;
//             cout << "The value of c is " << c << endl;
//             cout << "The value of d is " << d << endl;
//             cout << "The value of e is " << e << endl;
//         }
// };
// void Employee :: setData(int a1, int b1, int c1){
//     a = a1;
//     b = b1;
//     c = c1;
// }
// int main(){
//     Employee xyz;
//     //xyz.a = 67;//--> this will print error because a is private element 
//     xyz.e = 34;
//     xyz.d = 25;
//     xyz.setData(1, 2, 4);
//     xyz.getData();

//     return 0;
// }

// // NESTING OF MEMBER FUNCTION

// class binary{
//     string s;

//     public:
//         void read(void);
//         void check_binary(void);
//         void ones(void);
//         void display(void); 
// };

// void binary :: read(void){
//     cout << "Enter a binary number: ";
//     cin >> s;
// }

// void binary :: check_binary(void){
//     for(int i=0; i < s.length(); i++){
//         if(s.at(i) != '0' && s.at(i) != '1'){
//             cout << "Incorrect binary format" << endl;
//             exit(0);
//         }
//     }
// }

// void binary :: ones(void){
//    // check_binary(); // --> can also be called from here --> also calles nesting of function
//     for(int i=0; i < s.length(); i++){
//         if(s.at(i) == '0'){
//            s.at(i) = '1';
//         }
//         else if(s.at(i) == '1'){
//            s.at(i) = '0';
//         }
//     }
// }

// void binary :: display(void){
//     cout << "Displaying your binary number: " << endl;
//     for(int i=0; i < s.length(); i++){
//         cout << s.at(i);
//     }
// }

// int main(){
//     binary b;
//     b.read();
//     b.check_binary();
//     b.ones();
//     b.display();
    
//     return 0;
// }

// //MEMORY ALLOCATION

// class shop{
//     int itemId[100];
//     int itemPrice[100];
//     int counter;
//     public:
//         void initCounter(void) {counter = 0;}
//         void getPrice(void);
//         void displayPrice(void);
// };

// void shop :: getPrice(void){
//     cout << "Enter ID of item number " << counter + 1 << " : ";
//     cin >> itemId[counter];
//     cout << "Enter price of your item: ";
//     cin >> itemPrice[counter];
//     counter++;
// }

// void shop::displayPrice(void){
//     for(int i = 0; i < counter ; i++){
//     cout << "The price of the item with ID " << itemId[i] << " is " << itemPrice[i] << endl; 
//     }
// }

// int main(){
//     shop dukaan;
//     dukaan.initCounter();
//     dukaan.getPrice();
//     dukaan.getPrice();
//     dukaan.getPrice();
//     dukaan.displayPrice();
// }


// // STATIC DATA MEMBERS
// class employee{
//     int id;
//     static int count;
//     // int count; --> this can be used but as this is not static, it will print each count as one or the number we intialize it with thus static is used instead of this
//     public:
//         void setData(void){
//             cout << "Enter the ID: ";
//             cin >> id;
//             count++;//--> this will be useles if we use int count and will give the output of the number we intialize it with + 1
//         }
//         void getData(void){
//             cout << "The ID of this employee is " << id << " and this is employee number " << count << endl;
//         }
//         static void getCount(void){
//             cout << "The value of count is " << count << endl;
//         }
// };

// // int employee ::count; //-> default value is zero 
// int employee ::count = 1000; // the default value can be changed here but not where count is declared 

// //Here count is the static data member

// int main(){
//     employee ramesh, suresh, mahesh;
//     // ramesh.id = 1;
//     // ramesh.count = 1; --> this will throw error as id and count are both private thus we will be needed to use setdata and getdata

//     ramesh.setData();
//     ramesh.getData();
//     employee ::getCount();

//     suresh.setData();
//     suresh.getData();
//     employee ::getCount();

//     mahesh.setData();
//     mahesh.getData();
//     employee ::getCount();
// }

// // ARRAY OF OBJECTS
// class complex{
//     int a;
//     int b;

//     public:
//         void setData(int v1, int v2){
//             a = v1;
//             b = v2;
//         }
//         void setDatabySum(complex o1, complex o2){
//             a = o1.a + o2.a;
//             b = o1.b + o2.b;
//         }
//         void printNumber(){
//             cout << "Your complex number is " << a << " + " << b <<"i"<< endl;
//         } 
// }; 

// int main (){
//     complex c1, c2, c3;
//     c1.setData(1, 2);
//     c1.printNumber();

//     c2.setData(3, 4);
//     c2.printNumber();

//     c3.setDatabySum(c1, c2);
//     c3.printNumber();
//     }

