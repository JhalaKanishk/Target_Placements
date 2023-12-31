#include<iostream>
using namespace std;

class Solution{
    public:
        //TO PRINT
        void toPrint(int arr[], int n){
            for(int i=0; i<=n-1; i++){
                cout << arr[i] << " ";
            }
        }

        //TO SORT
        void BubbleSort(int arr[], int n){
            for(int i=0; i<=n-1; i++){
                for(int j=0; j<n-i-1; j++){
                    if(arr[j] > arr[j+1]){
                        //swap
                        int temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
                    }
                }
            }
        }

        //Time Complexity O(n^2)
        //As Time Complexity is high, So we will be not implementing 

};

int main(){
    cout << "Bubble Sort : " << endl;
    cout << "Enter Size : " << endl;
    int n;
    cin >> n;
    cout << "Enter Elements : " << endl;
    int arr[n];

    //input
    for(int i=0; i<=n-1; i++){
        cin >> arr[i];
    }

    cout << "Before Sorting" << endl;
    Solution obj;
    //output
    obj.toPrint(arr, n);
    cout << "" << endl;

    cout << "After Sorting" << endl;
    obj.BubbleSort(arr, n);
    obj.toPrint(arr, n);

    return 0;
}
