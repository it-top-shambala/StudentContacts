#ifndef UNTITLED_CONTACT_H
#define UNTITLED_CONTACT_H

#include <string>

using namespace std;

class Contact {
public:
    virtual ~Contact() { }
    virtual string ToString() = 0;
};

#endif //UNTITLED_CONTACT_H
