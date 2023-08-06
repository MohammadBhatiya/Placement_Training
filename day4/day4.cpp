#include <iostream>
// #define PI 3.14
using namespace std;

int main()
{
    /*// circumfrence of circle
    float r;
    cout<<"Enter the radius of circle"<<endl;
    cin>>r;
    float circum = 2*PI*r;
    cout<<"Circumference of circle is "<<circum <<endl;


    // checking if number is positive,negative, or zero
    int num;
    cout<<"Enter the number to check condition: "<<endl;
    cin>>num;
    if(num<0){
        cout<<"Number is negative"<<endl;
    }
    else if(num>0){
        cout<<"Number is positive"<<endl;
    }
    else{
        cout<<"Number is Zero"<<endl;
    }*/

    /*
    // Checking if number is armstrong or not
        int n;
        int p = 0;
        cout<<"Enter the number to check armstrong"<<endl;
        cin>>n;
        int temp = n;

        while (n > 0) {

            int rem = n % 10;
            p = p + (rem * rem * rem);
            n = n / 10;
        }

          if (temp == p)
            cout<<("Yes. It is Armstrong No.");

        else
            cout<<("No. It is not an Armstrong No.");
        */

    /*
     // checking if number is neon or not
     int n,temp = n,p=0;

     cout<<"enter the number to check for neon Number"<<endl;
     cin>>n;

     while(n>0){
        int rem = n%10;
        p = p + (rem*rem);
        n = n / 10;
     }

     if(temp == p) {
        cout<<"Yes,Neon Number"<<endl;
     }
     else{
        cout<<"No,Not a Neon Number"<<endl;
     }
    */
    /*
    // calculating number is divisible by 3 or not
    int i=1;
    int r,v,count=0;
    cout<<"Enter the number till range"<<endl;
    cin>>r;
    cout<<"Enter number to check divisibility"<<endl;
    cin>>v;

    for(i;i<=r;i++){
     if(i%v==0){
         cout<<i<<" is divisible by "<<v<<endl;
         count += 1;
     }
    }
    cout<<"Total numbers divisible by "<<v <<" is "<<count<<endl;
     */
    /*
    // Triangle pattern
    int num;
    cin>>num;

    for(int row = 1;row<=num;row++){
     for(int col = 1;col<=row;col++){
         cout<<row<<" ";
     }
     cout<<endl;
    }

    cout<<endl;
    for(int row = 1;row<=num;row++){
     for(int col = 1;col<=num;col++){
          if (row == 1 || row == num || col == 1 || col == num)
             {
                 cout << "*" << " ";
             }
             else
             {
                 cout << "  ";
             }

     }
     cout<<endl;
    }
    */

    /*
     // bricks problem
     int n,ans = 0,x=1;
     cin >> n;
     while(n<0){
         if(ans==0){
             n = n-x;
             x;
             ans=1;
         }else{
             n = n-(2*x++);
             ans=0;
         }
     }

     if(ans==0){
         cout<<"Henry"<<endl;
     }
     else{
         cout<<"Oswald"<<endl;
     }
     */


    /*
    // Rabbit steps problem
    int n, step=0;
    cin >> n;
   
        if (n <= 5)
        {
            step = 1;
        }
        else if (n % 5 == 0)
        {
            step = (n / 5);
        }
        else
        {
            step = (n / 5) + 1;
        }
    
    cout << step;
    */

    int n,rem,sum = 0;
    cin>>n;
    int temp = n;
    int i=10;
    while(n>0 && i<0){
        rem = n%10;
        sum += rem * i;
        n = n/10;
        i++;
    }
    if(sum%11 ==0 ){
        cout<<"legal ISBN code";
    }
    else{
        cout<<"illegal ISBN code";
    }

}