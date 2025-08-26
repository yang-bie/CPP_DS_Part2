//
// Created by Yang on 8/26/25.
//
#include <iostream>
#include <algorithm>
#include <vector>
#include "IsEven.h"
using namespace std;

int main() {
    // Create a vector of this.
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};

    // Create an instance of the IsEven class.
    //IsEven isNumberEven;

    // Get the number of elements that even.
    int evenNumbers = count_if(v.begin(), v.end(), IsEven());

    // Display the results.
    cout << "The vector contains " << evenNumbers << " even numbers.\n";

    return 0;
}