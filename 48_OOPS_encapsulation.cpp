#include <iostream>
using namespace std;

// encapsulation (information hiding/ data hiding) - wrapping up data member and function into class
// fully encapsulated class - all DM are marked pivate

// advantages of encapsulation -
// 1) data hide
// 2) if we want we can make call as :"Read Only"
// 3) code reusability
// 4) unit testing

class Student
{

private:
    string name;
    int age;
    int height;

public:
    int getage()
    {
        return this->age;
    }
};

int main()
{

    Student first;

    return 0;
}