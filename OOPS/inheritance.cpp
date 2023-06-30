#include<iostream>
using namespace std;

class Human {

    public: 
        int age;
        int weight;
        int height;

    public:
        int getHeight() {
            return this->height;
        }

        void setAge(int Age) {
            age = Age; 
        }

        int getAge() {
            return this->age;
        }
};

//inheriting Human class 
class Male : public Human {

    public:
        string color;

        void print() {
            cout << "sab changa si" <<endl;
        }
};

int main() {

    Male aadmi1;

    aadmi1.setAge(23); 
    cout << aadmi1.getAge() << endl;
    aadmi1.print();
    return 0;
}