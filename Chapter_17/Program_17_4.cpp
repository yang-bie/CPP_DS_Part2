//
// Created by Yang on 8/23/25.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int SIZE = 10;

    // Define a vector to hold 10 int values.
    vector<int> numbers(10);

    // Store the values 0 through 9 in the vector.
    for (int index = 0; index < SIZE; index++)
        numbers[index] = index;

    // Display the vector elements.
    for (auto element: numbers)
        cout << element << " ";

    return 0;
}
