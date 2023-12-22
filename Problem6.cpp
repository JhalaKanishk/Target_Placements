#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MaxProfit = INT32_MIN;
        int minSoFar = prices[0];
        for(int i=0; i<=prices.size()-1; i++){
            minSoFar = min(prices[i], minSoFar);
            int profitSoFar = prices[i] - minSoFar; 
            MaxProfit = max(MaxProfit,profitSoFar);
        }
        return MaxProfit;
    }
};

int main(){
    cout << "P8 :  Best Time to Buy and Sell Stock" << endl;
    vector<int> arr = {7,1,5,3,6,4};
    //toPrint
    for(int i=0;i<=arr.size()-1;i++){
        cout << arr[i] << " ";
    }
    cout << "" << endl;

    Solution s;
    cout << "Maximum Profit : " << s.maxProfit(arr) << endl;

    return 0;
}
