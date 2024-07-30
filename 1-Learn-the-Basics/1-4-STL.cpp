#include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<list>
// #include<map>
// #include<string.h>
// #include<functional>
// #include<algorithm>

// STL ---> Standard Template Library
// STL = Containers + Algorithm + Iterators

// Containers ---> Object which stores data
// Algorithm ---> Procedure to process data
// Iterators ---> Object which points to an element of a container

// Types of Containers
// 1. Sequence containers :- Stores the data in linear fashion. Eg: Vector, List, Dequeue
// 2. Associative containers :- Stores the data in Tree like structures, used for fast searching, fast deletion, fast access. Eg: Map, Multi-map, Set, Multi-set
// 3. Derived containers :- Provides real world modelling. Eg: Stack, Queue, Priority queue

using namespace std;

// PAIRS
void pairs(){
    pair <int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;//.first prints the first number and second prints the second

    pair <int, pair<int, int>> p1 = {1, {4, 5}};//--> can be written like this too
    cout << p1.first << " " << p1.second.second << " " << p1.second.first << endl;

    pair <int, int> arr[] = {{23, 67}, {89, 10}};
    cout << arr[0].second << endl;// -->prints the second element of the zeroth index i.e {23, 67} thus output will be 67
}

int main() {
    pairs();
}

//VECTOR
template <class T>
void display(vector<T> &v){
    cout << "Displaying the vector: ";
    for(int i = 0; i < v.size(); i++){
        // cout << v[i] << " ";
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main(){
// ways to create a vector
    vector<int> vec1; //zero lenghth integer vector
    int element, size = 5;

    cout << "Enter size of your vector: ";
    cin >> size;

    for(int i = 0; i < size; i++){
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        vec1.push_back(element); //--> this will add element at the back of first element..also if we do not write this, it will display nothing
    }
vec1.pop_back(); //--> deletes the last term
display(vec1);
vector<int> :: iterator iter = vec1.begin();
// vec1.insert(iter, 89);//--> inserts the number mentioned at the begining 
vec1.insert(iter+1, 5, 89); //--> inserts 89 at the mentioned place i.e: after the element (2nd element) for the number of times mentioned(5 times).
display(vec1);

    vector <char> vec2(4);//4 element character vector
    vec2.push_back('5');
    display(vec2);

    vector <char> vec3(vec2); //4 element character vector from vec2
    display(vec3);

    vector<int> vec4(6,3); //-->displays 3, 6 times
    display(vec4);

}

vector<int> v;
void Vector (){
    v = {10, 20, 30, 40};
}

void printvector(){
    Vector();
    vector<int> :: iterator it = v.begin();
    // for(vector<int> :: iterator it = v.begin(); it != v.end(); it++){
    for(auto it = v.begin(); it != v.end(); it++){//-->can be written like this to avoid writing he whole iterator line
        cout << *it << " ";
    }
}

int main(){
    printvector();
}

//LIST
void display(list<int> &lst){
    list<int> :: iterator it;
    for (it = lst.begin(); it != lst.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    list<int> list1;//list of 0 length
    list1.push_back(9);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(12);
    list1.push_back(4);
    list1.push_back(6);
    display(list1);
    list1.pop_back();//--> removes an element from the back can be used multiplt times to remove more than one element
    list1.pop_front(); //-->removes an element from the front can be used multiplt times to remove more than one element 
    list1.remove(1); //--> removes a specific element
    display(list1);
    list1.sort(); //--> sorts in ascending order
    display(list1);

    // list<int> :: iterator iter;
    // iter = list1.begin(); //--> does the same thing as display but we need to write for each element thus we use display
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";
    // iter++;
    // cout << *iter << " ";
    // iter++;
    
    list<int> list2(3);
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;//--> it will automatically print 0, 0 after 45 because we have initialized it to 3 items.
    display(list2);

    list1.reverse();
    display(list1);

    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout << "After merging: ";
    display(list1);

}

void PrintList(const list<int>& ls) {
    for (list<int>::const_iterator it = ls.begin(); it != ls.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

void LIST(){
    list<int> ls = {10, 20, 30, 40, 50};
    ls.push_back(2);
    PrintList(ls);
    ls.emplace_back(1);
    PrintList(ls);
    ls.push_front(4);
    PrintList(ls);
    ls.emplace_front(8);
    PrintList(ls);
}

int main(){
    LIST();
}

// MAP
int main(){
    map<string, int> marksMap;
    marksMap["Emily"] = 76;
    marksMap["David"] = 45;
    marksMap["Sophia"] = 83;
    marksMap["Benjanim"] = 40;

    map<string, int> :: iterator iter;
    marksMap.insert({{"Olivia", 87}, {"James", 42}}); //-->inserts name 
    for(iter = marksMap.begin(); iter != marksMap.end(); iter++){
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
}

//FUNCTION OBJECTS: Functions wrapped in a class so that it is available like an object
int main(){
    int arr[] = {34, 56, 25, 74, 95, 29};
    // sort(arr, arr+6);//--> sorts array in acending order; syntax: (name of array, name of array plus the number of array present(i.e in this case 6))
    sort(arr, arr+6, greater<int>()); //-->sorts array in descending
    for(int i = 0; i < 6; i++){
        cout << arr[i] << endl;
    }
}

// DEQUE
void PrintDeque(const deque<int> & dq){
    for(deque<int> :: const_iterator it = dq.begin(); it != dq.end(); ++it){ //-> can be used directly in the deque function but the whole thing must be written for every output
        cout << *it << " ";
    }
    cout << endl;
}
void Deque(){
    deque<int> dq;
    dq = {23, 56, 64, 589, 390};
     dq.push_back(1);
     PrintDeque(dq);
     dq.pop_back();
     PrintDeque(dq);
     dq.pop_front();
     PrintDeque(dq);
    cout << dq.back() << endl;
    cout << dq.front();

};

int main(){
    Deque();
}

//STACK -->uses LIFO(Last in first out)

void PrintStack(stack<int> st) {
    for (; !st.empty(); st.pop()) {//--> there is no intialization; run loop till it's not empty; st.pop() removes top element of stack after each iteration
        cout << st.top() << " ";
    }
    cout << endl;
}

// stack<int>st1, st2;
// st1.swap(st2); -->used to swap two stacks
void STACK() {
    stack<int> st;

    st.push(34);
    st.push(69);
    st.push(72);
    st.push(69);
    st.push(29);
    st.push(20);

    PrintStack(st); // Print the stack contents
    cout << st.top() << endl;//-> prints top element
    cout << st.size() << endl;//-> prints size
    cout << st.empty();//-->empties the stack and prints zero 
    
}

int main() {
    STACK();
    return 0;
}

//QUEUE-->FIFO(first in first out)
void Printqueue(queue<int> q){
    for(; !q.empty(); q.pop()){
        cout << q.front() << " ";
    }
    cout << endl;
}
void Queue(){
    queue<int> q;

    q.push(34);
    q.push(69);
    q.push(72);
    q.push(69);
    q.push(29);
    q.push(20);

    Printqueue(q);
    cout << q.back();
};

int main() {
    Queue();
    return 0;
}

// PRIORITY-QUEUE --> largest value stays at top
void Priorityqueue(){
    priority_queue<int> pq;
//to print reverse pq
    // priority_queue<int, vector <int>, greater<int>> pq;//-->prints 2 as the top

    pq.push(7);
    pq.push(8);
    pq.push(56);//--> this will be the first element as it's largest
    pq.push(2);
    pq.push(45);

    cout << pq.top() << " ";

}


int main(){
    Priorityqueue();
}

//SET-->Sorted and unique

void SET(){
    set<int> Set;

    Set.insert(1);
    Set.emplace(5);
    Set.insert(8);
    Set.insert(3);
    Set.insert(5);
    Set.insert(4);//output-->{1, 3, 4, 5, 8}

    Set.find(1);//--> returns an iterator that points to 3
    Set.find(2);//--> returns an iterator that points to 3(number after what we need to find)
    auto it = Set.find(4);
    Set.erase(it);//-->erases 4
};

int main(){
    SET();
}

//MULTISET --> sorted but not unique

void Multiset(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);//{1, 1, 1}

    ms.erase(1);//-->erases all 1's

    ms.erase(ms.find(1));//-->erases only a single 1
    // ms.erase(ms.find(1), ms.find(1) + 2);
}

int main(){
    Multiset();
}

//MAP-->{key, value}

void Map(){
    //ways to write data types in map
    map<int, int> mpp;
    map<int, pair<int, int>> mp;
    /*3*/map<pair<int, int>, int> mAp;

    //ways to add element in map
    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});
    /*3*/mAp[{2, 3}] = 10;

    for(auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }
cout << mpp[2] << endl;
auto it = mpp.find(3);
cout << (it)->second;
};

int main(){
    Map();
}

//SORTING(vectors and arrays) IN DESCENDING OR ANY ORDER

bool comp(pair<int, int> p1, pair<int, int> p2){
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;
    //they are same
    if (p1.first > p2.first) return true;
    return false;
}

// void Extra(){
//     sort(a, a + n);//-->a = first term and n = last term
//     sort(v.begin(), v.end());

//     //To sort a specific pair inside an array or vector
//     sort(a+2, a+4);//a+4 is the term next to the term till which sorting is to be done i.e: 7

//     //To sort in descending order
//     sort(a, a+n, greater<int>());

//     //To sort in a custom way
//     pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

//     // sort according to second element
//     // if second element is same,
//     // sort according to first element but in descending

//     sort(a, a+n, comp);

//     int num = 7;
//     int cnt = __builtin_popcount(num);//-->counts the number of set bits in the binary representation i.e: 7 = 111 Therefore it will give output 3 when asked for how many ones

//     long long a = 6232323214565;
//     int cnt = __builtin_popcountll(a);//-->using ll at the for long long

//     string s = "123";
//     sort(s.begin(), s.end());
//     do{
//         cout << s << endl;
//     }while(next_permutation(s.begin(), s.end()));

//     int maxi = *max_element(a, a+n);

// }

// int main(){
//     return 0;
// }
