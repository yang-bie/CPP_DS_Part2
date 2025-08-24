//
// Created by Yang on 8/24/25.
//

#ifndef CPP_DS_PART2_CONTACT_H
#define CPP_DS_PART2_CONTACT_H
#include <string>
using namespace std;

class Contact {
private:
    string name;
    string email;
public:
    Contact() {
        name = "";
        email = "";
    }

    Contact(string n, string e) {
        name = n;
        email = e;
    }

    string getName() const { return name; }

    void setName(string n) { name = n; }

    string getEmail() const { return email; }

    void setEmail(string e) { email = e; }
};
#endif // CPP_DS_PART2_CONTACT_H
