#include <iostream>

using namespace std;

    class enemy {
   protected:
        int attackPower;

public:

        void setAttackPower(int a){
          attackPower = a;
        }
    };

        class ninja: public enemy{

        public :
            void attack(){
            cout << "a am a ninja -" << attackPower << endl;
            }
        };

        class monster: public enemy{

        public :
            void attack(){
            cout << "i will eat you -" << attackPower << endl;
            }
        };


   int main(){

    ninja n;
    monster m;

    enemy *enemy1 = &n;
    enemy *enemy2 = &m;
    enemy1->setAttackPower(29);
    enemy2->setAttackPower(30);
    n.attack();
    m.attack();

   }






