#include<iostream>
using namespace std;
//to reverse a string
class Solution
{
    public:
    string reverseWord(string str)
    {
        // if the size of string is too small then we can't reverse it
        if(str.size() == 0 || str.size() == 1)
            return str;

        //we are using recursion here Recursion : function calling itself is known as recursion
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
    //creating object of a Solution class and calling the function
    Solution object;
    cout << "Reverse String : " << object.reverseWord(demostring);//passing the input string to the function

    return 0;
}
