#include<iostream>
#include<bits/stdc++.h>//this package is to use vectors
#include<math.h>
using namespace std;

class Solution{
    public :
        void toPrint(vector<int> arr){
            for(int i=0; i<=arr.size()-1; i++){
                cout << arr[i] << " ";
            }
        }

        int findSum(int arr[], int n){
            //complete the function
            int Sum;
            int Max_element = INT32_MIN;
            int Min_element = INT32_MAX;

            for(int i=0; i<=n-1; i++){
                if(arr[i] > Max_element){
                    Max_element = arr[i];
                }
                if(arr[i] < Min_element){
                    Min_element = arr[i];
                }
            }
            Sum = Max_element + Min_element;
            return Sum;
        }

        string reverseWord(string str){
            //complete the function
            string new_str = "";
            for(int i=str.size()-1; i>=0; i--){
                new_str += str[i];
            }
            return new_str;
        }

        int maxSubArray(vector<int>& nums){
            //complete the function
            int MaxSum = INT32_MIN;
            int CurrSum = 0;
            for(int i=0; i<=nums.size()-1; i++){
                CurrSum += nums[i];
                if(CurrSum > MaxSum){
                    MaxSum = CurrSum;
                }
                if(CurrSum < 0){
                    CurrSum = 0;
                }
            }
            return MaxSum;
        }

        bool containsDuplicate(vector<int>& nums){
            //complete the function
            bool result = false;
            int n = nums.size();
            sort(nums.begin(), nums.end());
            for(int i=1; i<=n-1; i++){
                if(nums[i] == nums[i-1]){
                    return true;
                }
            }
            return result;
        }

        int search(vector<int>& nums, int target){
            //complete the function
            int n = nums.size(), low = 0, high = n-1;
            while(low <= high){
                int mid = (low + high)/2;

                if(nums[mid] == target){
                    return mid;
                }

                else if(target <= nums[mid]){
                    if(nums[low] <= target && nums[mid] >= target){
                        high = mid - 1;
                    }
                    else{
                        low = mid + 1;
                    }
                }

                else{
                    if(nums[mid] <= target && nums[high] >= target){
                        low = mid + 1;
                    }
                    else{
                        high = mid - 1;
                    }
                }
            }

            return -1;
        }

        int maxProfit(vector<int>& prices){
            //complete the function
            int maxProfit = INT32_MIN;
            int minSoFar = prices[0];
            int n = prices.size();
            for(int i=0; i<=n-1; i++){      
                minSoFar = min(prices[i], minSoFar);
                int profitSoFar= prices[i] - minSoFar;
                maxProfit = max(profitSoFar, maxProfit);
            }
            return maxProfit;
        }

        int findKthLargest(vector<int>& nums, int k) {
            //complete the function
            priority_queue<int> heap;
            for(int i:nums) heap.push(i);

            for(int i=0; i<=k-1; i++){
                heap.pop();
            }

        //kth largest element in array
        return heap.top();
        }

        int findKthSmallest(int arr[], int l, int r, int k) {
            //complete the function
            int ans;
            sort(arr, arr+r+1);
            ans = arr[k-1];
            return ans;
        }
};

int main(){
    cout << "Major Question Based on overall Week : " << endl;
    Solution obj;
    //complete the code
    // cout << "Enter the Array size :" << endl;
    // int n;
    // cin >> n;
    // cout << "Enter the Array Elements :" << endl;
    // int arr[n];

    // //input
    // for(int i=0; i<=n-1; i++){
    //     cin >> arr[i];
    // }
    // //output
    // cout << "Resultant Array : " << endl;
    // for(int i=0; i<=n-1; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << " " << endl;
    ////Q1: Find Sum
    // cout << "Sum : " << obj.findSum(arr, n) << endl;

    ////Q2: Reverse a String
    // cout << "Enter a String" << endl;
    // string str;
    // cin >> str;
    // cout << "you entered : \n"<< str << endl;
    // cout << "Reverse String : \n" << obj.reverseWord(str) << endl;

    ////Q3: Maximum Subarray Sum
    // cout << "Given Array : " << endl;
    // vector<int> arr1 = {-2,1,-3,4,-1,2,1,-5,4};
    // obj.toPrint(arr1);
    // cout << "\nMaximum Subarray Sum : \n" << obj.maxSubArray(arr1) << endl;

    //Q4: Contains Duplicate
    // vector<int> arr2 = {1,1,1,3,3,4,3,2,4,2};
    // obj.toPrint(arr2);
    // cout << "\nContains Duplicate\n" << obj.containsDuplicate(arr2);

    //Q5: Search in Rotated Sorted Array
    // vector<int> arr3 = {4,5,6,7,0,1,2};
    // obj.toPrint(arr3);
    // cout << "\nEnter the Element to search in Array : " << endl;
    // int target;
    // cin >> target;
    // cout << "Target : " << target << endl;
    // cout << "Element Found at Index : " << obj.search(arr3, target) << endl;

    // //Q6:  Best Time to Buy and Sell Stock
    // vector<int> arr4 = {7,1,5,3,6,4};
    // obj.toPrint(arr4);
    // cout << "Best Time to Buy and Sell Stock : \n" << obj.maxProfit(arr4);


    // //Q7:  Find the Kth Largest Element in Array
    // vector<int> arr1 = {3,2,1,5,6,4};
    // int target = 2;
    // cout << "Target : " << target << endl;
    // Solution s;
    // cout << "The " << target << " Largest element in array is : " << s.findKthLargest(arr1, target) << endl;

    //Q8:  Find the Kth Smallest Element in Array
    //cout << "The " << target << " Smallest element in array is : " << s.findKthSmallest(arr1, 0, n-1,  target) << endl;
    return 0;
}
