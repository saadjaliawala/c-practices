#include <iostream>
using namespace std;

int main()
{
    int age;
    int totalAge = 0;
    int NumberOfPeople = 0;

    cout << "enter first person's age or -1 to quit" << endl;
        cin >> age;


    while (age != -1){

            totalAge = totalAge + age;
            NumberOfPeople++;

            cout << "enter next person's age or -1 to quit" << endl;
            cin >> age;

    }

        cout << "the number of people are" << NumberOfPeople << endl;
        cout << "average age is  " << totalAge/NumberOfPeople << endl;
        cout << "total age is " << totalAge << endl;
        return 0;
}
