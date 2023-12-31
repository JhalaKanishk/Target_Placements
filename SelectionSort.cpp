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
        void SelectionSort(int arr[], int n){
            for(int i=0; i<=n-1; i++){
                int smallest = i;
                for(int j=i+1; j<=n-1; j++){
                    if(arr[smallest] > arr[j]){
                        smallest = j;
                    }
                }
                int temp = arr[smallest];
                arr[smallest] = arr[i];
                arr[i] = temp;
            }       
        }

        //Time Complexity O(n^2)
        //As Time Complexity is high, So we will be not implementing 

};

int main(){
    cout << "Selection Sort : " << endl;
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
    obj.SelectionSort(arr, n);
    obj.toPrint(arr, n);

    return 0;
}
