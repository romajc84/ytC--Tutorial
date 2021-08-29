#include <cmath>
#include <iostream>

using namespace std;

int main() {
    float a;          // amount
    float p = 10000;  // principal
    float r = 0.01;   // rate

    for (int day = 1; day <= 30; day++) {
        a = p * pow(1 + r, day);
        cout << day << " ----- " << a << endl;
    }
}
