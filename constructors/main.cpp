#include <iostream>

using namespace std;

class saadClass{
public:
        saadClass(string z){
        setName(z);
        }
            string getName(){
            return name;
            }
void setName(string z){
            name = z;
            }
private:
    string name;
    };


int main()
{
    saadClass sc("umer");
    cout << sc.getName();

    saadClass sc2("  saad");
    cout << sc2.getName();


    return 0;
}
