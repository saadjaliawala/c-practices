#include <iostream>

using namespace std;

int factoriol(int x){
    if(x == 1){
        return 1;
    }else{
           return x*factoriol(x - 1);
    }

}

int main()
{
    cout << factoriol(5) << endl;
}
