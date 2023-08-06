// Constructor
#include<bits/stdc++.h>
using namespace std;
/*
class Students{
    public:
        int roll;
        float per;
        string name;
        Students(int r,float p,string n){
            roll = r;
            per = p;
            name = n;
        }
        void display(){
            cout<<roll<<" "<<per<<" "<<name<<endl;
        }
};*/

/*
class Date{
    public:
    int date,month,year;
        Date(){
            
        }
        void display(){
            cout<<date<<" / "<<month<<" / "<<year<<endl;
        }
};

class Student{
    public:
    string name;
    int marks;
    char grades;
    Student(string n,int m,char g){
        name = n; 
        marks = m;
        grades = g;
    }
    void display(){
        cout<<name<<" "<<marks<<" "<<grades<<" "<<endl;
    }
};
*/

/*
class cube{
    public:
        double a,area;
        cube(double b){
            a=b;
            
        }
        void display(){
            cout<<"Volume of Cube is "<<pow(a,3)<<endl;
        }
};*/

/*
class rectangle{
    public:
        double l,b;

        rectangle(double len,double br){
            l = len;
            b = br;
        }
        ~rectangle(){
            cout<<"Destroyed"<<endl;
        }
        void display(){
            cout<<"Area of Rectangle is "<<l*b<<endl;
        }
        
};*/

/*
class Programming{
    public:
        string lang;
        void display(){
            cout<<"Enter Language: "<<endl;
            cin>>lang;
            cout<<"I love programming in "<<lang<<endl;
        }
};
*/

/*
class Emp{
    public:
        int emp_id;
        float emp_salary;
        string emp_name;
        Emp(int i,string n,float s){
            emp_id = i;
            emp_salary = s;
            emp_name = n;
        }
        void display(){
            cout<<"Id:"<<emp_id<<" Name: "<<emp_name<<" Salary: "<<emp_salary<<endl;
        }
};
*/

// Function overloading
void area(double x,double y) // rectangle area
{
    cout<<"Area of Rectangle: "<<x*y<<endl;
}
void area(float x) // area of circle
{
    cout<<"Area of Circle: "<<3.14*x*x<<endl;
}
void area(int x) // area of cube
{
    cout<<"Area of Cube: "<<6*x*x<<endl;
}


int main(){
    // Students s1(34,75,"Mohammed");
    // s1.display();
    // Date d1;
    // cout<<"Enter date: "<<endl;
    // cin>>d1.date;
    // cout<<"Enter month: "<<endl;
    // cin>>d1.month;
    // cout<<"Enter year: "<<endl;
    // cin>>d1.year;
    // d1.display();

    // Student s1("Mohammed",75,'A'),s2("Amaan",70,'B');
    // s1.display();
    // s2.display();

    // cube c1(5);
    // c1.display();

    // rectangle r1(10,20);
    // r1.display();

    // Programming p1;
    // p1.display();

    // Emp e1(101,"Mohammed",50000),e2(102,"Amaan",25000);
    // e1.display();
    // e2.display();

    // area(5);

    
    
}