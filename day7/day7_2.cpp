// inheritance
#include<iostream>
using namespace std;

/*
// hierachical inheritance
class Animal{
    public:
        void eat(){
            cout<<"eating"<<endl;
        }        
};

class dog : public Animal{
    public:
    void run(){
        cout<<"Running Inherited"<<endl;
    }
    
};

class lion : public Animal{
    public:
        void hunt(){
            cout<<"Lion is Hunting"<<endl;
        }
};
*/


/*
// hybrid inheritance
class vehicle{
    public:
        void vehi(){
            cout<<"It is a vehicle"<<endl;
        }
};

class wheels{
    public:
        void fourWheel(){
            cout<<"It is a four wheeler"<<endl;
        }

};

class car:public vehicle,public wheels {
    public:
        void cars(){
            cout<<"It is a car"<<endl;
        }
};

*/

/*
// multilevel inheritance
class vehicle{
    public:
        void vehi(){
            cout<<"It is a vehicle"<<endl;
        }
};

class fourWheeler:public vehicle{
    public:
        void wheels(){
            cout<<"It is a four wheeler"<<endl;
        }
};
class car:public fourWheeler{
    public:
        void cars(){
            cout<<"It is a car with 4 wheels"<<endl;
        }
};
*/

// multiple Inheritance
// class human{
//     public:
//         void h(){
//             cout<<"Human is living being"<<endl;
//         }
// }



int main(){
    // dog d1;
    // d1.eat();
    // d1.run();

    // lion l1;
    // l1.hunt();
    // l1.eat();

    // car c1;
    // c1.vehi();
    // c1.fourWheel();
    // c1.cars();

    car c2;
    c2.vehi();
    c2.wheels();
    c2.cars();



}