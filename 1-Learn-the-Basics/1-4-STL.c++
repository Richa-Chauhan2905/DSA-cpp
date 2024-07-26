#include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<list>
// #include<map>
// #include<string.h>
// #include<functional>
// #include<algorithm>

using namespace std;

// PAIRS
// void pairs(){
//     pair <int, int> p = {1, 3};
//     cout << p.first << " " << p.second << endl;//.first prints the first number and second prints the second

//     pair <int, pair<int, int>> p1 = {1, {4, 5}};//--> can be written like this too
//     cout << p1.first << " " << p1.second.second << " " << p1.second.first << endl;

//     pair <int, int> arr[] = {{23, 67}, {89, 10}};
//     cout << arr[0].second << endl;// -->prints the second element of the zeroth index i.e {23, 67} thus output will be 67
// }

// int main() {
//     pairs();
// }

// //VECTOR
// template <class T>
// void display(vector<T> &v){
//     cout << "Displaying the vector: ";
//     for(int i = 0; i < v.size(); i++){
//         // cout << v[i] << " ";
//         cout << v.at(i) << " ";
//     }
//     cout << endl;
// }

// int main(){
// // ways to create a vector
//     vector<int> vec1; //zero lenghth integer vector
//     int element, size = 5;

//     cout << "Enter size of your vector: ";
//     cin >> size;

//     for(int i = 0; i < size; i++){
//         cout << "Enter an element to add to this vector: ";
//         cin >> element;
//         vec1.push_back(element); //--> this will add element at the back of first element..also if we do not write this, it will display nothing
//     }
// vec1.pop_back(); //--> deletes the last term
// display(vec1);
// vector<int> :: iterator iter = vec1.begin();
// // vec1.insert(iter, 89);//--> inserts the number mentioned at the begining 
// vec1.insert(iter+1, 5, 89); //--> inserts 89 at the mentioned place i.e: after the element (2nd element) for the number of times mentioned(5 times).
// display(vec1);

//     vector <char> vec2(4);//4 element character vector
//     vec2.push_back('5');
//     display(vec2);

//     vector <char> vec3(vec2); //4 element character vector from vec2
//     display(vec3);

//     vector<int> vec4(6,3); //-->displays 3, 6 times
//     display(vec4);
// }

// //LIST
// void display(list<int> &lst){
//     list<int> :: iterator it;
//     for (it = lst.begin(); it != lst.end(); it++){
//         cout << *it << " ";
//     }
//     cout << endl;
// }

// int main(){
//     list<int> list1;//list of 0 length
//     list1.push_back(9);
//     list1.push_back(7);
//     list1.push_back(1);
//     list1.push_back(12);
//     list1.push_back(4);
//     list1.push_back(6);
//     display(list1);
//     // list1.pop_back();//--> removes an element from the back can be used multiplt times to remove more than one element
//     // list1.pop_front(); //-->removes an element from the front can be used multiplt times to remove more than one element 
//     // list1.remove(1); //--> removes a specific element
//     // display(list1);
//     // list1.sort(); //--> sorts in ascending order
//     // display(list1);

//     // list<int> :: iterator iter;
//     // iter = list1.begin(); //--> does the same thing as display but we need to write for each element thus we use display
//     // cout << *iter << " ";
//     // iter++;
//     // cout << *iter << " ";
//     // iter++;
//     // cout << *iter << " ";
//     // iter++;
    
//     list<int> list2(3);
//     list<int> :: iterator iter;
//     iter = list2.begin();
//     *iter = 45;//--> it will automatically print 0, 0 after 45 because we have initialized it to 3 items.
//     display(list2);

//     list1.reverse();
//     display(list1);

//     list1.sort();
//     list2.sort();
//     list1.merge(list2);
//     cout << "After merging: ";
//     display(list1);

// }

// int main(){
//     map<string, int> marksMap;
//     marksMap["Emily"] = 76;
//     marksMap["David"] = 45;
//     marksMap["Sophia"] = 83;
//     marksMap["Benjanim"] = 40;

//     map<string, int> :: iterator iter;
//     marksMap.insert({{"Olivia", 87}, {"James", 42}}); //-->inserts name 
//     for(iter = marksMap.begin(); iter != marksMap.end(); iter++){
//         cout << (*iter).first << " " << (*iter).second << "\n";
//     }
// }

// //FUNCTION OBJECTS: Functions wrapped in a class so that it is available like an object
// int main(){
//     int arr[] = {34, 56, 25, 74, 95, 29};
//     // sort(arr, arr+6);//--> sorts array in acending order; syntax: (name of array, name of array plus the number of array present(i.e in this case 6))
//     sort(arr, arr+6, greater<int>()); //-->sorts array in descending
//     for(int i = 0; i < 6; i++){
//         cout << arr[i] << endl;
//     }
// }