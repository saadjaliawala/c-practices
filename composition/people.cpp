#include "people.h"
#include "birthday.h"
#include <iostream>

using namespace std;

people::people(string x, birthday bo)
: name(x), dateOfBirth(bo)
{

}
    void people::printInfo(){
    cout << name << "was born on ";
    dateOfBirth.printDate();
    }
