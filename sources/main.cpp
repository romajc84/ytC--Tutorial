#include <iostream>

using namespace std;

int tuna = 69;

int main() {
    int tuna = 20;
    // Local Variable
    cout << tuna << endl;
    // Global variable
    cout << ::tuna << endl;
}