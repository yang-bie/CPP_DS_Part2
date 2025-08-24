//
// Created by Yang on 8/23/25.
//
#include <iostream>
#include <string>
#include <array>
using namespace std;

int main() {
    const int SIZE = 4;

    // Store some names in an array object.
    array<string, SIZE> names = {"Jamie", "Ashley", "Doug", "Claire"};

    // Display the names.
    for (auto it = names.begin(); it != names.end(); it++)
        cout << *it << endl;
    return 0;
}