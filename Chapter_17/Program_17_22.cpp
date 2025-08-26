//
// Created by Yang on 8/25/25.
//
#include <iostream>
#include <set>
#include "Customer.h"
using namespace std;

int main() {
    // Create a set of Customer objects.
    set<Customer> customers = {
        Customer(1003, "Megan Cruz"),
        Customer(1002, "Austin Hill"),
        Customer(1001, "Sarah Scott")
    };

    // Try to insearch a duplicate customer number.
    customers.emplace(1001, "Evan Smith");

    // Display the set elements.
    cout << "List of customers:\n";
    for (auto element : customers)
        cout << element.getCustNumber() << " " << element.getName() << endl;

    // Search for customer number 1002.
    cout << "\nSearching for customer 1002:\n";
    auto it = customers.find(Customer(1002, ""));

    if (it != customers.end())
        cout << "Foud: " << it->getName() << endl;
    else
        cout << "Not found.\n";

    return 0;
}