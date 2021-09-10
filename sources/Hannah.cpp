#include "Hannah.hpp"
#include <iostream>

using namespace std;

Hannah::Hannah(int num) : h(num) {}

void Hannah::printCrap() {
  cout << "h = " << h << endl;             // assumes working with current obj
  cout << "this->h = " << this->h << endl; // pointer to address of current obj
  cout << "(*this).h = " << (*this).h
       << endl; // using explicit memory location of current obj
}