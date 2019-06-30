#include "singleton.h"
#include "contact.h"
#include "compareagemax.h"
#include "compareagemin.h"
#include "comparenamemax.h"
#include "comparenamemin.h"
#include "comparephonenumbermax.h"
#include "comparephonenumbermin.h"

using namespace std;

#pragma endregion

void Singleton::Add(const Contact& userContact)
{
    contactsList.push_back(userContact);
}

void Singleton::Sort(string field, string flag)
{
     if (field == "name")
     {
         if (flag == "ascending")
         {
            sort(contactsList.begin(), contactsList.end(), CompareNameMin());
         }
         else
             if (flag == "descending")
             {
                sort(contactsList.begin(), contactsList.end(), CompareNameMax());
             }
     }
     else
         if (field == "age")
         {
             if (flag == "ascending")
             {
                sort(contactsList.begin(), contactsList.end(), CompareAgeMin());
             }
             else
                 if (flag == "descending")
                 {
                    sort(contactsList.begin(), contactsList.end(), CompareAgeMax());
                 }
         }
         else
             if (flag == "phoneNumber")
             {
                 if (flag == "ascending")
                 {
                    sort(contactsList.begin(), contactsList.end(), ComparePhoneNumberMin());
                 }
                 else
                     if (flag == "descending")
                     {
                        sort(contactsList.begin(), contactsList.end(), ComparePhoneNumberMax());
                     }
             }
}

void Singleton::Print()
{
    int size = contactsList.size();
    cout << "You have " << size << " contacts:" << endl;
    for (int i = 0; i<size; i++)
    {
        Contact currentContact = contactsList[i];
        currentContact.Print();
    }
}


