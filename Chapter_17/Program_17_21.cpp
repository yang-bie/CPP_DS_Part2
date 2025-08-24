//
// Created by Yang on 8/24/25.
//
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    // Define a phonebook multimap.
    multimap<string, string> phonebook = {
        {"Will", "555-1212"}, {"Will", "555-0123"},
        {"Faye", "555-0707"}, {"Faye", "555-1234"},
        {"Sarah", "555-8787"}, {"Sarah", "555-5678"}
    };

    // Define a pair variable to receive the object that
    // is returned from equal_range member function.
    pair<multimap<string, string>::iterator, multimap<string, string>::iterator> range;

    // Define an iterator for the multimap.
    multimap<string, string>::iterator it;

    // Get the range of elements that match "Faye".
    range = phonebook.equal_range("Faye");

    // Display all elements that match "Faye".
    for (it = range.first; it != range.second; it++)
        cout << it->first << "\t" << it->second << endl;

    return 0;
}