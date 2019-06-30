#include "contact.h"
#include "singleton.h"
#include "compareagemax.h"
#include "compareagemin.h"
#include "comparenamemax.h"
#include "comparenamemin.h"
#include "comparephonenumbermax.h"
#include "comparephonenumbermin.h"

using namespace std;

int main()
{
    char input;
    bool inputContinue = true;
    int count = 0;
    while (inputContinue)
    {
        cout << "Do you want to add some contacts? [y/n]: ";
        cin >> input;
        if (input == 'y' || input == 'Y')
        {
            count++;
            cout << endl << "Input name: ";
            string name;
            char inputLocal;
            cin >> name;
            cout << "Do you want to input age? [y/n]: ";
            string age;
            cin >> inputLocal;
            if (input == 'y' || input == 'Y')
            {
                cin >> age;
            }
            else if (input == 'n' || input == 'N')
            {
                cout << "age:unknown ( = 0)";
            }
            cout << endl << "Input phoneNumber: ";
            string phoneNumber;
            cin >> phoneNumber;
            if (inputLocal == 'Y' || inputLocal == 'y')
            {
                Contact C(name, age, phoneNumber);
                Singleton::Instance().Add(C);
            }
            else
            {
                Contact C(name, phoneNumber);
                Singleton::Instance().Add(C);
            }
            cout << "New contact is saved" << endl;
        }
        else if (input == 'n' || input == 'N')
        {
            if (count != 0)
            {
                inputContinue = false;
                cout << "Input parameters for sorting: field (age/name/phoneNumber) &  sortOrder (ascending/descending)" << endl;
                string field, sortOrder;
                cin >> field >> sortOrder;
                Singleton::Instance().Sort(field, sortOrder);
                cout << "Contact was sorted by " << field << " and " << sortOrder << ":" << endl;
                Singleton::Instance().Print();
            }
            else
            {
                inputContinue = false;
                cout << "No any contacts." << endl;
            }
        }
    }
    return 0;
}
