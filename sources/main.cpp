#include <iostream>

#include "Birthday.cpp"
#include "Birthday.hpp"
#include "People.cpp"
#include "People.hpp"

using namespace std;

int main() {
    Birthday birthObj(12, 28, 1986);

    People buckyRoberts("Bucky the King", birthObj);
    buckyRoberts.printInfo();
}
