#include "comparenamemax.h"

bool CompareNameMax::operator () (Contact &c1, Contact &c2)const
{
    return (c1.GetName()>c2.GetName());
}
