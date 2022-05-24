#include <iostream>
using namespace std;
// polymorphism - present in multiple forms

// 2types -
// 1) compiler time polymorphism (function overloading and operator overloading) (static polymorphism)
// 2) run time polymorphism  (method overriding) (dynamic polymorphism)

// Rules for overriding ->
// 1) method of parent class and method of child class must have same name
// 2) method of parent class and method of child class must have same parameter
//  3) it is possible through inheritance only

class A
{
public:
    int a;
    int b;
    // Function Overloading
    void sayHello()
    {
        cout << "Hello Love Babbar" << endl;
    }

    void sayHello(string name)
    {
        cout << "Hello " << name << endl;
    }

    // operator overloading

    void operator+(A &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "output " << value2 - value1 << endl;
    }

    void operator()()
    {
        cout << "I am bracket " << this->a << endl;
    }
};

// Overriding
class Animal
{
public:
    void speak()
    {
        cout << "Speaking";
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Barking";
    }
};

int main()
{

    A obj;

    obj.sayHello();
    obj.sayHello("Lakshay Banga");

    A obj1, obj2;

    obj1.a = 3;
    obj2.a = 8;

    obj1 + obj2;

    obj1();

    // Function Overriding
    Dog objm;

    objm.Animal::speak();

    objm.speak();
    return 0;
}