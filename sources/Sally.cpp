#include "Sally.hpp"

#include <iostream>

using namespace std;

Sally::Sally(int a, int b)
    : regVar(a),
      constVar(b) {
}

void Sally::print() {
    cout << "regular variable is: " << regVar << " const variable is: " << constVar << endl;
}