#include<iostream>
using namespace std;

int partition(int arr[], int n, int low, int high){
    int pivot = arr[high];
    int i = low-1;//used to trekk

    for(int j=low; j<=high-1; j++){
        if(arr[j] < pivot){
            i++;
            //swap the elements
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;
   int temp = arr[i];
   arr[i] = pivot;
   arr[high] = temp;
   return i;//pivot index
}

void QuickSort(int arr[], int n, int low, int high){
    if(low < high){
        int pividx = partition(arr, n, low, high);

        QuickSort(arr,n, low, pividx-1);
        QuickSort(arr,n, pividx+1, high);

    }
}

void toPrint(int arr[], int n){
    for(int i=0; i<=n-1; i++){
        cout << arr[i] << " ";
    }
}


int main(){
    cout << "Quick Sort : " << endl;

    cout << "Enter Array Size : " << endl;
    int n;
    cin >> n;
    cout << "Enter Array Elements : " << endl;
    int arr[n];

    //input
    for(int i=0; i<=n-1; i++){
        cin >> arr[i];
    }
    //output
    cout << "Before Sorting" << endl;
    toPrint(arr, n);
    cout << "" << endl;

    cout << "After Sorting" << endl;
    QuickSort(arr, n, 0, n-1);
    toPrint(arr, n);

    return 0;
}
