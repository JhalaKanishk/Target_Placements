#include<iostream>
#include <bits/stdc++.h>//this package is to use vectors
using namespace std;

//this is an class
class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            //boolean function returns true or false
            int n = nums.size();//taking the size of nums array in n variable
            sort(begin(nums), end(nums));//this is an inbuilt sorting function which sorts the array
            bool result = false;

            for(int i = 1; i<n ; i++){
                if(nums[i] == nums[i-1]){//comparing the first value of array with second
                    result = true;//updating the result if duplicate occurs
                }
        }
        return result;
    }
};

int main(){
    cout << "P4 : Contains Duplicate" << endl;
    vector<int> arr = {1,1,1,3,3,4,3,2,4,2};
    //toprint this array
    int n = arr.size();
    for(int i=0;i<=n-1;i++){
        cout << arr[i] << " ";
    }

    Solution obj;//creating obj of the class
    int ans = obj.containsDuplicate(arr);//passing the value into a variable
    cout << "\nContains Duplicate or not ? 1 = (true) : 0 = false : " << ans << endl;
    return 0;
}
