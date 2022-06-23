#ifndef UNTITLED_PERSON_H
#define UNTITLED_PERSON_H

#include <string>

#include "Contact.h"

using namespace std;

class Person {
public:
    virtual ~Person() { }

    string name;
    Contact* contact;
};

#endif //UNTITLED_PERSON_H
