#include<iostream>
using namespace std;

int main(){
    cout << "Arrays" << endl;
    cout << "Enter Array Size : " << endl;
    int n;
    cin >> n; //taking size 
    int arr[n];//declaring array
    cout << "Enter Array Elements : " << endl;

    //input
    for(int i=0;i<=n-1;i++){
        cin >> arr[i];
    }

    //output
    cout << "Resultant Array : " << endl;
    for(int i=0;i<=n-1;i++){
        cout << arr[i] << " ";
    }

    return 0;
}
