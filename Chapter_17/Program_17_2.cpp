//
// Created by Yang on 8/23/25.
//
#include <iostream>
#include <string>
#include <array>
using namespace std;

int main() {
    const int SIZE = 3;

    // Store some names in an array object.
    array<string, SIZE> names = {"Sarah", "William", "Alfredo"};

    // Create an iterator for the array object.
    array<string, 3>::iterator it;

    // Display the names.
    cout << "Here are the names:\n";
    for (it = names.begin(); it != names.end(); it++)
        cout << *it << endl;

    return 0;
}