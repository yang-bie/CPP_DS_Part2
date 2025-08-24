//
// Created by Yang on 8/23/25.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Define a vector with 5 int values.
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Define an iterator pointing to the second element.
    auto it = numbers.begin() + 1;

    // Insert a new element with the value 99.
    numbers.insert(it, 99);

    // Display the vector elements.
    for (auto it = numbers.begin(); it != numbers.end(); it++)
        cout << *it << " ";
    cout << endl;
    return 0;
}