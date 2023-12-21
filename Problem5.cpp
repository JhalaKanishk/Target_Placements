#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        //Applying Modified Binary Search
        int low = 0, high = nums.size()-1;

        while(low <= high){
            //mid = target
            int mid = (low+high)/2;
            if(nums[mid] == target){
                return mid;//ans will be return from herre only
            }

            //target less then mid
            if(nums[low] <= nums[mid]){
                if(target >= nums[low] && target <= nums[mid]){
                    high = mid-1;
                }
                else{
                    low = mid + 1;
                }
            }   

            //target gretaer then mid
            else{
                if(target >= nums[mid] && target <= nums[high]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                } 
            }
        }
        return -1;
    }
};

int main(){
    cout << "P5 : Search in Rotated Sorted Array" << endl;
    vector<int> arr = {4,5,6,7,0,1,2};
    //to Print
    for(int i=0; i<=arr.size()-1; i++){
        cout << arr[i] << " ";
    }
    cout << " " << endl;

    cout << "Enter the value to search in array" << endl;
    int target;
    cin >> target;
   
    Solution obj;
    cout << obj.search(arr, target) << endl;
    return 0;
}
