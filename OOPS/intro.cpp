#include<iostream>
//For explicitly calling class from independent file
#include"Tekken.cpp"
using namespace std;

//Initalizing class
    // -> calling class from external file

int Tekken :: timeTocomplete = 5;

int main ()  {

    //although we can access the timeTocomplete data members with the help of object but it is not valid or not advised

    cout << Tekken :: random() << endl;

    // const Tekken character1;
    // character1.name;
    // char Name[] = "King";
    // character1.setName(Name);
    // character1.sethealth(90);
    // character1.setlevel('B');
    // char Name[] = "King";
    // character1.setName(Name);
    // Tekken *character2 = new Tekken();

    // //manually call the destructor to unallocate the memory location 
    // delete character2;

    // character1.print();



    //default copy constructor will be invoked
    // Tekken character2(character1);
    // character2.print();

    // //Changing the first character of the name of character1
    // character1.Name[0] = 'P';

    // character1.print();
    // //this will print the same result because default copy constructor make shallow copy
    // //because we have declared the Name variable dynamically

    // //for deep copy you need to create copy constructor and also create a new array to store the name
    // //fro more info refer to C++ -> OOPS -> Tekken.cpp -> copy constructor
    // character2.print();

    // Tekken Paul (24, 'D');
    // Paul.print();

    // Tekken King(Paul);
    // King.print();

    //Dynamic creation of object
    // cout << "Hi ! After this first object is created and default constructor will be invoked" << endl;
    // Tekken *Paul = new Tekken; //object 1
    // cout<< "second object will be created after this and again default constructor will be invoked" << endl;
    // Tekken *Yoshimite = new Tekken; //object 2
    // cout<< "third object will be created after this and again default constructor will be invoked" << endl;
    // Tekken *King = new Tekken; //object 2

    //accessing the members of the class using the ` . ` or `dot` function
    //in casse of dynamic allocation we use either pointer to 
    //point to the object or use assignment operator `->`
    // (*Paul).sethealth(70);
    // Paul->setlevel('B');

    // (*Yoshimite).sethealth(90);
    // Yoshimite->setlevel('A');

    // (*King).sethealth(85);
    // King->setlevel('A');

    // cout << "Level of Paul is: " << Paul->getlevel() << endl;
    // cout << "Health of Paul is: " << Paul->gethealth() << endl;

    // cout << "********************************" << endl;

    // cout << "Level of Yoshimite is: " << Yoshimite->getlevel() << endl;
    // cout << "Health of Yoshimite is: " << Yoshimite->gethealth() << endl;

    // cout << "********************************" << endl;

    // cout << "Level of King is: " << (*King).getlevel() << endl;
    // cout << "Health of King is: " << (*King).gethealth() << endl;    

    // cout << "********************************" << endl;





    //Creating object for class Tekken
    //static creation of object
    // Tekken Paul; //object 1 // -> when the object is created constructor get invoked 
    // Tekken Yoshimite; //object 2
    // Tekken King; //object 2

    // //accessing the members of the class using the ` . ` or `dot` function
    // Paul.sethealth(70);
    // Paul.setlevel('B');

    // Yoshimite.sethealth(90);
    // Yoshimite.setlevel('A');

    // King.sethealth(85);
    // King.setlevel('A');

    // cout << "Level of Paul is: " << Paul.getlevel() << endl;
    // cout << "Health of Paul is: " << Paul.gethealth() << endl;

    // cout << "********************************" << endl;

    // cout << "Level of Yoshimite is: " << Yoshimite.getlevel() << endl;
    // cout << "Health of Yoshimite is: " << Yoshimite.gethealth() << endl;

    // cout << "********************************" << endl;

    // cout << "Level of King is: " << King.getlevel() << endl;
    // cout << "Health of King is: " << King.gethealth() << endl;    

    // cout << "********************************" << endl;

    return 0;
}