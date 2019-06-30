#ifndef COMPARENAMEMAX_H
#define COMPARENAMEMAX_H
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "contact.h"

using namespace std;

class CompareNameMax
{
public:
    bool operator ()(Contact &, Contact &)const;
};

#endif // COMPARENAMEMAX_H
