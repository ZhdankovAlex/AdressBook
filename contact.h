#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Contact
{
private:
    string name;
    string age;
    string phoneNumber;
public:
    Contact(string, string, string);
    Contact(string, string);

    ~Contact();

    void SetName(string);

    void SetAge(string);

    void SetPhoneNumber(string userPhoneNumber);

    string GetName();

    string GetAge();

    string GetPhoneNumber();

    void Print();
};

#endif // CONTACT_H
