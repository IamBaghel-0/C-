#include "bits/stdc++.h"
using namespace std;

class Tekken {
    //Access modifiiers Private [by default], Public, Protected
    private:
        int health;
        char level;
    public:
        char *Name;
        //static data member are advised to use independently without creating the object
        static int timeTocomplete;
        
        //getter and setter functions
        //they are generally used to access the private members of the class
        //they are included in encapsulation technique
        int gethealth() {
            return health;
        }

        char getlevel() {
            return level;
        }

        void sethealth(int h) {
            health = h;
        }

        void setlevel(char l) {
            level = l;
        }

        void setName(char Name[]) {
            strcpy(this->Name, Name);
        }

        // creating default constructor
        // Tekken() {
        //     cout << "Default Constructor invoked" << endl;
        //     Name = new char[100];
        // }
        string name;
        Tekken () {
            name = "Paul";
        }

        //creating parameterized constructor  
        //when parameterized constructor is created default creator get destroyed by itself
        Tekken(int health, char level) {       
            //this keyword is an implicit pointer which is used 
            //to poinnt to the object of the class of which member
            //function is called.
            //this -> health is pointing to the private variable
            this -> health = health; //health is same as parameter          
            //this -> level is pointing to the private variable
            this -> level = level;  // level is same as parameter
        }

        // copy construcotr
        //Although there is no need of creating the copy construcotr
        //it is created by itseld when prameterzied constructor is created
        //but still
        Tekken (Tekken &temp) { //always pass the object by reference not by value if you are creating a copy constructor it will prevent you from getting into infinite loop
            //for deep copy
            char *ch = new char[strlen(temp.Name) + 1];
            strcpy(ch, temp.Name);
            this->Name = ch;
            this -> health = temp.health;
            this -> level = temp.level;
        }
       
        
        void print() {
            cout << "[ Name: " << this->Name << ", ";
            cout << "Health: " << this->health << ", ";
            cout << "Level: " << this->level << " ]" << endl << endl;
        }

        //destructor
        //for static memory allocation it is called automatically 
        //while for dynamic memory allocation it necessary to create the destructor.
        ~Tekken () {
            cout << "Destructor is invoked" << endl;
        }

        //static function can only access the static variable 
        //no need to create object to access the static function
        //this keyword cannot be used in static function
        static int random() {
            return timeTocomplete;
        }
};