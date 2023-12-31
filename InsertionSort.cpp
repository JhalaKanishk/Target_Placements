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
        void InsertionSort(int arr[], int n){
            for(int i=0; i<=n-1; i++){
                int current = arr[i];
                int j = i - 1;
                while(j > 0 && current < arr[j]){
                    arr[j+1] = arr[j];
                    j--;
                }
                //placement
                arr[j+1] = current;
            }
        }

        //Time Complexity O(n^2)
        //As Time Complexity is high, So we will be not implementing 

};

int main(){
    cout << "Insertion Sort : " << endl;
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
    obj.InsertionSort(arr, n);
    obj.toPrint(arr, n);

    return 0;
}
