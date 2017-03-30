#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream buckyFile("tuna.txt");
    if(buckyFile.is_open()){
        cout << "ohh good" << endl;

    }else{
        cout << "you messed it up " << endl;
    }

    buckyFile << "i love tuna and tuna loves me \n "<< endl;
    buckyFile.close();
    }
