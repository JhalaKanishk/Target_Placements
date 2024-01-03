#include<iostream>
using namespace std;

class Myconstructor{
    public :
        int age = 19;
        string name = "Mehul";
        Myconstructor(){
            cout << "Default Constructor!!" << endl;
            cout << "Age : " << age << endl;
            cout << "Name : " << name << endl;
        }
        Myconstructor(int age, string name){
            cout << "Parameterized Constructor!!" << endl;
            this->age = age;
            this->name = name;
            cout << "Age : " << age << endl;
            cout << "Name : " << name << endl;
        }
        Myconstructor(Myconstructor& c){
            cout << "Copy Constructor!!" << endl;
            this->age = c.age;
            this->name = c.name;
            cout << "Age : " << age << endl;
            cout << "Name : " << name << endl;
        }
};


//Class
class Student{
    public :
    //Data Members
        int SID;
        string SNAME;
    //Member Function
        void set(){
            cout << "Enter Stundent ID : " << endl;
            cin >> SID;
            cout << "Enter Stundent NAME : " << endl;
            cin >> SNAME;
            this->SID = SID;
            this->SNAME = SNAME;
        }
        void get(){
            cout << "Student ID : " << SID << endl;
            cout << "Student NAME : " << SNAME << endl;
        }
    //use of scope resolution
        void displayfun();
};

void Student :: displayfun(){
    cout << "Increasing Accessibilty using (::)" << endl;
    cout << "Age : " << 20 << endl;
    cout << "Name : " << "Hitiksha" << endl;
}

//Globally Declared
string name = "Hitiksha";

int main(){
    //OOPS IN C++;  
    /*
    *   C++ is an Object-Oriented Programming Language.
    *   Everything in C++ is associated with classes and objects.
    *   Along with Data Members() & Member Function.
    *   Class is an User Defined Data Type or a Blue Print that we can use in our Program.
    */

    /*[TOPIC : 1] 
        CLASS & OBJECTS
    */
    //Student is class and sobj is object
    Student sobj;

    //Accessing Member Function
    // sobj.set();
    // sobj.get();

     /*[TOPIC : 2] 
        SCOPE RESOLTUION OPERATOR
        1) To access a global variable when there is a local variable with same name.

        2) To define a function outside the class

        3) To access a class static variable
    */
   
    // string name = "Kanishk";

    // cout << "GLOBAL VARIABLE : " << ::name << endl;
    // cout << "LOCAL VARIABLE : " << name << endl;
    //Accesssing an function outside the class
    sobj.displayfun();


    /*[TOPIC : 3] 
        CONSTRUCTORS
    • Constructor is a member function of a class, whose name is same as the class name.
    • Constructor is a special type of member function that is used to initialize the data members for an object of a class automatically, when an object of the same class is created.
    • Constructor is invoked at the time of object creation. It constructs the values i.e. provides data for the object that is why it is known as constructor.
    • Constructor do not return value, hence they do not have a return type.
    */
    Myconstructor obj1;//Default 
    Myconstructor obj2(19, "Harshita");//Parameterized
    Myconstructor obj3(obj1);//Copy

    return 0;
}
