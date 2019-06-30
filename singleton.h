#ifndef SINGLETON_H
#define SINGLETON_H
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "contact.h"
#include "compareagemax.h"
#include "compareagemin.h"
#include "comparenamemax.h"
#include "comparenamemin.h"
#include "comparephonenumbermax.h"
#include "comparephonenumbermin.h"

using namespace std;

class Singleton
{
public:
    static Singleton&Instance()
    {
        static Singleton instance;
        return instance;
    }

    void Add(const Contact&);

    void Sort(string, string);

    void Print();

private:
    Singleton() = default;

    ~Singleton() = default;

    Singleton(Singleton const&) = delete;

    Singleton& operator= (Singleton const&) = delete;

    vector<Contact>contactsList;
};

#endif // SINGLETON_H
