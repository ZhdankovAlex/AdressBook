#ifndef COMPAREPHONENUMBERMAX_H
#define COMPAREPHONENUMBERMAX_H
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "contact.h"

using namespace std;

class ComparePhoneNumberMax
{
public:
    bool operator () (Contact &, Contact &)const;
};

#endif // COMPAREPHONENUMBERMAX_H
