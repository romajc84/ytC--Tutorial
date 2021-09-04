#ifndef PEOPLE_H
#define PEOPLE_H
#pragma once

#include <string>

#include "Birthday.hpp"

using namespace std;

class People {
   private:
    string name;
    Birthday dateOfBirth;

   public:
    People(string x, Birthday bo);
    void printInfo();
};
#endif