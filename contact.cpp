#include "contact.h"

using namespace std;

Contact::Contact(string userName, string userAge, string userPhoneNumber)
{
    name = userName;
    age = userAge;
    phoneNumber = userPhoneNumber;
}

Contact::Contact(string userName, string userPhoneNumber)
{
    name = userName;
    age = "0";
    phoneNumber = userPhoneNumber;
}

Contact::~Contact()
{
    name = "";
    age = "0";
    phoneNumber = "";
}

void Contact::SetName(string userName)
{
    name = userName;
}

void Contact::SetAge(string userAge)
{
    age = userAge;
}

void Contact::SetPhoneNumber(string userPhoneNumber)
{
    phoneNumber = userPhoneNumber;
}

string Contact::GetName()
{
    return name;
}

string Contact::GetAge()
{
    return age;
}

string Contact::GetPhoneNumber()
{
    return phoneNumber;
}

void Contact::Print()
{
    cout << "Name: " << name << endl
         << "Number: " << phoneNumber << endl
         << "Age: ";
    if (age != "0")
    {
        cout << age;
    }
    else
    {
        cout << "unknown";
    }
    cout << endl << "_______________________" << endl;
}

