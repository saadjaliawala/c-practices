#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream thefile("players.txt");

    cout << "enter players id , name , account number " << endl;
    cout << "press Ctrl+Z to exit \n" << endl;

    double accountNumber;
    string name;
    int playerId;


    while (cin >> playerId >> name >> accountNumber) {

        thefile <<  playerId << name << accountNumber << endl;

    }
}
