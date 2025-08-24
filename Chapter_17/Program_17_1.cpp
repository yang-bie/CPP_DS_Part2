//
// Created by Yang on 8/23/25.
//
#include <array>
#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 4;

    // Store some names in an array object.
    array<string, SIZE> names = {"Jamie", "Ashley", "Doug", "Claire"};

    // Display the names.
    cout << "Here are the names:\n";
    for (auto element: names)
        cout << element << endl;
    return 0;
}
