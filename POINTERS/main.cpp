#include <iostream>
void passByValue(int x);
void passByReference(int *x);
using namespace std;

int main()
{
    int saad = 13;
    int siddiq = 18;

    passByValue(saad);
    passByReference(&siddiq);

    cout << "saad is now " << saad << endl;
    cout << "siddiq is now" << siddiq << endl;
}
    void passByValue(int x){
        x = 18;
    }

    void passByReference(int *x){
        *x = 25;
    }
