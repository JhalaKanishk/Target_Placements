#include<iostream>
using namespace std;

class Array{
    public:
        void reverseArray(int arr[], int n){
            for(int i=n-1;i>=0;i--){
                cout << arr[i] << " ";
            }
        }
};


int main(){
    cout << " " << endl;
    //Q2 : REVERSE THE ARRAY
    cout << "Enter the Array Size : " << endl;
    int n;
    cin >> n;
    cout << "Enter Elements Of The Array : "<<endl;
    int arr[n];
    //input
    for(int i=0;i<=n-1;i++){
        cin >> arr[i];
    }
    //creating object of a string class and calling the function
    cout << "Reverse Elements Of The Array : "<<endl;
    Array Arrobj;
    Arrobj.reverseArray(arr, n);

    return 0;
}
