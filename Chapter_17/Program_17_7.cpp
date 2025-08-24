//
// Created by Yang on 8/23/25.
//
#include <iostream>
#include <vector>
#include "Product.h"
using namespace std;

int main() {
    // Create a vector of Product objects.
    vector<Product> products = {
        Product("T-shirt", 20), Product("Calendar", 25),
        Product("Coffe Mug", 30)
    };

    // Display the vector elements.
    for (auto element : products) {
        cout << "Product: " << element.getName() << endl;
        cout << "Units: " << element.getUnits() << endl;
    }
    return 0;
}