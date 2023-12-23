#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> heap;
        for(int i:nums) heap.push(i);

        for(int i=0; i<=k-1; i++){
            heap.pop();
        }

        //kth largest element in array
        return heap.top();
    }


    int findKthSmallest(int arr[], int l, int r, int k) {
        int ans;
        sort(arr, arr+r+1);
        ans = arr[k-1];
        return ans;
    }
};

int main(){
    cout << "P8 :  Kth Largest Element in an Array" << endl;
    vector<int> arr1 = {3,2,1,5,6,4};
    int target = 2;
    cout << "Target : " << target << endl;
    Solution s;
    cout << "The " << target << " Largest element in array is : " << s.findKthLargest(arr1, target) << endl;

    cout << "P9 :  Kth Smallest Element in an Array" << endl;
    //2. Smallest
    int n;
    cin >> n;
    int arr2[n];
    //input
    for(int i=0; i<=n-1; i++){
        cin >> arr2[i];
    }
    //output
    for(int i=0; i<=n-1; i++){
        cout << arr2[i] << " ";
    }
    cout << "The " << target << " Smallest element in array is : " << s.findKthSmallest(arr2, 0, n-1,  target) << endl;
    return 0;
}
