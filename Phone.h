#ifndef UNTITLED_PHONE_H
#define UNTITLED_PHONE_H

#include "Contact.h"

#include <string>

using namespace std;

class Phone : public Contact {
public:
    string type;
    string number;

    Phone(const string &number) : number(number) {}

    string ToString() override {
        return number;
    }
};

#endif //UNTITLED_PHONE_H
