#include <iostream>
using namespace std;

// BAD PRACTICE because nay function can update global variable so use refrence variables

int score = 15;

void a(int i)
{
    score++;
    cout << score << endl;
}

void b(int i)
{
    cout << score << endl;
}
int main()
{

    int i = 5;
    cout << score << endl;
    a(i);
    b(i);

    return 0;
}