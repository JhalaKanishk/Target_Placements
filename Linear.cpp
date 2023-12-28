#include<iostream>
using namespace std;

int LinearSearch(int arr[], int n, int target){
    for(int i=0; i<=n-1; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    cout << "Linear Search : " << endl;
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

    cout << "\nEnter the element to Search in Array : " << endl;
    int target;
    cin >> target;
    cout << "Element Found at Index : " << LinearSearch(arr, n, target) << endl;

    return 0;
}
