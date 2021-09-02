#include <iostream>

#include "Sally.cpp"
#include "Sally.hpp"

using namespace std;

int main() {
    Sally salObj;
    salObj.printShiz();

    const Sally constObj;
    constObj.printShiz2();
}