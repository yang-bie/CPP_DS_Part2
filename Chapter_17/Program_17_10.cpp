//
// Created by Yang on 8/23/25.
//
#include <iostream>
#include <vector>
#include "Product.h"
using namespace std;

int main() {
    // Create a vector hold Products.
    vector<Product> products = {
        Product("T-shirt", 20),
        Product("Coffe Mug", 30)
    };

    // Get an iterator to the 2nd element.
    auto it = products.begin() + 1;

    // Insert another Product into the vector.
    products.emplace(it, "Calendar", 25);

    // Display the vector contents.
    for (auto element : products) {
        cout << "Product: " << element.getName() << endl;
        cout << "Units: " << element.getUnits() << endl;
    }
    return 0;
}