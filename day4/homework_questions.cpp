#include <iostream>
using namespace std;

bool isPrime(int n)
{

  if (n <= 1)
    return false;

  for (int i = 2; i < n; i++)
    if (n % i == 0)
      return false;

  return true;
}

int main()
{
  /*
  isPrime(11) ? cout << " true\n" : cout << " false\n";
  isPrime(15) ? cout << " true\n" : cout << " false\n";

  // check palindrome or not
  int n, r, sum1 = 0, temp;
  cout << "Enter the Number=";
  cin >> n;
  temp = n;
  while (n > 0)
  {
    r = n % 10;
    sum1 = (sum1 * 10) + r;
    n = n / 10;
  }
  if (temp == sum1)
    cout << "Number is Palindrome.";
  else
    cout << "Number is not Palindrome.";


  // perfect Number
  int num,sum=0;
  cin>>num;
  int og = num;

  for(int i=1;i<n;i++){
    if(num%i==0){
      sum = sum + i;
    }
  }

  if(og==sum){
    cout<<"Number is Perfect"<<endl;
  }
  else{
    cout<<"Number is not perfect"<<endl;
  }
*/

/*
  // swap number w/o using temp
  int a,b;
  cin>>a>>b;

  a = a+b;
  b = a-b;
  a = a-b;

  cout<<a<<b;

  // greatest of 3 number
  int num1,num2,num3;
  cin>>num1>>num2>>num3;
  if(num1>num2){
    if(num1>num3){
      cout<<"Maximum Number is "<<num1<<endl;
    }
  }
  else if(num2>num1){
    if(num2>num3){
      cout<<"Maximum Number is "<<num2<<endl;
    }
  }
  else{
    cout<<"Maximum Number is "<<num3<<endl;
  }
  */

/*
  // reverse a number
  int num4;
  cin>>num4;
  int temp = num4;
  int q=0;

  while(num4>0){
    int r = num4%10;
    q = (q * 10) + r;
    num4 = num4 / 10;    
  }
  cout<<q<<endl;
  */
/*
  // wap to calculate sum of even number from range 1-20
  int n=50,sum=0;
  for(int i=1;i<=n;i++){
    if(i%2==0){
      sum = sum+i;
    }
  }
  cout<<sum<<endl;

  */

/*
 // factorial of a number
  int fact =1,num = 5;
  for(int i=1;i<=num;i++){
    fact = fact*i;
  }
  cout<<fact<<endl;
*/
  /*
  // print 12 table
  for(int i =1;i<=10;i++){
    cout<<"12 X "<<i<<" = "<<12*i<<endl;
  }
  */

 /*
  // check whether the char is uppercase,lowercase or special symbol
  char c1;
  cin>>c1;
  int v = int(c1);
  if(v>=65 && v<=90){
    cout<<"Uppercase"<<endl;
  }
  else if(v>=97 && v<=122){
    cout<<"Lowercase"<<endl;
  }
  else{
    cout<<"Special Character"<<endl;
  }
*/


/*
  // convert km to meter
  char c2;
  cin>>c2;
  if(c2=='a' || c2=='e' || c2=='i'|| c2=='o' || c2=='u' || c2=='A' || c2=='E' || c2=='I'|| c2=='O' || c2=='U'){
    cout<<"vowel"<<endl;
  }
  else{
    cout<<"Consonant"<<endl;
  }
*/

  /*
  float km;
  cin>>km;
  float m = km*1000;
  cout<<m<<endl;
  */
  return 0;
}