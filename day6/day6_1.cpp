#include<iostream>
using namespace std;

// template<class T> T large(T n1,T n2){
//     return (n1>n2)?n1:n2;
// }

// template<class s> s swap(s n1,s n2,s n3){
//    cout<<"before Swapping a1: "<<n1<<" a2: "<<n2<<endl;
//    n3= n1;
//    n1=n2;
//    n2=n3;
//    cout<<"After swapping a1: "<<n1<<" a2: "<<n2<<endl;
// }
/*
template<class o1> 

o1 op1(o1 n1,o1 n2){
    return n1+n2;
}

template<class o2>
o2 sub(o2 n1,o2 n2){
    return n1-n2;
}

template<class o3>
o3 op3(o3 n1,o3 n2){
    return n1*n2;
}

template<class o4>
o4 op4(o4 n1,o4 n2){
    return n1/n2;
}
*/

template<class sq>
sq square(sq n1){
    return n1*n1;
}


int main(){
    int a1,a2;
    float b1,b2;
    double c1;
    cin>>a1;
    // cout<<large(a1,a2)<<endl;
    cin>>b1;
    cin>>c1;
    // cout<<large(b1,b2)<<endl;

    // swap(a1,a2,a3);

    // cout<<"Addition: "<<op1(a1,a2)<<endl;
    // cout<<"Substraction: "<<sub(a1,a2)<<endl;
    // cout<<"Multiplication: "<<op3(a1,a2)<<endl;
    // cout<<"Division: "<<op4(a1,a2)<<endl;

    cout<<"Square of int : "<<square(a1)<<endl;
    cout<<"Square of float : "<<square(b1)<<endl;
    cout<<"Square of double : "<<square(c1)<<endl;




}