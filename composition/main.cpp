#include <iostream>
#include "birthday.h"
#include "people.h"

using namespace std;

int main()
{
    birthday birthobj(12,28,1997);

    people saad("saad the king",birthobj);

    saad.printInfo();
}
