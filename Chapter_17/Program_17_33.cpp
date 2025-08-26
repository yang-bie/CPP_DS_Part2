//
// Created by Yang on 8/25/25.
//
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// Function prototype
void displaySet(set<string>);
void displayIntersection(set<string>, set<string>);
void displayUnion(set<string>, set<string>);
void displayDifference(set<string>, set<string>);
void displaySymmetricDifference(set<string>, set<string>);

int main() {
    set<string> baseball = {"Jodi", "Carmen", "Aida", "Alicia"};
    set<string> basketball = {"Eva", "Carmen", "Alicia", "Sarah"};

    displaySet(baseball);
    displaySet(basketball);

    displayIntersection(basketball, baseball);

    displayUnion(baseball, basketball);

    displayDifference(basketball, baseball);

    displaySymmetricDifference(basketball, baseball);

    return 0;
}

void displaySet(set<string> s) {
    for (auto element : s)
        cout << element << " ";
    cout << endl;
}

void displayIntersection(set<string> set1, set<string> set2) {
    vector<string> result(set1.size() + set2.size());

    auto iter = set_intersection(set1.begin(), set1.end(),
        set2.begin(), set2.end(), result.begin());
    result.resize(iter - result.begin());

    for (auto element : result)
        cout << element << " ";
    cout << endl;
}

void displayUnion(set<string> set1, set<string> set2) {

    vector<string> result(set1.size() + set2.size());

    auto iter = set_union(set1.begin(), set1.end(),
        set2.begin(), set2.end(), result.begin());
    result.resize(iter - result.begin());

    for (auto element : result)
        cout << element << " ";
    cout << endl;
}
void displayDifference(set<string> set1, set<string> set2) {

    vector<string> result(set1.size() + set2.size());

    auto iter = set_difference(set1.begin(), set1.end(),
        set2.begin(), set2.end(), result.begin());
    result.resize(iter - result.begin());

    for (auto element : result)
        cout << element << " ";
    cout << endl;
}
void displaySymmetricDifference(set<string> set1, set<string> set2) {

    vector<string> result(set1.size() + set2.size());

    auto iter = set_symmetric_difference(set1.begin(), set1.end(),
        set2.begin(), set2.end(), result.begin());
    result.resize(iter - result.begin());

    for (auto element : result)
        cout << element << " ";
    cout << endl;
}
