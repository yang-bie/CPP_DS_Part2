//
// Created by Yang on 8/24/25.
//

#ifndef CPP_DS_PART2_CUSTOMER_H
#define CPP_DS_PART2_CUSTOMER_H
#include <string>
using namespace std;

class Customer {
private:
    int custNumber;
    string name;

public:
    Customer() {
        custNumber = 0;
        name = "";
    }

    Customer(int cn, string n) {
        custNumber = cn;
        name = n;
    }

    int getCustNumber() const { return custNumber; }

    void setCustNumber(int cn) { custNumber = cn; }

    string getName() const { return name; }

    void setName(string n) { name = n; }

    bool operator<(const Customer &right) const {
        bool status = false;
        if (custNumber < right.getCustNumber())
            status = true;
        return status;
    }
};
#endif // CPP_DS_PART2_CUSTOMER_H
