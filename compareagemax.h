#ifndef COMPAREAGEMAX_H
#define COMPAREAGEMAX_H
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "contact.h"

using namespace std;

class CompareAgeMax
{
public:
    bool operator () (Contact &, Contact &)const;
};

#endif // COMPAREAGEMAX_H
