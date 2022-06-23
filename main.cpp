#include <typeinfo>
#include <iostream>

#include "Address.h"
#include "Phone.h"
#include "Student.h"


using namespace std;

void Print(Person* person);
void PrintContact(Contact* contact);

int main() {

    Person* student1 = new Student();
    student1->contact = new Phone("+71234567890");

    Person* student2 = new Student();
    student2->contact = new Address("Russia");

    Print(student1);
    Print(student2);

    PrintContact(student1->contact);
    PrintContact(student2->contact);

    return 0;
}

void Print(Person* person) {
    if (Student* student = dynamic_cast<Student*>(person)) {
        if (Address* address = dynamic_cast<Address*>(student->contact)) {
            cout << address->country << endl;
        } else if (Phone* phone = dynamic_cast<Phone*>(student->contact)) {
            cout << phone->number << endl;
        }
    } else {
        cout << "BAD" << endl;
    }
}

void PrintContact(Contact* contact) {
    cout << contact->ToString() << endl;
}
