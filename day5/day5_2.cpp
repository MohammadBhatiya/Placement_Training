#include<iostream>
using namespace std;

int main(){
    int n,sum1=0,sum2=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum1=sum1 + arr[i];
    }

    sum2 = (n*(n+1))/2;

    if(sum1==sum2){
        cout<<"No number is missing"<<endl;
    }
    else{
        int max = sum2-sum1;
        cout<<max<<" number is missing"<<endl;
    }

}