#ifndef UNTITLED_ADDRESS_H
#define UNTITLED_ADDRESS_H

#include "Contact.h"

#include <string>

using namespace std;

class Address : public Contact {
public:
    string country;
    string region;
    string city;
    string street;

    Address(const string &country) : country(country) {}

    string ToString() override {
        return country;
    }
};


#endif //UNTITLED_ADDRESS_H
