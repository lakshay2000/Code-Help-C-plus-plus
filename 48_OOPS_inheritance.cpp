#include <iostream>
using namespace std;

// private data member of any class cannot be inherited

// protected data type- similar to private ; child class can acess and accessible inside its own class

// types of inheritance -
// 1) single
// 2) multiple   B class _           _ A class
//                        |          |
//                         > C CLass<
// 3) multilevel A class <- B class <- C class
// 4) hierarchical one class serve as parent class for more than 1 class
// ie. B class -> A class <- Class
// 5) hybrid - combination of more than 1 type of inheritance

class humans
{
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    void getWeight(int w)
    {
        this->weight = w;
    }
    void hu()
    {
        cout << "This is human class" << endl;
    }
};

class male : public humans
{

public:
    string color;

    void sleep()
    {
        cout << "Male sleeping" << endl;
    }
    void ma()
    {
        cout << " THis is male class" << endl;
    }
};

// multi-level inheritance
class child : public male
{

public:
    void chi()
    {
        cout << "this is child class" << endl;
    }
};

// heirarchical inheritance
class female : public humans
{

public:
    void fe()
    {
        cout << "This is female class" << endl;
    }
};

// when we have same function name in both the parents (ie. multiple inheritance) then it is called inheritance amguity then scope resolution operator comes in the place
// syntax - obj.A::func() or obj.B::func();

class A
{
public:
    void func()
    {
        cout << "I am A" << endl;
    }
};

class B
{
public:
    void func()
    {
        cout << "I am B" << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    child ch1;

    male m1;

    cout << m1.age << endl;

    cout << m1.weight << endl;
    cout << m1.height << endl;

    cout << m1.color << endl;

    m1.sleep();
    m1.getWeight(100);
    cout << m1.weight << endl;

    ch1.chi();
    ch1.ma();
    ch1.hu();

    female f1;

    f1.fe();
    f1.hu();

    // inheritance ambiguity

    C obj;

    // obj.func();

    obj.A::func();
    obj.B::func();

    return 0;
}