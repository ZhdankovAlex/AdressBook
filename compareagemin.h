#ifndef COMPAREAGEMIN_H
#define COMPAREAGEMIN_H
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "contact.h"

using namespace std;

class CompareAgeMin
{
public:
    bool operator () (Contact &, Contact &)const;
};

#endif // COMPAREAGEMIN_H
