#include <iostream>

using namespace std;

    template <class F , class D>
    F smaller (F a , D b){
    if (a<b){
        return (a);
    }else{
        return (b);
    }

    }

int main()
{

    int x = 5;
    int y = 10;
    cout << smaller (x,y) << endl;
}
