#include <iostream>

using namespace std;

/*
if you want your main function on top
else
put the printSomething function above main
/**/
void printSomething();

int main()
{
    printSomething();
    return 0;
}

void printSomething()
{
    cout << "oooo i am text on the screen" << endl;
}