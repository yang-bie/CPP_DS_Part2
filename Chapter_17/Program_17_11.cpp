//
// Created by Yang on 8/24/25.
//
// This program demonstrates an iterator with a map.
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Create a map containing employee IDs and names.
    map<int, string> employees = {
            {101, "Chris jones"}, {102, "Jessica Smith"},
        {103, "Amanda Stevens"}, {104, "Will Osborn"}};

    // Create an iterator
    map<int, string>::iterator iter;

    // Use iterator to display each element in the map.
    for (iter = employees.begin(); iter != employees.end(); iter++)
        cout << "ID: " << iter->first << "\nName: " << iter->second << endl;

    return 0;
}