#include<iostream>
#include<math.h>
using namespace std;

class Sample{
    //private
    int a, b;
    public :
        int setGet(int a, int b){
            this->a = a;
            this->b = b;
            int Mul = a * b;
            return Mul;
        }
};


int main(){
    /*[TOPIC : 5]
        Encapsulation in C++ is defined as the wrapping up of data and information in a single unit. In Object Oriented Programming.
        
        Two Properties : 
            Data Protection : Encapsulation protects the internal state of an object by keeping its data members private.
            Information Hiding :  Encapsulation hides the internal implementation details of a class from external code. */
    cout << "Encapsulation" << endl;
    Sample obj;
    cout << "Enter Two Numbers : " << endl;
    int num1, num2;
    int result = obj.setGet(num1, num1);
    cout << "Multiply Of Two Number is : " << result << endl;

     /*[TOPIC : 6]
        DATA ABSTRACTION
            Data abstraction is one of the most essential and important features of object-oriented programming in C++. Abstraction means displaying only essential information and hiding the details. */
    cout << "Abstraction" << endl;
    cout << "Enter the numbers and its power : " << endl;
    int m, k;
    cin >> m >> k;
    //Abstraction Example
    cout << "Result : " << pow(m,k) << endl;
    return 0;
}
