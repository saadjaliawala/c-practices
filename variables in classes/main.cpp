#include <iostream>
#include <string>

using namespace std;

            class SaadClass {
        public:
            void setName(string x){
                name = x;
            }
                string getName(){
                return name;
    }
        private:
            string name;
  };



int main()
{
        SaadClass sc;
        sc.setName("saad");
        cout << sc.getName();
        return 0;
}
