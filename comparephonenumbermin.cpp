#include "comparephonenumbermin.h"

bool ComparePhoneNumberMin::operator () (Contact &c1, Contact &c2)const
{
    return (c1.GetPhoneNumber()<c2.GetPhoneNumber());
}
