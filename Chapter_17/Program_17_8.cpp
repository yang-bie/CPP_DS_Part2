//
// Created by Yang on 8/23/25.
//
#include <iostream>
#include <string>
#include <vector>
#include "Product.h"
using namespace std;

int main() {
    // Create Product objects.
    Product prod1("T-shirt", 20);
    Product prod2("Calendar", 25);
    Product prod3("Coffe Mug", 30);

    // Create a vector to hold the products
    vector<Product> products;

    // Add the products to the vector.
    products.push_back(prod1);
    products.push_back(prod2);
    products.push_back(prod3);

    // Use an iterator to display the vector elements.
    for (auto it = products.begin(); it != products.end(); it++) {
        cout << "Product: " << it->getName() << endl;
        cout << "Units: " << it->getUnits() << endl;
    }

    return 0;
}