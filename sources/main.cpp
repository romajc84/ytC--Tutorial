#include <iostream>

using namespace std;

int main() {
    double bucky[10];
    cout << sizeof(bucky) << endl;

    cout << sizeof(bucky) / sizeof(bucky[0]) << endl;
}
