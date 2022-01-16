#include <iostream>
#include <string.h>
using namespace std;
// Things to do
// 1) greedy allignment
// 2) padding
// 3) const keyword  (obj creation, function)
// 4) initialiation list

// #include "47_class_1.cpp"
class Hero
{
private:
    int h;

public:
    // copy constructor - we send it by pass by refrence and not pass by value because pass by value will make infinite loop

    Hero(Hero &temp)
    {

        // Deep copy
        char *ch = new char(strlen(temp.name + 1));

        strcpy(ch, temp.name);

        this->name = ch;
        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
        // this->name = temp.name;
    }

    // properties
    char *name;
    int health;
    char level;
    static int timeToComplete;
    Hero()
    {
        cout << "Default Constructor called" << endl;

        name = new char[100];
    }
    // Parameterised consutructor
    Hero(int health)
    {
        cout << "this -> " << this << endl;
        this->health = health;
    }
    Hero(int health, char level)
    {
        cout << "this -> " << this << endl;
        this->level = level;
        this->health = health;
    }

    int getHealth()
    {
        return h;
    }
    char getlevel()
    {
        return level;
    }
    void sethealth(int health)
    {
        this->health = health;
    }
    void setlevel(char l)
    {
        level = l;
    }

    void setname(char n[])
    {
        strcpy(this->name, n);
    }

    void print()
    {
        cout << "health " << this->health << " level " << this->level << endl;

        cout << "Name is" << this->name << endl;
    }

    static int random()
    {
        return timeToComplete;
    }

    ~Hero()
    {
        cout << "Destrcutor called";
    }
};
// syntax os static keyword
int Hero::timeToComplete = 45;

int main()
{
    /*
    // object type of hero and we used it statically and also known as static allocation
    Hero h1;

    // dynamically allocation
    // memory allocated is heap
    Hero *h2 = new Hero;
    cout << "Size of " << sizeof(h2) << endl;
    cout << "size is " << sizeof(h1) << endl;

    // if there is an empty class then the size of class would be of 1 byte

    h1.health = 45;

    h1.level = 'A';

    cout << h1.health << " " << h1.level << endl;

    h1.sethealth(7);

    cout << h1.getHealth() << endl;

    h2->setlevel('A');
    cout << (*h2).getHealth() << endl;
    cout << h2->getlevel() << endl; */

    // constructor
    // 1) object creation invoke
    // 2) no return type
    // 3) no i/p parameter

    // object created statically (constrcutor will called)
    // Hero ramesh(10);

    // Hero *suresh = new Hero(30, 'B');

    // // parameterised contructor
    // // this keyword - current obj ka adress isme store hota hai
    // cout << endl;

    // cout << "Adress of ramesh " << &ramesh << endl;
    // cout << "Adress of suresh " << &(*suresh);

    // Copy Constructor

    // Hero suresh;
    // suresh.sethealth(150);
    // suresh.setlevel('A');
    // suresh.print();

    // Hero ritesh(suresh);
    // ritesh.print();
    // it means ritesh.health=suresh.health

    // default copy constructor performs shallow copy

    Hero hero1;

    hero1.sethealth(10);
    hero1.setlevel('C');

    char name[7] = "Babbar";

    hero1.setname(name);

    hero1.print();
    // shallow copy
    Hero hero2(hero1);

    hero2.print();

    hero1.name[0] = 'G';

    hero1.print();
    hero2.print(); // hero2 values got automatically changed it is called shallow copy

    cout << endl;
    cout << endl;

    // copy assignment operator
    hero1 = hero2;

    hero1.print();
    hero2.print();

    // destrcutor - memory deallocate
    // 1) no return type
    // 2) no i/p parameter

    // for static allocation destrucotr is automatically called but not for the dynamically allocation we have to use delete

    // static keyword - no need to call object for this keyword
    // initialization must do

    cout << Hero::timeToComplete << endl;

    // static function - no need to call object
    // no this keyword ; can access only static members

    cout << Hero::random();

    return 0;
}