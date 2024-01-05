#include<iostream>
using namespace std;

static int Object = 0;

class Myconstructor{
    public:
        Myconstructor(){
            cout << "Object is Created" << endl;
            Object++;
            cout << Object << endl;
        }

        ~Myconstructor(){
            cout << "Object is Destroyed" << endl;
            Object--;
            cout << Object << endl;
        }
};

class MyAccessSpec{
    public :
        int publicVar;

        void publicFun(){
            cout << "This is Public Function" << endl;
            cout << publicVar << endl;
            //you can access the private & protected data member & member function form th public section.
            this->privateVar = 30;
            this->privateFun();
            this->protectedVar = 30;
            this->protectedFun();
        }
    private :
        int privateVar;
        void privateFun(){
            cout << "This is Private Function" << endl;
            cout << privateVar << endl;
        }
    protected :
        int protectedVar;
        void protectedFun(){
            cout << "This is Protected Function" << endl;
            cout << protectedVar << endl;
        }

    friend class Friend;

    friend void Fun(MyAccessSpec &obj);
};

//Inherited a class Derived from base class MyAccessSpec
class Derived : public MyAccessSpec{
    public :
        void Display(){
            this->protectedVar = 40;
            this->protectedFun();
        }
};

//Friend class can access public, private & protected Mmebers of class
class Friend{
    public :
        void Show(MyAccessSpec &O){
            cout << "Firend Class " << endl;;
            O.publicFun();
            O.privateFun();
            O.protectedFun();
        }
};

//Freind Function
void Fun(MyAccessSpec &O){
    cout << "Firend Function " << endl;;
    O.publicFun();
    O.privateFun();
    O.protectedFun();
}

int main(){
    /*[TOPIC : 4]
        DESTRUCTORS
        -> A destructor is also a special member function like a constructor. Destructor destroys the class objects created by the constructor.
        -> It is automatically called when an object goes out of scope.  
        -> Destructor release memory space occupied by the objects created by the constructor.
    */

    // Myconstructor C1, C2, C3;
    //Constructor will invoked 3 Times, then after Destructor will invoked.


    /*[TOPIC : 5] 
        ACCESS SPECIFIER
        -> Access specifier in c++ can be private or public or protected. which defines the accessibility of data memeberse and member funtion outside the class.
        
        In C++, there are three access specifiers:
        public - members are accessible from outside the class
        private - members cannot be accessed (or viewed) from outside the class but can be accessed from the class.
        protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.
    */
    MyAccessSpec obj;
    obj.publicVar = 20;
    obj.publicFun();

    /*
        priavte & protected are not accessible outside the class.
    */
   Derived dobj;
   dobj.Display();
  
    /* To solve this we use friend class*/
    Friend fobj;
    fobj.Show(obj);

    /* To solve this we use friend function*/
    Fun(obj);
    return 0;
}
