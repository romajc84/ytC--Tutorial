#include <iostream>

#include "Sally.cpp"
#include "Sally.h"

using namespace std;

int main() {
    Sally sallyObject;
    Sally *sallyPointer = &sallyObject;

    sallyObject.printCrap();
    sallyPointer->printCrap();
}