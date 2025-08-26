//
// Created by Yang on 8/26/25.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Create a vector of ints.
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};

    // Use a lambda expression to create a function object.
    auto IsEven = [](int x){ return x % 2 == 0; };

    // Get the number of elements that even.
    int evenNumbers = count_if(v.begin(), v.end(), IsEven);

    // Display the results.
    cout << "The vector contains " << evenNumbers << " even numbers.\n";
    return 0;
}
