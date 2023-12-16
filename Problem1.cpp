#include<iostream>
#include<math.h>
using namespace std;

//this is the class
class Solution
{
   public:
    //this is the function
    int findSum(int arr[], int n){
        //intitailize two var
        int Maxno = INT32_MIN;//INT32_MIN means minimum value
        int Minno = INT32_MAX;//INT32_MIN means maximum value
    	
        for(int i=0;i<=n-1;i++){
            if(arr[i] > Maxno){
                Maxno = arr[i];
            }
            if(arr[i] < Minno){
                Minno = arr[i];
            }
        }
        int sum = Maxno+Minno;
        return sum;
    }

};

int main(){
    cout << "P1 : maximum-and-minimum-in-an-array" << endl;
    cout << "Enter Array Size : " << endl;
    int n;
    cin >> n; //taking size of array
    int arr[n];//declaring the array
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


    //Creating Object of Solution class
    Solution s;
    cout << "\n Sum is : " << s.findSum(arr, n) << endl;
    return 0;
}
