//
// Created by Yang on 8/25/25.
//
#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    // Create two sets.
    set<int> set1 = {1, 2, 3, 4};
    set<int> set2 = {2, 3};

    // Determine whether set1 includes the
    // elements of set2.
    if (includes(set1.begin(), set1.end(), set2.begin(), set2.end()))
        cout << "set2 is a subset of set1.\n";
    else
        cout << "set2 is NOt a subset of set1.\n";

    return 0;
}
