#include<iostream>
using namespace std;
//to reverse a string
class String
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        if(str.size() == 0 || str.size() == 1)
            return str;
        return reverseWord(str.substr(1))+str[0];
    }
};


int main(){
    cout << "P2 : Write a program to reverse an string" << endl;
    //Q1 : REVERSE THE STRING
    cout << "Enter Any String : " << endl;
    string demostring;
    cin >> demostring;//taking input
    cout << "String : " << demostring << endl;
    //creating object of a string class and calling the function
    String object;
    cout << "Reverse String : " << object.reverseWord(demostring);//passing the input string to the function

    return 0;
}
