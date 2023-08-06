#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={1,2,3,4,5,6,7,8,9};
    for(vector<int>::iterator p=v.begin();p<v.end();p++){
        cout<<*p<<endl;
    }
}

/*
why use 0 in array index
compile time error,run time error ,synatx and logical error
WAP to display char values by using vector and iterator
All the methods of the vector
create a two base class A and B and inherit subclasses two.
*/