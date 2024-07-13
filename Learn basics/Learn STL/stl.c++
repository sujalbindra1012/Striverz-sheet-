//  IN THIS WE KNOW ABOUT ALL THE STL PROPERTIES AND LOGICS

#include <iostream>
#include <algorithm>
#include <vector>
#include<list>

using namespace std;

// learning void and sum
// void - prints output without returning value

void print()
{
    cout << "Raj";
}

int sum(int a, int b)
{
    return a + b;
}

//learning single pair and multiple pairs 

void explainPair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second;
    cout << endl;

    pair<int, pair<int, int>> q = {1, {3, 4}};
    cout << q.first << " " << q.second.first << " " << q.second.second << " ";
    cout << endl;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[0].first;
    cout << endl;

    pair<int, pair<int, pair<int, int>>> s = {1, {2, {3, 4}}};
    cout << s.first << " " << s.second.first << " " << s.second.second.first << " " << s.second.second.second;
}

//learning vectors and its functions

void explainVector(){
    vector<int> v;      //declaration of 1d vector

    v.push_back(1);     //inserting 1 from back
    v.emplace_back(2);  //inserting 2 and faster than push_back

    vector<pair<int,int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int>vecc(5,100);   //defines vector of size 5 having all values 100 in 5 place
    vector<int>ve(5);         //defines vector of size 5 having all values as 0

    vector<int>v1(5,20);    //shows {20,20,20,20,20}
    vector<int>v2(v1);      //new vector contain values of v1 

    //we can manipulate size and values in vector because it is dynamic in nature

    vector<int>::iterator it=v.begin();     //v.begin points to the address of first element of iterator 
    it++;
    cout<<*(it)<<" ";

    it=it+2;          //shifts address by two positions
    cout<<*(it)<<" ";

    //having an vector of elements  {10,20,30,40}

    vector<int>::iterator it=v.end();   //points after 40 in the vector
    // vector<int>::iterator it=v.rend();   //never used points before 10
    // vector<int>::iterator it=v.rbegin();   //points to 40 and moves backward  && less used

    cout<<v[0];   //prints value at 0 position

    cout<<v.back()<<" ";    //prints last element of vector

    //printing of vector

    for(vector<int>::iterator it1=v.begin();it!=v.end();it++){
        cout<<*(it);
    }

    //other way
    for(auto it=v.begin();it!=v.end();it++){    //auto replace datatype declaration
        cout<<*(it)<<" ";
    }

    //very short way
    for(auto it:v){
        cout<<it<<" ";
    }

    //deletion in vector
    // {10,20,30,40}
    v.erase(v.begin()+1);    //deletes 20 

    // {10,20,30,40,50,60}
    v.erase(v.begin()+2,v.begin()+4);   //deletes element 30,40

    //insert function
    vector<int>v(2,100);  //{100,100}
    v.insert(v.begin(),300);  //{300,100,100} insert at beginning
    v.insert(v.begin()+1,2,10);  //{300,10,10,100,100}

    vector<int>copy(2,50); //{50,50}
    //to insert other vector between other vector
    v.insert(v.begin(),copy.begin(),copy.end());  //{50,50,300,10,10,100,100}

    cout<<v.size();  //gives size of vector or number of elements in vector
    v.pop_back(); //pops last element

    // v1-> {10,20}
    // v2-> {30,40}
    v1.swap(v2);  // v1->{30,40}  and  v2->{10,20}

    v.clear(); //erase all vector

    cout<<v.empty();   //vector is empty or not 


    

}

void explainList(){
    //similar like vector in declaration insertion
    list<int>ls;

    ls.push_back(2);  //{2}
    ls.emplace_back(4);  //{2,4}
    ls.push_front(5); //{5,2,4}
    ls.emplace_front(7);   //{7,2,4}

    //rest functions are same as vector
    //begin,end,rbegin,,rend,clear,insert,size,swap 
}

void explainDeque(){

}



int main()
{
    // print();
    // cout << endl;
    // int ans = sum(1, 6);
    // cout << "sum is : " << ans;
    // explainPair();
    // explainVector();
    // explainList();
    explainDeque();
    return 0;
}
