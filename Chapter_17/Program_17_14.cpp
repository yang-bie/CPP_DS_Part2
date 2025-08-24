//
// Created by Yang on 8/24/25.
//
#include <iostream>
#include <map>
#include <string>
#include "Contact.h"
using namespace std;

int main() {
    string searchName; // The name to search for

    // Create some Contact objects
    Contact contact1("Ashley Miller", "amiller@faver.edu");
    Contact contact2("Jacob Brown", "jbrown@gotham.edu");
    Contact contact3("Emily Ramirez", "eramirez@coolidge.edu");

    // Create a map to hold the Contact objects.
    map<string, Contact> contacts;

    // Add the Contact objects to the map.
    contacts[contact1.getName()] = contact1;
    contacts[contact2.getName()] = contact2;
    contacts[contact3.getName()] = contact3;

    // Create an iterator for the map.
    map<string, Contact>::iterator it;

    // Get the name to search for.
    cout << "Enter a name: ";
    getline(cin, searchName);

    // Search for the name
    // if (contacts.count(searchName) != 0) {
    //     it = contacts.find(searchName);
    //     cout << it->first << " " << it->second.getEmail() << endl;
    // }
    // else
    //     cout << "Cannot find the person.\n";

    it = contacts.find(searchName);

    if (it != contacts.end()) {
        cout << "Name: " << it->second.getName() << endl;
        cout << "Email: " << it->second.getEmail() << endl;
    } else {
        cout << "Contact not found.\n";
    }

    return 0;
}