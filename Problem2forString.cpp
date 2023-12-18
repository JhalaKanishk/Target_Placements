#include<iostream>
using namespace std;
//to reverse a string
class Solution{
    
    public:
    string reverseWord(string str){
        string new_string;//create a new string

        //run a revers loop
        for(int n = str.length()-1; n >= 0; n--){
            //push the character at n to the new string
            new_string.push_back(str[n]);
        }
        //return the ans
        return new_string;
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
    cout << "Reverse String is : " << endl;
    Solution object;
    cout << object.reverseWord(demostring) << endl;
    return 0;
}
