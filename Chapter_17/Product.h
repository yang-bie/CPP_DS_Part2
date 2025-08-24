//
// Created by Yang on 8/23/25.
//

#ifndef CPP_DS_PART2_PRODUCT_H
#define CPP_DS_PART2_PRODUCT_H
#include <string>
using namespace std;

class Product {
private:
    string name;
    int units;

public:
    Product(string name, int units) : name(name), units(units) {}

    void setName(string n) { name = n; }

    void setUnits(int u) { units = u; }

    string getName() const { return name; }

    int getUnits() const { return units; }
};
#endif // CPP_DS_PART2_PRODUCT_H
