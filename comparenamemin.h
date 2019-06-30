#ifndef COMPARENAMEMIN_H
#define COMPARENAMEMIN_H
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "contact.h"

using namespace std;

class CompareNameMin
{
public:
    bool operator () (Contact &, Contact &)const;
};
#endif // COMPARENAMEMIN_H
