#include<iostream>
using namespace std;

/*Single Inheritance*/
class Mom{
    public :
        Mom(){
            cout << "Hair color is Black" << endl;
        }
};
class Child : public Mom{
    public :    
        Child(){
            cout << "Eye color is Brown" << endl;
        }
};      

/*Multi-Level Inheritance*/
class GrandPa{
    public :
        GrandPa(){
            cout << "DADA JI" << endl;
        }
};
class Father : public GrandPa{
    public :
        Father(){
            cout << "PAPA JI" << endl;
        }
};
class Son : public Father{
    public :
        Son(){
            cout << "BETA JI" << endl;
        }
};

/*Multiple Inheritance*/
class PAPA{
    public :
        PAPA(){
            cout << "Family : Father" << endl;
        }
};

class MUMMA{
    public :
        MUMMA(){
            cout << "Family : Mother" << endl;
        }
};

class BETA : public PAPA, MUMMA{
    public :
        BETA(){
            cout << "Family : Son" << endl;
        }
};

/*Hierarchical Inheritance*/
class Animal{
    public :
        Animal(){
            cout << "Animals have Four Legs" << endl;
        }
};
class Lions : public Animal{
    public :
        Lions(){
            cout << "Lions are Carnivors" << endl;
        }
};
class Cows : public Animal{
    public : 
        Cows(){
            cout << "Cows are Herbivors" << endl;
        }
};

/*Hybrid Inheritance*/
class A{
    public : 
        A(){
            cout << "A" << endl;
        }
};
class B : public A{
    public : 
        B(){
            cout << "B" << endl;
        }
};
class C : public A{
    public : 
        C(){
            cout << "C" << endl;
        }
};
class D : public C{
    public : 
        D(){
            cout << "D" << endl;
        }
};

int main(){
    cout << "INHERITANCE" << endl;
     /*
    INHERITANCE : 
        In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:

        Derived class (child) - the class that inherits from another class
        Base class (parent) - the class being inherited from

        To inherit from a class, use the : symbol.
    */
    cout << "Single : Inheritance" << endl;
    Child c;

    cout << "----------------------------" << endl;

    cout << "Multi-Level : Inheritance" << endl;
    Son s;

    cout << "----------------------------" << endl;

    cout << "Multiple : Inheritance" << endl;
    BETA obj;

    cout << "----------------------------" << endl;

    cout << "Heirarchical : Inheritance" << endl;
    Lions L;
    Cows C;

    cout << "----------------------------" << endl;

    cout << "Hybird : Inheritance" << endl;
    D d;
    B b;
    return 0;
}
