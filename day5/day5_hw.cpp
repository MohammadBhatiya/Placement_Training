#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    string name[n];
    for(int i = 0; i < 2; i++){
        cin>>name[i];
    }
    
    for(int i=n-1;i>=0;i--){
        cout<<name[i];
    }

}