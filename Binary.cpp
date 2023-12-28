#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int target){
    int left=0, right=n-1;

    while(left <= right){
        int mid = (left+right)/2;

        if(target == arr[mid]){
            return mid;
        }

        else if(target <= arr[mid]){
            if(target >= arr[left] && target <= arr[mid]){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }

        else{
            if(target >= arr[mid] && target <= arr[right]){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
    }
    return -1;
}

int main(){
    cout << "Binary Search : " << endl;
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
    cout << "Element Found at Index : " << BinarySearch(arr, n, target) << endl;

    return 0;
}
