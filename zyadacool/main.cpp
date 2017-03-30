#include <iostream>
#include <fstream>
#include<string>
using namespace std;

    int getwhatTheyWant();
    void displayItems(int x);


//main function
int main()
{
    int whatTheyWant;

        whatTheyWant = getwhatTheyWant();

        while (whatTheyWant != 4){
                switch(whatTheyWant){
            case 1:
       diplayItems(1);
                break;
            case 2:
               diplayItems(2);
                break;
            case 3:
                diplayItems(3);
                break;

                }

            whatTheyWant = getwhatTheyWant();
        }

}
    // get what they want function


    int getwhatTheyWant(){

        int choice;

        cout << "1 - just plain items" << endl;
        cout << "2 - helpful items" << endl;
        cout << "3 - harmful items" << endl;
        cout << "4 - quit program" << endl;

        cin >> choice;
        return choice;

    }
  //display items function

  void displayItems(int x){
    ifstream objectFile("objects.txt");
    string name;
    double power;

while(objectFile >> name >> power) {
        if (power == 0 && x == 1) {
                cout << name << ' '  << power << endl;
        }
        else if (power > 0 && x == 2) {
                cout << name << ' '  << power << endl;
        }
        else if (power < 0 && x == 3) {
                cout << name << ' '  << power << endl;
        }



  }


