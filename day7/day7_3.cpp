#include <iostream>

using namespace std;
/*
class Fruit

{

public:
    static int fruitCounter;

    Fruit()

    {

        fruitCounter++;
    }

    ~Fruit()

    {

        fruitCounter--;
    }
};

class Apples : public Fruit

{

public:
    static int applesCounter;

    Apples() : Fruit()

    {

        applesCounter++;
    }

    ~Apples()

    {

        applesCounter--;
    }
};

class Mangoes : public Fruit

{

public:
    static int mangoesCounter;

    Mangoes() : Fruit()

    {

        mangoesCounter++;
    }

    ~Mangoes()

    {

        mangoesCounter--;
    }
};

int Fruit::fruitCounter = 0;

int Apples::applesCounter = 0;

int Mangoes::mangoesCounter = 0;
*/

#include <iostream>
#include <string>

using namespace std;

class Marks {
public:
    static int roll_number;
    int roll=0;
    string name;
    int marks;

    Marks(const string& name, int marks) : roll(roll_number), name(name), marks(marks) {
        roll_number++;
    }
};

int Marks::roll_number = 1;

class Physics : public Marks {
public:
    Physics(const string& name, int marks) : Marks(name, marks) {}
    Physics() : Marks("", 0) {}
};

class Chemistry : public Marks {
public:
    Chemistry(const string& name, int marks) : Marks(name, marks) {}
    Chemistry() : Marks("", 0) {}
};

class Mathematics : public Marks {
public:
    Mathematics(const string& name, int marks) : Marks(name, marks) {}
    Mathematics() : Marks("", 0) {}
};

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    Physics physicsStudents[numStudents];
    Chemistry chemistryStudents[numStudents];
    Mathematics mathStudents[numStudents];

    string name;
    int marks;
    int totalMarks = 0;

    for (int i = 0; i < numStudents; i++) {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> name;

        cout << "Enter the marks in Physics for student " << i + 1 << ": ";
        cin >> marks;
        physicsStudents[i] = Physics(name, marks);
        totalMarks += marks;

        cout << "Enter the marks in Chemistry for student " << i + 1 << ": ";
        cin >> marks;
        chemistryStudents[i] = Chemistry(name, marks);
        totalMarks += marks;

        cout << "Enter the marks in Mathematics for student " << i + 1 << ": ";
        cin >> marks;
        mathStudents[i] = Mathematics(name, marks);
        totalMarks += marks;
    }

    // Calculate total marks for each student
    for (int i = 0; i < numStudents; i++) {
        int studentTotalMarks = physicsStudents[i].marks + chemistryStudents[i].marks + mathStudents[i].marks;
        cout << "Total marks for student " << i + 1 << ": " << studentTotalMarks << endl;
    }

    // Calculate average marks of the class
    double averageMarks = static_cast<double>(totalMarks) / (numStudents * 3);
    cout << "Average marks of the class: " << averageMarks*3<< endl;

    return 0;

}