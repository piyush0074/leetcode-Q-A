/*
https://leetcode.com/problems/richest-customer-wealth/submissions/
*/

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(int i=0;i<accounts.size();i++){
            int tmp = 0;
            for(int j=0;j<accounts[i].size();j++){
                tmp+=accounts[i][j];
            }
            ans = max(ans,tmp);
        }
        return ans;
    }
};

int main() {
	vector<vector<int>> arr {{2,8,7},{7,1,3},{1,9,5}};
	Solution fun;
	int ans = fun.maximumWealth(arr);
	cout<<ans;
}

