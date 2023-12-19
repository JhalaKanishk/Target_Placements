#include<iostream>
#include <bits/stdc++.h>//this package is to use vectors
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();// 9 is the size of nums array
        int maxSum = INT32_MIN;//assgining a minimum value to the maxSum
        int currSum = 0;

        for(int i=0;i<=n-1;i++){
            currSum += nums[i];
            if (currSum > maxSum){
                maxSum = currSum;
            }
            if(currSum < 0){
                currSum = 0;
            }
        }
        return maxSum;
    }
};

int main(){
    cout << "P3 : Maximum Subarray Sum" << endl;
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    //toprint this array
    int n = arr.size();
    for(int i=0;i<=n-1;i++){
        cout << arr[i] << " ";
    }

    Solution obj;//creating obj of the class
    int maximumSum = obj.maxSubArray(arr);//passing the value into a variable
    cout << "\nHence Maximum Sum is : " << maximumSum << endl;
    return 0;
}
