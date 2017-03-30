#include <iostream>
#incude "hannah.h"

using namespace std;

hannah::hannah(int num)
: h (num)
{

}
    void hannah::printCrap(){
    cout << "h=" <<h << endl;
    cout << "this->" <<this-><< endl;
    cout << "(*this).h" <<(*this).h << endl;
    }

