#include<iostream>
using namespace std;
//to reverse a string
class Solution{
    
    public:
    string reverseWord(string str){
        //simply run a reverse loop!
        for (int i = str.length() - 1; i >= 0; i--){
            cout << str[i];
        }
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
    cout << "Reverse String is : " << endl;
    object.reverseWord(demostring);
    return 0;
}
