#include "compareagemax.h"

bool CompareAgeMax::operator () (Contact &c1, Contact &c2)const
{
    return (c1.GetAge()>c2.GetAge());
}
