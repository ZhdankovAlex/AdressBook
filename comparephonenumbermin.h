#ifndef COMPAREPHONENUMBERMIN_H
#define COMPAREPHONENUMBERMIN_H
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "contact.h"

using namespace std;
class ComparePhoneNumberMin
{
public:
    bool operator () (Contact &, Contact &)const;
};

#endif // COMPAREPHONENUMBERMIN_H
