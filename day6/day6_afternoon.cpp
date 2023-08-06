#include<iostream>
using namespace std;

int main(){

    // int n,a,b;
    // cin>>n;

    /*
    try
    {
        if(n>28){
            cout<<"Eligible for Smoking"<<endl;
        }
        else{
            throw 505;
        }
    }
    catch(int n){
        cout<<"Nope!! you're too small to smoke!!!"<<endl;
    }
    */

   /*
    try
    {
        if(n<0){
            cout<<"Not a Natural Number"<<endl;
        }
        else{
            throw 505;
        }
    }
    catch(int n)
    {
        cout<<"Yes!! Natural Number!!"<<endl;
    }
    */

/*
   try
   {
    if(n==0){
        throw 505;
    }
    else if(n>0){
        cout<<"Yes!! Positive"<<endl;
    }
    else{
        cout<<"Yes!! Negative"<<endl;
    }
    
   }
   catch(int n)
   {
    cout<<"oops!!!Number is Invalid"<<endl;
   }
   */

/*
    int n = 6;
    int arr[] ={6,1,3,3,4,3,3};
	int cnt=0;
	int el;

	for(int i=0;i<n;i++){
		if(cnt==0){
			cnt=1;
			el = arr[i];
		}
		else if(arr[i]==el){
			cnt++;
		}
		else{
			cnt--;
		}
	}

	int cnt1 = 0;
	for(int i=0;i<n;i++){
		if(arr[i]==el){
			cnt1++;
		}
	}
	
	if(cnt1 > n/2){
		cout<<el<<endl;
	}
    cout<<cnt1;
    */

   int no1,no2,no3,no4;
   cin>>no1>>no2>>no3>>no4;
   try
   {
    if(no1<0 || no2<0 || no3<0 || no4<0){
        cout<<"Incorrect Pin!!! Number should be positive!!"<<endl;
    }
    else{
        throw 505;
    }
   }
   catch(int n)
   {
    cout<<"Correct Pin"<<endl;
   }
   
	
}
